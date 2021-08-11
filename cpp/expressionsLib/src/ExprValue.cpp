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
#include "ExprValue.h"
#include <limits>

namespace OscExpression
{


	
		ExprValue::ExprValue()
		{
			
		}

		std::shared_ptr<double> ExprValue::CreatePrimitiveDouble(std::string doubleValueString)
		{
			
			const char* input = doubleValueString.c_str();

			char* end = 0;
			errno = 0;
			double result = strtod(input, &end);

			if (result == 0 && (errno != 0 || end == input)) {
				return nullptr;
			}
			return std::make_shared<double>(result);
		}


		std::shared_ptr<ExprValue> ExprValue::CreateDoubleValue(double doubleValue)
		{
			std::shared_ptr <ExprValue> result = std::shared_ptr <ExprValue>(new ExprValue());
			result->doubleValue = doubleValue;
			result->exprType = ExprType::DOUBLE;
			return result;
		}

		std::shared_ptr<ExprValue> ExprValue::CreateUnsignedShortValue(double unsignedShortValue)
		{
			std::shared_ptr <ExprValue> result = std::shared_ptr <ExprValue>(new ExprValue());
			result->doubleValue = unsignedShortValue;
			result->exprType = ExprType::UNSIGNED_SHORT;
			return result;
		}

		std::shared_ptr<ExprValue> ExprValue::CreateUnsignedIntValue(double unsignedIntValue)
		{
			std::shared_ptr <ExprValue> result = std::shared_ptr <ExprValue>(new ExprValue());
			result->doubleValue = unsignedIntValue;
			result->exprType = ExprType::UNSIGNED_INT;
			return result;
		}

		std::shared_ptr<ExprValue> ExprValue::CreateIntValue(double intValue)
		{
			std::shared_ptr <ExprValue> result = std::shared_ptr <ExprValue>(new ExprValue());
			result->doubleValue = intValue;
			result->exprType = ExprType::INT;
			return result;
		}

		std::shared_ptr<ExprValue> ExprValue::CreateStringValue()
		{
			std::shared_ptr <ExprValue> result = std::shared_ptr <ExprValue>(new ExprValue());
			result->exprType = ExprType::STRING;
			return result;

		}

		std::shared_ptr<ExprValue> ExprValue::CreateDateTimeValue()
		{
			std::shared_ptr <ExprValue> result = std::shared_ptr <ExprValue>(new ExprValue());
			result->exprType = ExprType::DATE_TIME;
			return result;
		}

		std::shared_ptr<ExprValue> ExprValue::CreateBooleanValue()
		{
			std::shared_ptr <ExprValue> result = std::shared_ptr <ExprValue>(new ExprValue());
			result->exprType = ExprType::BOOLEAN;
			return result;
		}

		double ExprValue::getDoubleValue()
		{
			return doubleValue;
		}


		std::shared_ptr<ExprType> ExprValue::GetExprType()
		{
			return exprType;
		}

		bool ExprValue::IsOfType(std::vector<std::shared_ptr<ExprType>> types)
		{
			return std::find(types.begin(), types.end(), exprType) != types.end();
		}

		bool ExprValue::IsFloatingPointNumeric()
		{
			return exprType == ExprType::DOUBLE;
		}

		std::shared_ptr <ExprValue> ExprValue::ConvertToInt()
		{
			std::shared_ptr<ExprValue> result = nullptr;
			
			if (doubleValue >= INT_MIN && doubleValue <= INT_MAX)
			{
				result = CreateIntValue(doubleValue);
			}

			return result;
		}

		std::shared_ptr <ExprValue> ExprValue::ConvertToUnsignedInt()
		{
			std::shared_ptr<ExprValue> result = nullptr;

			if (doubleValue >= 0 && doubleValue <= UINT_MAX)
			{
				result = ExprValue::CreateUnsignedIntValue(doubleValue);
			}

			return result;
		}

		std::shared_ptr <ExprValue> ExprValue::ConvertToUnsignedShort()
		{
			std::shared_ptr<ExprValue> result = nullptr;

			if (doubleValue >= 0 && doubleValue <= USHRT_MAX)
			{
				result = ExprValue::CreateUnsignedShortValue(doubleValue);
			}

			return result;
		}

		std::shared_ptr <ExprValue>  ExprValue::ConvertToDouble()
		{
			return CreateDoubleValue(doubleValue);
		}

		std::string ExprValue::ToString()
		{
			if (GetExprType() == ExprType::UNSIGNED_INT || 
				GetExprType() == ExprType::INT ||
				GetExprType() == ExprType::UNSIGNED_SHORT ||
				GetExprType() == ExprType::DOUBLE)
			{
				return std::to_string(getDoubleValue());
			}
			return nullptr;
		}

	};

