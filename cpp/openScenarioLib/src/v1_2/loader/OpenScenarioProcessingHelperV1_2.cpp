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


#include "OpenScenarioProcessingHelperV1_2.h"
#include <map>

#include "ExpressionResolverV1_2.h"
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_2
    {
	    class ExpressionResolver;


	    bool OpenScenarioProcessingHelper::IsCatalog(std::shared_ptr<IOpenScenario> openScenario)
        {
            auto openScenarioCategory = openScenario->GetOpenScenarioCategory();
            return openScenarioCategory != nullptr && openScenarioCategory->GetCatalogDefinition() != nullptr;
        }

       void OpenScenarioProcessingHelper::Resolve(std::shared_ptr<IParserMessageLogger>& logger, std::shared_ptr<OpenScenarioImpl> openScenario, std::map<std::string, std::string>& injectedParameters)
        {
            //if (!IsCatalog(openScenario))
                ExpressionResolver expressionResolver;
				expressionResolver.Resolve(logger, openScenario, injectedParameters, true);
        }


        void OpenScenarioProcessingHelper::ResolveWithParameterAssignements(std::shared_ptr<IParserMessageLogger> logger, std::shared_ptr<ICatalogElement>& catalogElement, const std::map<std::string, std::string> parameterAssignments)
        {
			ExpressionResolver expressionResolver;
			expressionResolver.ResolveWithParameterAssignments(logger, catalogElement, parameterAssignments);
        }

    }
}
