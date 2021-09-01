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
#include "IParserMessageLogger.h"
#include "OpenScenarioProcessingHelperV1_1.h"
#include "ScenarioCheckerImplV1_1.h"
#include "IScenarioLoader.h"
#include "IResourceLocator.h"
#include "ExportDefinitions.h"
#include "ParameterDeclarationCheckerV1_1.h"


namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_1
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
			XmlScenarioLoader(std::string& filename, std::shared_ptr<IResourceLocator>& resourceLocator);
            virtual ~XmlScenarioLoader();

            /**
             * The resource locator of the loader
             * @return the resource locator
             */
			std::shared_ptr<IResourceLocator> GetResourceLocator() const;

            /**
             * The filename od the loader
             * @return the filename
             */
			std::string GetFilename() const;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioModelElement> Load(std::shared_ptr<IParserMessageLogger> messageLogger) override;
            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioModelElement> Load(std::shared_ptr<IParserMessageLogger> messageLogger, std::map<std::string, std::string>& injectedParameters) override;

        };
    }
}
