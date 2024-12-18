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

#include "PropertyTreeContext.h"
#include <memory>


namespace NET_ASAM_OPENSCENARIO
{
   
	PropertyTreeContext::PropertyTreeContext(std::shared_ptr<IOpenScenarioModelElement> treeObjectContext, std::vector<std::string>&  propertyNames): BaseTreeContext(treeObjectContext)
    {
        if (!propertyNames.empty())
            _propertyNames = propertyNames;
    }

    std::vector<std::string> PropertyTreeContext::GetPropertyNames()
    {
        return _propertyNames;
    }

    std::shared_ptr<PropertyTreeContext> PropertyTreeContext::Create(std::shared_ptr<IOpenScenarioModelElement> treeObjectContext, const std::string propertyName)
    {
        std::vector<std::string> propertyNames;
        propertyNames.push_back(propertyName);
        return std::make_shared<PropertyTreeContext>(treeObjectContext, propertyNames);
    }

}
