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

#include <vector>
#include <set>
#include <map>
#include "ExpressionResolverStackV1_1.h"


namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_1
    {
	    std::shared_ptr<OscExpression::ExprValue> ExpressionResolverStack::FindExpression(std::string& parameterName)
	    {
			const auto &kIt = _parameterValueLists.find(parameterName);
			if (kIt != _parameterValueLists.end())
			{
				std::shared_ptr<std::vector <std::shared_ptr<OscExpression::ExprValue>>> expressionVector;
				expressionVector = kIt->second;
				// return the first occurance in the vector
				return *expressionVector->begin();
			}
			return nullptr;
	    }

	    ExpressionResolverStack::ExpressionResolverStack()
	    {
			_flatParameterValueSet = std::make_shared<std::map<std::string, std::shared_ptr<OscExpression::ExprValue>>>(std::map<std::string, std::shared_ptr<OscExpression::ExprValue>>{});

	    }

	    ExpressionResolverStack::~ExpressionResolverStack()
	    {
	    }

	    void ExpressionResolverStack::PushExpression(std::string name, std::shared_ptr<OscExpression::ExprValue> expression)
	    {
	    	// Is there already a vector
			const auto &kIt = _parameterValueLists.find(name);
			std::shared_ptr<std::vector <std::shared_ptr<OscExpression::ExprValue>>> expressionVector;
	    	
			if (kIt != _parameterValueLists.end())
			{
				expressionVector =  kIt->second;
				_flatParameterValueSet->erase(name);
			}else
			{
				// insert into list
				expressionVector = std::make_shared< std::vector <std::shared_ptr<OscExpression::ExprValue>>>();
				_parameterValueLists.insert(std::pair<std::string, std::shared_ptr<std::vector <std::shared_ptr<OscExpression::ExprValue>>>>(name, expressionVector));
			}
	    	
			expressionVector->insert(expressionVector->begin(), expression);
	    	// Overwrite it in the flat list
			_flatParameterValueSet->insert(std::pair < std::string, std::shared_ptr<OscExpression::ExprValue>>(name, expression));
	    	// push it to the name stack
			_nameStack.insert(_nameStack.begin(), name);
	    }

	    void ExpressionResolverStack::PopExpression(int count)
	    {
	    	for (int i = 0; i< count; i++)
			{ 
	    		// Get Name from name stack
				std::string lastNameAdded = *_nameStack.begin();
	    		//Pop it from the stack
				_nameStack.erase(_nameStack.begin());
	    		// Erase it from the lists
				_flatParameterValueSet->erase(lastNameAdded);
				const auto &kIt = _parameterValueLists.find(lastNameAdded);
				std::shared_ptr<std::vector <std::shared_ptr<OscExpression::ExprValue>>> expressionVector = kIt->second;
				expressionVector->erase(expressionVector->begin());
	    		if (!expressionVector->empty())
	    		{
	    			// insert the next from the list
					_flatParameterValueSet->insert(std::pair < std::string, std::shared_ptr<OscExpression::ExprValue>>(lastNameAdded, *expressionVector->begin()));

	    		}else
	    		{
	    			// delete the vector
					_parameterValueLists.erase(lastNameAdded);
	    		}
			}
	    }

	    std::shared_ptr<std::map<std::string, std::shared_ptr<OscExpression::ExprValue>>> ExpressionResolverStack::GetCurrentMap()
	    {
			return _flatParameterValueSet;
	    }
    }
}
