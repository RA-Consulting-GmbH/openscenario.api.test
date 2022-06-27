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

#include "XmlScenarioLoaderFactoryV1_2.h"
#include "XmlScenarioLoaderV1_2.h"
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_2
    {
		XmlScenarioLoaderFactory::XmlScenarioLoaderFactory(const std::string filename, bool supressDeprecationWarnings) : _filename(filename), _supressDeprecationWarnings(supressDeprecationWarnings){}

	    std::shared_ptr<IScenarioLoader> XmlScenarioLoaderFactory::CreateLoader(std::shared_ptr<IResourceLocator> resourceLocator)
	    {
	        return std::make_shared<XmlScenarioLoader>(_filename, resourceLocator, _supressDeprecationWarnings);
	    }
    }
}
