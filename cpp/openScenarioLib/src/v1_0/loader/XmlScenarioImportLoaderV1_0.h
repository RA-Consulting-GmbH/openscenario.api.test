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
#include "ApiClassInterfacesV1_0.h"
#include "IParserMessageLogger.h"
#include "ApiClassImplV1_0.h"
#include "XmlScenarioLoaderV1_0.h"
#include "XmlScenarioLoaderFactoryV1_0.h"

#undef ERROR
namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_0
    {
        /**
         * Implemens a loader for catalogs
         */
        class XmlScenarioImportLoader : public IScenarioLoader
        {

        private:
            std::shared_ptr<XmlScenarioLoader> _innerScenarioLoader;
            std::shared_ptr<IParserMessageLogger> _catalogMessageLogger;
            std::map<std::string, std::string> _customCatalogLocations;

        public:
            /**
             * Replace the catalog locations of the open scenario file with a set of different ones.
             * To be used for fixing catalog locations while opening without modifying the file itself.
             * @param valueMap map of oldCatalogPath and newCatalogPath for catalog locations to be replaced
             */
			void setExternalCatalogLocations(const std::map<std::string, std::string>& valueMap);
            /**
            * Constructor
            * @param innerScenarioLoader scenario loader that is used to get properties from (Resource locators, filename)
            * @param catalogMessageLogger message logger for catalogs.
            */
			XmlScenarioImportLoader(std::shared_ptr<XmlScenarioLoader>& innerScenarioLoader, std::shared_ptr<IParserMessageLogger>& catalogMessageLogger);

			std::shared_ptr<IOpenScenarioModelElement> Load(std::shared_ptr<IParserMessageLogger> messageLogger) override;

			std::shared_ptr<IOpenScenarioModelElement> Load(std::shared_ptr<IParserMessageLogger> messageLogger, std::map<std::string, std::string>& injectedParameters) override;

        private:
            /**
             * The map for the list of parameter assignment that maps parameter names
             * to assigned parameter values.
             * @param parameterAssignments list of parameter assignments from a catalog referernce
             * @param parserMessageLogger to log errors and warnings
             * @return the table that maps parameter names to parameter values
             */
			std::map<std::string, std::string> GetMapFromParameterAssignements(const std::vector<std::shared_ptr<IParameterAssignment>> parameterAssignments, std::shared_ptr<IParserMessageLogger> parserMessageLogger) const;
 
            /**
             * @param openScenario the IOpenScenario instance
             * Extract the catalog locations from a IOpenScenario instance
             * @param resourceLocator locator for the symbolic filenames
             * @param filename a base directory
             * @param messageLogger to log errors and warnings
             * @return a set of symbolic directory names
             */
			std::vector<std::string> GetCatalogLocations(std::shared_ptr<IOpenScenario>& openScenario, IResourceLocator& resourceLocator, std::string& filename, std::shared_ptr<IParserMessageLogger> messageLogger);
        	
			/**
			 * Adding symbolic directory names from an IDirectory model element
			 * @param resourceLocator resource locator for abstracting from file system
			 * @param filename base file name
			 * @param messageLogger to log messages
			 * @param result in/out parameter
			 * @param directory the IDirectorx model element
			 */
			void AddPath(IResourceLocator& resourceLocator, std::string& filename, std::shared_ptr<IParserMessageLogger>& messageLogger, std::vector<std::string>& result, std::shared_ptr<IDirectory> directory, const std::string& type = std::string());

  
        };
    }
}
