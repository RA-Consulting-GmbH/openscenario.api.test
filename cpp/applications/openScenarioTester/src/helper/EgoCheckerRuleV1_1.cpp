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

#include "TestBaseV1_1.h"
#include "ICheckerRule.h"
#include "FileContentMessage.h"
#include "ILocator.h"
#include "IParserMessageLogger.h"
#include "ApiClassInterfacesV1_1.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_1
	{


		class EgoCheckerRule: public NET_ASAM_OPENSCENARIO::ICheckerRule<IEntities> 
		{
		private:
			bool IsEgoDefined(std::shared_ptr<IEntities> object) const
			{
				bool isEgoDefined = false;

				// We are adding the validation code here
				auto scenarioObjects = object->GetScenarioObjects();
				if ( object->GetScenarioObjectsSize() != 0 )
				{
					for (auto&& scenarioObject : scenarioObjects)
					{
						auto name = scenarioObject->GetName();
						for (std::string::iterator it = name.begin(); it != name.end(); ++it)
							*it = std::tolower(*it, std::locale());
						if (name == "ego")
						{
							isEgoDefined = true;
							break;
						}
					}
				}

				return isEgoDefined;
			}

		public:

			void ApplyRuleInFileContext(std::shared_ptr<NET_ASAM_OPENSCENARIO::IParserMessageLogger> messageLogger, std::shared_ptr<IEntities> object) override
			{
				if (!IsEgoDefined(object))
				{
					auto locator = std::static_pointer_cast<NET_ASAM_OPENSCENARIO::ILocator>(object->GetAdapter(typeid(NET_ASAM_OPENSCENARIO::ILocator).name()));
					if (locator) 
					{
						auto msg = NET_ASAM_OPENSCENARIO::FileContentMessage("No ego vehicle defined", NET_ASAM_OPENSCENARIO::ErrorLevel::ERROR, locator->GetStartMarker());
						messageLogger->LogMessage(msg);
					}
					
				}
			}

			void ApplyRuleInTreeContext(std::shared_ptr<NET_ASAM_OPENSCENARIO::ITreeMessageLogger> messageLogger, std::shared_ptr<IEntities> object) override
			{
				if (!IsEgoDefined(object))
				{
					//const auto kLocator = std::static_pointer_cast<NET_ASAM_OPENSCENARIO::ILocator>(object->GetAdapter(typeid(NET_ASAM_OPENSCENARIO::ILocator).name()));
					//if (kLocator)
					//{
						const auto kContext = std::make_shared<NET_ASAM_OPENSCENARIO::BaseTreeContext>(object);
						NET_ASAM_OPENSCENARIO::TreeContentMessage tcm("No ego vehicle defined", NET_ASAM_OPENSCENARIO::ErrorLevel::ERROR, kContext);
						messageLogger->LogMessage(tcm);
					//}

				}
			}
		};
	}
}
