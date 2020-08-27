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
#include <iostream>
#include <fstream>
#include "ApiClassInterfaces.h"
#include "ICatalogReferenceProvider.h"
#include "IScenarioChecker.h"
#include "ErrorLevel.h"
#include "FileContentMessage.h"
#include "IParserMessageLogger.h"
#include "Textmarker.h"
#include "ParserContext.h"
//#include "XmlParsers.h"
#include "IndexedElement.h"
#include "XmlToSimpleNodeConverter.h"
#include "PositionIndex.h"
#include "OpenScenarioProcessingHelper.h"
#include "ScenarioCheckerImpl.h"
#include "IScenarioLoader.h"
#include "IResourceLocator.h"
#include "MemLeakDetection.h"


namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_0
    {
        /**
        * A loader for a scenario from XML
        */
        class XmlScenarioLoader : public IScenarioLoader
        {
        private:
            std::string _filename;
            std::shared_ptr<IResourceLocator> _resourceLocator;

        public:
            /**
             * Constructor
             * @param filename symbolic filename of the scenario
             * @param resourceLocator locator abstracting from storage.
             */
            XmlScenarioLoader(std::string& filename, std::shared_ptr<IResourceLocator>& resourceLocator) : _filename(filename), _resourceLocator(resourceLocator) {}
            virtual ~XmlScenarioLoader() = default;

            /**
             * The resource locator of the loader
             * @return the resource locator
             */
            std::shared_ptr<IResourceLocator> GetResourceLocator() const
            {
                return _resourceLocator;
            }

            /**
             * The filename od the loader
             * @return the filename
             */
            std::string GetFilename() const
            {
                return _filename;
            }

            std::shared_ptr<IOpenScenarioModelElement> Load(std::shared_ptr<IParserMessageLogger> messageLogger) override;

            std::shared_ptr<IOpenScenarioModelElement> Load(std::shared_ptr<IParserMessageLogger> messageLogger, std::map<std::string, std::string>& injectedParameters) override;

        };
    }
}
