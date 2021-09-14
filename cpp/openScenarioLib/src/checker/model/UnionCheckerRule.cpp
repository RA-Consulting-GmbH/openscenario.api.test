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


#include "UnionCheckerRule.h"


namespace NET_ASAM_OPENSCENARIO
{
	UnionCheckerRule::UnionCheckerRule() = default;
	UnionCheckerRule::~UnionCheckerRule() = default;

	std::string UnionCheckerRule::GetTooManyMessage(std::vector<std::string>& properties)
	{
		std::string returnString = "Multiple children are set (";

		for (auto&& property : properties)
		{
			returnString += property + ", ";
		}

		returnString += ")";
		return returnString;
	}

	std::string UnionCheckerRule::GetTooFewMessage(std::vector<std::string>& properties)
	{
		std::string returnString = "One of these children must be set (";

		for (auto&& property : properties)
		{
			returnString += property + ", ";
		}

		returnString += ")";
		return returnString;
	}

}
