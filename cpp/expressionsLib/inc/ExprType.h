#pragma once

#include <string>
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
#include <map>
#include <vector>
#include <memory>
#include "OscExprExportDefs.h"


namespace OscExpression
{

	/**
	 * This class defines the possible type of expressions
	 * <p>
	 * 
	 *
	 * Values are according to the primitive type used in OSC
	 * <ul>
	 * <li>UNSIGNED_INT - unsigned integer type
	 * <li>INT - integer type
	 * <li>UNSIGNED_SHORT - unsigned short type,
	 * <li>DOUBLE - double type
	 * <li>STRING - string type,
	 * <li>BOOLEAN - boolean type,
	 * <li>DATE_TIME - date time type;
	 * </ul>
	 *
	 * @author Andreas Hege - RA Consulting
	*/
	class ExprType
	{
	public:
		
		// instances

		/**
		* unsigned integer type
		*/
		static std::shared_ptr<ExprType> UNSIGNED_INT;

		/**
		* integer type
		*/
		static std::shared_ptr<ExprType> INT;

		/**
		* unsigned short type
		*/
		static std::shared_ptr<ExprType> UNSIGNED_SHORT;

		/**
		* double type
		*/
		static std::shared_ptr<ExprType> DOUBLE;

		/**
		* string type
		*/
		static std::shared_ptr<ExprType> STRING;

		/**
		* boolean type
		*/
		static std::shared_ptr<ExprType> BOOLEAN;

		/**
		* date time type
		*/
		static std::shared_ptr<ExprType> DATE_TIME;


		/**
		 * Exported Getters for static variables (Linker errors, when trying to export static variables explicitly. Exporting satic functions works)
		 */

		 /**
		 * unsigned integer type
		 */
		OSC_EXPR_EXP static std::shared_ptr<ExprType> GetUnsignedIntType();

		/**
		* integer type
		*/
		OSC_EXPR_EXP static std::shared_ptr<ExprType> GetIntType();

		/**
		* unsigned short type
		*/
		OSC_EXPR_EXP static std::shared_ptr<ExprType> GetUnsignedShortType();

		/**
		* double type
		*/
		OSC_EXPR_EXP static std::shared_ptr<ExprType> GetDoubleType();

		/**
		* string type
		*/
		OSC_EXPR_EXP static std::shared_ptr<ExprType> GetStringType();

		/**
		* boolean type
		*/
		OSC_EXPR_EXP static std::shared_ptr<ExprType> GetBooleanType();

		/**
		* date time type
		*/
		OSC_EXPR_EXP static std::shared_ptr<ExprType> GetDateTimeType();


		/**
		 * Retrieves the enum object for the given the literal.
		 * @param literal as string.
		 * @return the enum object if the literal exists else a nullptr is returned.
		 */
		OSC_EXPR_EXP static std::shared_ptr<ExprType> GetFromLiteral(const std::string& literal);

		/**
		 * Returns whether the expression type is convertible to the target type
		 * @param targetType the target type the type .
		 * @return true, if the the expression type can be converted to the target type.
		 */
		OSC_EXPR_EXP bool IsTypeConvertibleTo(std::shared_ptr<ExprType> targetType);

		/**
		 * Returns whether the expression type is a integer numeric type
		 * @return true, if the the expression type is integer numeric.
		 */
		OSC_EXPR_EXP bool IsIntegerNumeric();


	private:
		const std::string _literal;
		static std::map<std::string, std::shared_ptr<ExprType>> _literalToInstance;
		static std::map <ExprType*, std::vector<ExprType*>> _conversionTable;
		

		/**
		 * Private constructor using the enumeration.
		 * @param literal as defined in the model.
		 */
		ExprType(const std::string literal);



	public:

		// No default constructor
		OSC_EXPR_EXP ExprType() = delete;

		/**
		 * Retrieves the literal from this object.
		 * @return the literal as defined in the model.
		 */
		OSC_EXPR_EXP std::string GetLiteral() const;

	};

}