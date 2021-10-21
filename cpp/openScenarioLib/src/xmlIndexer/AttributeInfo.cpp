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

#include "AttributeInfo.h"
#include <string>
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{


		AttributeInfo::AttributeInfo()
		{
		}
	
		AttributeInfo::AttributeInfo(std::string& name, const size_t startValueLine, const size_t startValueColumn)
		{
			_startValuePosition = Position(static_cast<int>(startValueLine), static_cast<int>(startValueColumn));
			_name = name;
		}

        /**
         * The name of the attribute
         * @return the name
         */
        std::string AttributeInfo::GetName() const
        {
            return _name;
        }

		Position AttributeInfo::GetStartValuePosition() const
		{
			return _startValuePosition;
		}
}
