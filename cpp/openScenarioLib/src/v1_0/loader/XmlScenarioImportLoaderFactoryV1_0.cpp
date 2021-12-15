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

#include "XmlScenarioImportLoaderFactoryV1_0.h"
#include "XmlScenarioLoaderV1_0.h"
#include "XmlScenarioImportLoaderV1_0.h"
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_0
    {
		XmlScenarioImportLoaderFactory::XmlScenarioImportLoaderFactory(const std::shared_ptr<IParserMessageLogger> catalogMessageLogger, const std::string filename) :_catalogMessageLogger(catalogMessageLogger), _filename(filename) {}

        std::shared_ptr<IScenarioLoader> XmlScenarioImportLoaderFactory::CreateLoader(std::shared_ptr<IResourceLocator> resourceLocator)
        {
            auto innerScenarioLoader = std::make_shared<XmlScenarioLoader>(_filename, resourceLocator);
            return std::make_shared<XmlScenarioImportLoader>(innerScenarioLoader, _catalogMessageLogger);
        }
       
    }
}
