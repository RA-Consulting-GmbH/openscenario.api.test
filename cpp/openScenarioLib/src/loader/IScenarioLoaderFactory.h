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
#include "IScenarioLoader.h"
#include "IResourceLocator.h"
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{
    /**
     * A factory to create a IScenarioLoader. A factory assembles the parts for a IScenarioLoader implementation.
     */
    class IScenarioLoaderFactory 
    {
    public:

        IScenarioLoaderFactory() = default;
        virtual ~IScenarioLoaderFactory() = default;

        /**
         * Assembles a loader with a specific resource locator
         * @param resourceLocator a resource locator to resolve the resources.
         * @return a assembled loader.
         */
         virtual std::shared_ptr<IScenarioLoader> CreateLoader(std::shared_ptr<IResourceLocator> resourceLocator)
         {
             return {};
         }
    };
}
