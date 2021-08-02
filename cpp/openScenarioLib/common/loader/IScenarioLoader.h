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
#include "ApiClassInterfacesV1_0.h"
#include "ScenarioLoaderException.h"
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{

    /**
     * Abstracts the source the open scenario file is loaded from. t could be a file
     * system or a database.
     */
    class IScenarioLoader 
    {
    public:
        virtual ~IScenarioLoader() = default;
        /**
         * Loads a scenario.
         * @param messageLogger to log the messaes during loading.
         * @return the IOpenScensrio root object of a scenario. it may be inconsistent when errors occured.
         * @throws ScenarioLoaderException An Exception when the loader stops with a fatal error.
         */
         virtual std::shared_ptr<IOpenScenarioModelElement> Load(std::shared_ptr<IParserMessageLogger> messageLogger) // throw(ScenarioLoaderException)
         {
             return {};
         }

         /**
          * Loads a scenario with injected parameters
          *
          * @param messageLogger
          * @param injectedParameters name value pairs of injected parameters.
          * @return the IOpenScenario root object of a scenario. it may be inconsistent when errors
          *     occurred.
          * @throws ScenarioLoaderException An Exception when the loader stops with a fatal error.
          */
         virtual std::shared_ptr<IOpenScenarioModelElement> Load(std::shared_ptr<IParserMessageLogger> messageLogger, std::map<std::string, std::string>& injectedParameters)
         {
             return {};
         }
    };
}
