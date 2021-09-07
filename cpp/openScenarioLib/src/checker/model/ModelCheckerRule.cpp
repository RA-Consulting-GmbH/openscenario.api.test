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


#include "ModelCheckerRule.h"
#include "ILocator.h"


/**
 * A base class for model validation
 * @param <T> the type to be checked
 *
 */
namespace NET_ASAM_OPENSCENARIO
{
	ModelCheckerRule::ModelCheckerRule() = default;
	ModelCheckerRule::~ModelCheckerRule() = default;

	std::shared_ptr<Textmarker> ModelCheckerRule::GetTextmarker(std::shared_ptr<IOpenScenarioModelElement> object)
	{
		auto locator = std::static_pointer_cast<NET_ASAM_OPENSCENARIO::ILocator>(object->GetAdapter(typeid(ILocator).name()));

		if (locator) 
		{
			return std::make_shared<Textmarker>(locator->GetStartMarker());
		}
	
		return nullptr;
	}


}
