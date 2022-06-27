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
#include <map>
#include <memory>
#include <vector>
#include "ApiClassImplV1_2.h"
#include "BaseImpl.h"


namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_2
    {
        /**
        * A stack for expressions
        */
        class ExpressionResolverStack
        {

        private:
			std::map<std::string, std::shared_ptr<std::vector <std::shared_ptr<OscExpression::ExprValue>>>> _parameterValueLists;
        	
			std::shared_ptr <std::map<std::string, std::shared_ptr<OscExpression::ExprValue>>> _flatParameterValueSet;
        	
			std::vector <std::string> _nameStack;

			
        	/**
			 * @param parameterName  name of the parameter the value is looked up
			 * @return the expressionValue
			 */
			std::shared_ptr<OscExpression::ExprValue> FindExpression(std::string& parameterName);

			
        public:

			/**
			 * Constructor
			 */
        	ExpressionResolverStack();

			/**
			 * Default Destructor
			 */
			virtual ~ExpressionResolverStack();
        	
			/**
			 * Pushes a parameter value set on the stack. Implementing scopes of values.
			 * The values are always looked up in the head of the stack first.
			 * @param name name of the expression
			 * @param expression expression to push
			 */
			void PushExpression(std::string name, std::shared_ptr<OscExpression::ExprValue> expression);

			/**
			 * Remove the head of the stack
			 * @param count number of elements to be popped
			 */
			void PopExpression(int count);

        	/**
        	 * Returns the Expression Flat list
        	 * @return flat map
        	 */
			std::shared_ptr <std::map<std::string, std::shared_ptr<OscExpression::ExprValue>>> GetCurrentMap();
        };
    }
}
