/*
 * Copyright 2021 RA Consulting
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
#include <map>
#include <vector>
#include "ExprType.h"
#include "OscExprExportDefs.h"
#include <memory>



namespace OscExpression
	{
		/**
		 * This class represents a value in an expression with the type and value.
		 */

		class ExprValue {

		private:
			double doubleValue;
			std::string stringValue;
			bool boolValue;

			std::shared_ptr<ExprType> exprType;
			static std::string  dateTimeRegEx;

		private:
			/** Private constructor */
			ExprValue();


		public:
			/**
			* @param doubleValueString initial double value in its string Representation
			* @return the created double value
			*/
			OSC_EXPR_EXP static std::shared_ptr<double> CreatePrimitiveDouble(std::string doubleValueString);


			/**
			 * @param doubleValue initial double value
			 * @return the created ExprValue
			 */
			OSC_EXPR_EXP static std::shared_ptr<ExprValue> CreateDoubleValue(double doubleValue);


			/**
			 * @param unsignedShortValue
			 * @return the created ExprValue
			 */
			OSC_EXPR_EXP static std::shared_ptr<ExprValue> CreateUnsignedShortValue(double unsignedShortValue);
			
			/**
			 * @param unsignedIntValue
			 * @return the created ExprValue
			 */
			OSC_EXPR_EXP static std::shared_ptr<ExprValue> CreateUnsignedIntValue(double unsignedIntValue);

			/**
			 * @param intValue
			 * @return the created ExprValue
			 */
			OSC_EXPR_EXP static std::shared_ptr<ExprValue> CreateIntValue(double intValue);

			/**
			 * @param stringValue
			 * @return the created ExprValue
			 */
			OSC_EXPR_EXP static std::shared_ptr<ExprValue> CreateStringValue(std::string stringValue);

			/**
			 * Creates the typed Value or returns nullptr when the value cannot be created
			 * @param stringValue the value of the expression
			 * @param exprType the type of the expression
			 * @return the created ExprValue
			 */
			OSC_EXPR_EXP static std::shared_ptr<ExprValue> CreateTypedValue(std::string stringValue, std::shared_ptr<ExprType> exprType);

			/**
			 * @param dateTimeStringValue string representation of the dateTime value
			 * @return the created ExprValue
			 */
			OSC_EXPR_EXP static std::shared_ptr<ExprValue> CreateDateTimeValue(std::string dateTimeStringValue);

			/**
			 * @param boolStringValue string representation of the boolean value
			 * @return the created ExprValue
			 */
			OSC_EXPR_EXP static std::shared_ptr<ExprValue> CreateBooleanValue(std::string boolStringValue);

			/**
			 * @param boolValue boolean value
			 * @return the created ExprValue
			 */OSC_EXPR_EXP static std::shared_ptr<ExprValue> CreateBooleanValue(bool boolValue);

			/**
			 * Returns the value in double
			 * @return the double value
			 */
			OSC_EXPR_EXP double getDoubleValue();


			/**
			 * @return the expression type
			 */
			OSC_EXPR_EXP std::shared_ptr<ExprType> GetExprType();

			/**
			 * Determines wether the expression type of this object's expression type is in types
			 * @param types a list of types handed over.
			 * @return true, if object's expression type is in types
			 */
			OSC_EXPR_EXP bool IsOfType(std::vector<std::shared_ptr<ExprType>> types);

			/**
			 * @return true if object's expression type is floating numeric
			 */
			OSC_EXPR_EXP bool IsFloatingPointNumeric();

			/**
			 * @return true if object's expression type is string based
			 */
			OSC_EXPR_EXP bool IsTypeStringBased();
			
			
			/**
			 * @return true if object's expression type is numeric
			 */
			OSC_EXPR_EXP bool IsTypeNumeric();


			/**
			 * @return the int value or nullptr if conversion is not possible
			 */
			OSC_EXPR_EXP std::shared_ptr <ExprValue> ConvertToInt();
			
			/**
			* @return the int value or nullptr if conversion is not possible
			*/
			OSC_EXPR_EXP std::shared_ptr <ExprValue> ConvertToString();

			/**
			* @return the int value or nullptr if conversion is not possible
			*/
			OSC_EXPR_EXP std::shared_ptr <ExprValue> ConvertToBoolean();

			/**
			* @return the int value or nullptr if conversion is not possible
			*/
			OSC_EXPR_EXP std::shared_ptr <ExprValue> ConvertToDateTime();

			/**
			 * @return the unsigned int expression value or nullptr if conversion is not possible
			 */
			OSC_EXPR_EXP std::shared_ptr <ExprValue> ConvertToUnsignedInt();

			/**
			 * @return the unsigned short expression value or nullptr if conversion is not possible
			 */
			OSC_EXPR_EXP std::shared_ptr <ExprValue> ConvertToUnsignedShort();

			/**
			 * @return the double expression value or nullptr if conversion is not possible
			 */
			OSC_EXPR_EXP std::shared_ptr <ExprValue>  ConvertToDouble();
			
			/**
			 * @return the string representation of the value
			 */
			OSC_EXPR_EXP std::string ToString();
			/**
			 * @return the parameter name
			 */
			OSC_EXPR_EXP std::string GetParameterName();
			
			/**
			 * for non BOOLEAN type this will return false
			 * @return boolean Value
			 */
			OSC_EXPR_EXP bool GetBoolValue();

			std::shared_ptr<ExprValue> ConvertToTargetType(std::shared_ptr<OscExpression::ExprType> type);

			/**
			 * Creates a double value from a string
			 * @return the double value or nullptr if the doubleStringValue cannot be parsed into a double
			 */
			OSC_EXPR_EXP static std::shared_ptr<ExprValue> CreateDoubleValueFromString(std::string doubleStringValue);
			
			
		};

}
