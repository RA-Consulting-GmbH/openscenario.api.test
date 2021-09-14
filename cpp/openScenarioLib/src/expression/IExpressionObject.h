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
#include <string>
#include <vector>

#include "ExprValue.h"
#include "IParserMessageLogger.h"
#include "Textmarker.h"
#include "ParameterValue.h"
#include "SimpleType.h"
#include "MemLeakDetection.h"

/**
 * An accessor to a parameterized object
 *
 */
namespace NET_ASAM_OPENSCENARIO
{
    class IExpressionObject : public IParameterizedObject
    {
    public:
		IExpressionObject() = default;
        virtual  ~IExpressionObject() = default;

        /**
         * A set with all keys for attributes that have parameters instead of real values.
         * @return the set of keys
         */
		virtual std::vector<std::string> GetExpressionAttributeKeys() const = 0;

		/**
		 * resolving a parameter using a string representation of a value
		 * @param logger to log messages
		 * @param attributeKey attribute key whose parameter should be resolved.
		 * @param expression string representation of an expression
		 */
		virtual void ResolveExpression(std::shared_ptr<IParserMessageLogger>& logger, std::string& attributeKey, std::string& expression, std::shared_ptr<std::map<std::string, std::shared_ptr<OscExpression::ExprValue>>> definedParameters) = 0;


        /**
         * The name from a key constant. This method is for assembling messages.
         * @param attributeKey the key constant
         * @return the name of the constant.
         */
		virtual std::string GetExpressionFromAttribute(std::string& attributeKey) const = 0;

        /**
        * The keys of the attributes that are resolved
        * @return set with the keys
        */
		virtual std::vector<std::string> GetResolvedAttributeKeys() const = 0;
    };
}
