/*
 * Copyright 2020 RA Consulting
 *
 * RA Consulting GmbH licenses this file under the Apache License,
 * Version 2.0 (the "License"); you may not use this file except
 * in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once
#include <vector>
#include <map>
#include "ApiClassInterfaces.h"
#include "CatalogCache.h"
#include "ICatalogReferenceProvider.h"
#include "ErrorLevel.h"
#include "FileContentMessage.h"
#include "ILocator.h"
#include "IParserMessageLogger.h"
#include "OscConstants.h"
#include "Textmarker.h"
#include "ApiClassImpl.h"
#include "XmlScenarioLoader.h"
#include "XmlScenarioLoaderFactory.h"
#include "OpenScenarioProcessingHelper.h"
#include "MemLeakDetection.h"

#undef ERROR
namespace NET_ASAM_OPENSCENARIO
{
    namespace V_1_0
    {
        /**
         * Implemens a loader for catalogs
         */
        class XmlScenarioImportLoader : public IScenarioLoader
        {

        private:
            std::shared_ptr<XmlScenarioLoader> _innerScenarioLoader;
            std::shared_ptr<IParserMessageLogger> _catalogMessageLogger;

        public:
            /**
            * Constructor
            * @param innerScenarioLoader scenario loader that is used to get properties from (Resource locators, filename)
            * @param catalogMessageLogger message logger for catalogs.
            */
            XmlScenarioImportLoader(std::shared_ptr<XmlScenarioLoader>& innerScenarioLoader, std::shared_ptr<IParserMessageLogger>& catalogMessageLogger) :_innerScenarioLoader(innerScenarioLoader), _catalogMessageLogger(catalogMessageLogger) {}

            std::shared_ptr<IOpenScenarioModelElement> Load(std::shared_ptr<IParserMessageLogger> messageLogger) override
            {
                std::map<std::string, std::string> injectedParameters;
                return Load(messageLogger, injectedParameters);
            }

            std::shared_ptr<IOpenScenarioModelElement> Load(std::shared_ptr<IParserMessageLogger> messageLogger, std::map<std::string, std::string>& injectedParameters) override
            {
                auto messageLoggerEnvelope = std::make_shared<MessageLoggerDecorator>(messageLogger);
                auto openScenario = std::dynamic_pointer_cast<IOpenScenario>(_innerScenarioLoader->Load(messageLoggerEnvelope));

                if (!messageLoggerEnvelope->HasErrors())
                {
                    auto resourceLocator = _innerScenarioLoader->GetResourceLocator();

                    // do imports here
                    auto filename = _innerScenarioLoader->GetFilename();
                    if (!openScenario)
                        return openScenario;
                    auto catalogLocations = GetCatalogLocations(openScenario, *resourceLocator.get(), filename, messageLoggerEnvelope);
                    CatalogCache catalogCache(resourceLocator, _catalogMessageLogger);
                    for (auto&& catalogLocationPath : catalogLocations)
                    {
                        auto filenames = resourceLocator->GetSymbolicFilenamesInSymbolicDir(catalogLocationPath);
                        for (auto symbolicFilename : filenames)
                        {
                            catalogCache.AddCatalogFile(std::make_shared<XmlScenarioLoaderFactory>(symbolicFilename));
                        }
                    }
                    // Get the CatalogLocations

                    auto catRefProvider = std::static_pointer_cast<ICatalogReferenceProvider>(openScenario->GetAdapter(typeid(ICatalogReferenceProvider).name()));
                    if (!catRefProvider)
                        return openScenario;

                    auto catalogReferences = catRefProvider->GetCatalogReferences();
                    // get the catalogRefences
                    for (auto&& catalogReference : catalogReferences)
                    {
                        auto catalogElement = catalogCache.ImportCatalogElement(catalogReference);
                        if (catalogElement)
                        {
                            auto refImpl = std::dynamic_pointer_cast<CatalogReferenceImpl>(catalogReference);
                            refImpl->SetRef(catalogElement);
                            OpenScenarioProcessingHelper::ResolveWithParameterAssignements(messageLoggerEnvelope, catalogElement,
                                GetMapFromParameterAssignements(catalogReference->GetParameterAssignments(), messageLoggerEnvelope));
                            // resolve CatalogReference Parameters.
                        }
                        else
                        {
                            auto msg = FileContentMessage("Cannot resolve entry '" + catalogReference->GetEntryName() + "' in catalog '"
                                + catalogReference->GetCatalogName() + "'", ERROR, std::dynamic_pointer_cast<CatalogReferenceImpl>(catalogReference)->GetStartMarker());
                            messageLoggerEnvelope->LogMessage(msg);
                        }
                    }

                }

                return openScenario;
            }

        private:
            /**
             * The map for the list of parameter assignment that maps parameter names
             * to assigned parameter values.
             * @param parameterAssignments list of parameter assignments from a catalog referernce
             * @param parserMessageLogger to log errors and warnings
             * @return the table that maps parameter names to parameter values
             */
            std::map<std::string, std::string> GetMapFromParameterAssignements(const std::vector<std::shared_ptr<IParameterAssignment>> parameterAssignments, std::shared_ptr<IParserMessageLogger> parserMessageLogger) const
            {
                std::map<std::string, std::string> result;
                if (!parameterAssignments.empty())
                {
                    for (auto&& kParameterAssignment : parameterAssignments)
                    {
                        auto parameterName = kParameterAssignment->GetParameterRef()->GetNameRef();
                        const auto kParameterValue = kParameterAssignment->GetValue();
                        if (!result[parameterName].empty())
                        {
                            auto msg = FileContentMessage("Parameter '" + parameterName + "assigned multiple times (last wins)", WARNING,
                                std::dynamic_pointer_cast<ParameterAssignmentImpl>(kParameterAssignment)->GetStartMarker());
                            parserMessageLogger->LogMessage(msg);
                        }
                        result[parameterName] = kParameterValue;
                    }
                }
                return result;
            }

            /**
             * @param openScenario the IOpenScenario instance
             * Extract the catalog locations from a IOpenScenario instance
             * @param resourceLocator locator for the symbolic filenames
             * @param filename a base directory
             * @param messageLogger to log errors and warnings
             * @return a set of symbolic directory names
             */
            std::vector<std::string> GetCatalogLocations(std::shared_ptr<IOpenScenario>& openScenario, IResourceLocator& resourceLocator, std::string& filename, std::shared_ptr<IParserMessageLogger> messageLogger)
            {
                std::vector<std::string> result;

                auto temp = std::dynamic_pointer_cast<OpenScenarioImpl>(openScenario)->GetOpenScenarioCategory();
                auto scenarioDefinition = openScenario->GetOpenScenarioCategory()->GetScenarioDefinition();
                if (scenarioDefinition)
                {
                    auto catalogLocations = scenarioDefinition->GetCatalogLocations();
                    if (catalogLocations)
                    {
                        auto controllerCatalogLocation = catalogLocations->GetControllerCatalog();
                        if (controllerCatalogLocation)
                        {
                            const auto kDirectory = controllerCatalogLocation->GetDirectory();
                            AddPath(resourceLocator, filename, messageLogger, result, kDirectory);
                        }

                        auto maneuverCatalogLocation = catalogLocations->GetManeuverCatalog();
                        if (maneuverCatalogLocation)
                        {
                            const auto kDirectory = maneuverCatalogLocation->GetDirectory();
                            AddPath(resourceLocator, filename, messageLogger, result, kDirectory);
                        }

                        auto vehicleCatalogLocation = catalogLocations->GetVehicleCatalog();
                        if (vehicleCatalogLocation)
                        {
                            const auto kDirectory = vehicleCatalogLocation->GetDirectory();
                            AddPath(resourceLocator, filename, messageLogger, result, kDirectory);
                        }

                        auto miscObjectCatalogLocation = catalogLocations->GetMiscObjectCatalog();
                        if (miscObjectCatalogLocation)
                        {
                            const auto kDirectory = miscObjectCatalogLocation->GetDirectory();
                            AddPath(resourceLocator, filename, messageLogger, result, kDirectory);
                        }

                        auto trajectoryCatalogLocation = catalogLocations->GetTrajectoryCatalog();
                        if (trajectoryCatalogLocation)
                        {
                            const auto kDirectory = trajectoryCatalogLocation->GetDirectory();
                            AddPath(resourceLocator, filename, messageLogger, result, kDirectory);
                        }

                        auto environmentCatalogLocation = catalogLocations->GetEnvironmentCatalog();
                        if (environmentCatalogLocation)
                        {
                            const auto kDirectory = environmentCatalogLocation->GetDirectory();
                            AddPath(resourceLocator, filename, messageLogger, result, kDirectory);
                        }

                        auto routeCatalogLocation = catalogLocations->GetRouteCatalog();
                        if (routeCatalogLocation)
                        {
                            const auto kDirectory = routeCatalogLocation->GetDirectory();
                            AddPath(resourceLocator, filename, messageLogger, result, kDirectory);
                        }

                        auto pedestrianCatalogLocation = catalogLocations->GetPedestrianCatalog();
                        if (pedestrianCatalogLocation)
                        {
                            const auto kDirectory = pedestrianCatalogLocation->GetDirectory();
                            AddPath(resourceLocator, filename, messageLogger, result, kDirectory);
                        }
                    }
                }
                return result;
            }

            /**
             * Adding symbolic directory names from an IDirectory model element
             * @param resourceLocator resource locator for abstracting from file system
             * @param filename base file name
             * @param messageLogger to log messages
             * @param result in/out parameter
             * @param directory the IDirectorx model element
             */
            void AddPath(IResourceLocator& resourceLocator, std::string& filename, std::shared_ptr<IParserMessageLogger>& messageLogger, std::vector<std::string>& result, std::shared_ptr<IDirectory> directory)
            {
                if (directory)
                {
                    auto path = directory->GetPath();
                    if (!path.empty())
                    {
                        const auto kSymbolicDirname = resourceLocator.GetSymbolicDirname(filename, path);
                        if (!kSymbolicDirname.empty())
                        {
                            result.push_back(kSymbolicDirname);
                        }
                        else {
                            auto locator = std::static_pointer_cast<ILocator>(directory->GetAdapter(typeid(ILocator).name()));
                            auto attributeString = OSC_CONSTANTS::ATTRIBUTE__PATH;
                            const auto kTextmarker = locator->GetStartMarkerOfProperty(attributeString);

                            auto msg = FileContentMessage("Cannot resolve catalog directory '" + path + "' (" + kSymbolicDirname + ")", ERROR, kTextmarker);
                            messageLogger->LogMessage(msg);
                        }
                    }
                }
            }

        };
    }
}
