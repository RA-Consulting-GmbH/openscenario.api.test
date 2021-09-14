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


#include "OpenScenarioProcessingHelperV1_0.h"
#include <map>
#include "MemLeakDetection.h"
#include "ParameterResolverV1_0.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_0
    {
       

        bool OpenScenarioProcessingHelper::IsCatalog(std::shared_ptr<IOpenScenario> openScenario)
        {
            auto openScenarioCategory = openScenario->GetOpenScenarioCategory();
            return openScenarioCategory != nullptr && openScenarioCategory->GetCatalogDefinition() != nullptr;
        }

       void OpenScenarioProcessingHelper::Resolve(std::shared_ptr<IParserMessageLogger>& logger, std::shared_ptr<OpenScenarioImpl> openScenario, std::map<std::string, std::string>& injectedParameters)
        {
            if (!IsCatalog(openScenario))
            {
                ParameterResolver parameterResolver;
                parameterResolver.Resolve(logger, openScenario, injectedParameters, true);
            }
        }


        void OpenScenarioProcessingHelper::ResolveWithParameterAssignements(std::shared_ptr<IParserMessageLogger> logger, std::shared_ptr<ICatalogElement>& catalogElement, const std::map<std::string, std::string> parameterAssignments)
        {
            ParameterResolver parameterResolver;
            parameterResolver.ResolveWithParameterAssignments(logger, catalogElement, parameterAssignments);
        }

    }
}
