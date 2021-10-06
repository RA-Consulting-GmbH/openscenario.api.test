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
		 * Resolving an unsigned Int expression 
		 * @param attributeKey attribute key whose expression should be resolved.
		 * @param value unsigned int result of an expression
		 */
		virtual void ResolveUnsignedIntExpression(std::string& attributeKey, unsigned int& value) = 0;

		/**
		 * Resolving an int expression
		 * @param attributeKey attribute key whose expression should be resolved.
		 * @param value int result of an expression
		 */
		virtual void ResolveIntExpression(std::string& attributeKey, int& value) = 0;

		/**
		 * Resolving boolean expression
		 * @param attributeKey attribute key whose expression should be resolved.
		 * @param value boolean result of an expression
		 */
		virtual void ResolveBooleanExpression(std::string& attributeKey, bool& value) = 0;

		/**
		 * Resolving an double expression
		 * @param attributeKey attribute key whose expression should be resolved.
		 * @param value double result of an expression
		 */
		virtual void ResolveDoubleExpression(std::string& attributeKey, double& value) = 0;
    	
		/**
		 * Resolving a string expression
		 * @param attributeKey attribute key whose expression should be resolved.
		 * @param value string result of an expression
		 */
		virtual void ResolveStringExpression(std::string& attributeKey, std::string& value) = 0;

		/**
		 * Resolving a unsigned short expression
		 * @param attributeKey attribute key whose expression should be resolved.
		 * @param value unsigned short result of an expression
		 */
		virtual void ResolveUnsignedShortExpression(std::string& attributeKey, unsigned short& value) = 0;
		/**
		 * Resolving a dateTime expression
		 * @param attributeKey attribute key whose expression should be resolved.
		 * @param value string result of an expression
		 */
		virtual void ResolveDateTimeExpression(std::string& attributeKey, DateTime& value) = 0;

		/**
		 * Returns true if attribute is (ParameterDeclaration, value), (ParameterAssignement, value) or (ValueConstraint, value)
		 * @param attributeKey attribute key
		 * @return true if it is a typed string value
		 */
		virtual bool IsTypedStringAttribute(std::string& attributeKey) = 0;

      
    };
}
