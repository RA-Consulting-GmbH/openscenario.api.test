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
#include "OscInterfacesV1_1.h"
#include "ApiClassInterfacesV1_1.h"
#include "IParserMessageLogger.h"
#include "ApiClassImplV1_1.h"
#include "ParameterResolverV1_1.h"
#include <map>
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_1
    {
        /**
        * Helper mehtod for processing a instance of a loaded IOpenScenario
        */
        class OpenScenarioProcessingHelper
        {
        public:
            /**
             * is the loaded scenario a catalog.
             * @param openScenario the loaded instance of IOpenScenario
             * @return true if catalog
             */
            static bool IsCatalog(std::shared_ptr<IOpenScenario> openScenario)
            {
                auto openScenarioCategory = openScenario->GetOpenScenarioCategory();
                return openScenarioCategory != nullptr && openScenarioCategory->GetCatalogDefinition() != nullptr;
            }

            /**
             * Resolve all parameters in the loaded instance of IOpenScenario
             * @param logger to log messages
             * @param openScenario the loaded instance of IOpenScenario
             */
            static void Resolve(std::shared_ptr<IParserMessageLogger>& logger, std::shared_ptr<OpenScenarioImpl> openScenario, std::map<std::string, std::string>& injectedParameters)
            {
                if (!IsCatalog(openScenario))
                {
                    ParameterResolver parameterResolver;
                    parameterResolver.Resolve(logger, openScenario, injectedParameters, true);
                }
            }


            /**
             * Resolve all parameters in the loaded catalog element
             * @param logger to log messages
             * @param catalogElement a catalogElement the parameters will be resolved.
             * @param parameterAssignments the parameter assignments that provide the parameter names and values
             */
            static void ResolveWithParameterAssignements(std::shared_ptr<IParserMessageLogger> logger, std::shared_ptr<ICatalogElement>& catalogElement, const std::map<std::string, std::string> parameterAssignments)
            {
                ParameterResolver parameterResolver;
                parameterResolver.ResolveWithParameterAssignments(logger, catalogElement, parameterAssignments);
            }

        };
    }
}
