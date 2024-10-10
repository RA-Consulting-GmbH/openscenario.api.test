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
#include "XmlScenarioImportLoaderV1_3.h"
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_3
    {
        /**
        * A factory for creating catalog loaders
        */
        class OPENSCENARIOLIB_EXP XmlScenarioImportLoaderFactory : public IScenarioLoaderFactory
        {
        private:

            std::shared_ptr<IParserMessageLogger> _catalogMessageLogger;
            std::string _filename;

        public:
            /**
            * Constructor
            *
            * @param catalogMessageLogger
            *            to log messages
            * @param filename
            *            base directory
            */
			OPENSCENARIOLIB_EXP XmlScenarioImportLoaderFactory(const std::shared_ptr<IParserMessageLogger> catalogMessageLogger, const std::string filename);

			OPENSCENARIOLIB_EXP std::shared_ptr<IScenarioLoader> CreateLoader(std::shared_ptr<IResourceLocator> resourceLocator) override;
        };
    }
}
