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
#include <algorithm>
#include <limits>
//#include <math.h>
#include <climits>
#include <regex>
#include <cmath>

namespace OscExpression
{


	
		ExprValue::ExprValue()
		{
			
		}

		std::string ExprValue::dateTimeRegEx = "(\\d{4}-\\d{2}-\\d{2}T\\d{2}:\\d{2}:\\d{2}\\.?\\d*(\\+|\\-)?\\d{0,2}:?\\d{0,2}Z?)";
	
		std::shared_ptr<double> ExprValue::CreatePrimitiveDouble(std::string doubleValueString)
		{
			
			const char* input = doubleValueString.c_str();

			char* end = 0;
			errno = 0;
			double result = strtod(input, &end);

			if ((result == 0 && errno != 0) || (end != (input + doubleValueString.length()))) {
				return nullptr;
			}
			
			if (result > std::numeric_limits<double>::max())
			{
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

		std::shared_ptr<ExprValue> ExprValue::CreateDoubleValueFromString(std::string doubleStringValue)
		{
			std::shared_ptr <double> doubleValue = CreatePrimitiveDouble(doubleStringValue);
			if (doubleValue == nullptr)
			{
				return nullptr;
			}else
			{
				return CreateDoubleValue(*doubleValue);
			}
			
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

		std::shared_ptr<ExprValue> ExprValue::CreateStringValue(std::string stringValue)
		{
			std::shared_ptr <ExprValue> result = std::shared_ptr <ExprValue>(new ExprValue());
			result->exprType = ExprType::STRING;
			result->stringValue = stringValue;
			return result;

		}


		std::shared_ptr<ExprValue> ExprValue::CreateTypedValue(std::string stringValue, std::shared_ptr<ExprType> exprType)
		{
			std::shared_ptr <ExprValue> result = std::shared_ptr <ExprValue>(new ExprValue());

			if (exprType == ExprType::DOUBLE)
			{
				result = CreateDoubleValueFromString(stringValue);
			}else if (exprType == ExprType::UNSIGNED_INT)
			{
				result = CreateDoubleValueFromString(stringValue);
				if (result != nullptr)
				{
					result = result->ConvertToUnsignedInt();
				}
			}
			else if (exprType == ExprType::UNSIGNED_SHORT)
			{
				result = CreateDoubleValueFromString(stringValue);
				if (result != nullptr)
				{
					result = result->ConvertToUnsignedShort();
				}
			}
			else if (exprType == ExprType::INT)
			{
				result = CreateDoubleValueFromString(stringValue);
				if (result != nullptr)
				{
					result = result->ConvertToInt();
				}
			}
			else if (exprType == ExprType::STRING)
			{
				result = CreateStringValue(stringValue);
				
			}
			else if (exprType == ExprType::BOOLEAN)
			{
				result = CreateBooleanValue(stringValue);
				
			}
			else if (exprType == ExprType::DATE_TIME)
			{
				result = CreateDateTimeValue(stringValue);
				if (result != nullptr)
				{
					result = result->ConvertToDateTime();
				}
			}
			
			return result;
		}

		std::shared_ptr<ExprValue> ExprValue::CreateDateTimeValue(std::string dateTimeStringValue)
		{
			std::shared_ptr <ExprValue> result = std::shared_ptr <ExprValue>(new ExprValue());
			result->exprType = ExprType::DATE_TIME;
			result->stringValue = dateTimeStringValue;
			if (!std::regex_match(dateTimeStringValue, std::regex(dateTimeRegEx)))
			{
				result = nullptr;
			}
			return result;
		}

		std::shared_ptr<ExprValue> ExprValue::CreateBooleanValue(std::string boolStringValue)
		{
			std::shared_ptr <ExprValue> result = std::shared_ptr <ExprValue>(new ExprValue());
			result->exprType = ExprType::BOOLEAN;
			result->stringValue = boolStringValue;
			if (boolStringValue == "true" || boolStringValue == "1")
			{
				result->boolValue = true;
				
			} else if (boolStringValue == "false" || boolStringValue == "0")
			{
				result->boolValue = false;
			}else
			{
				result = nullptr;
			}
			return result;
		}
		std::shared_ptr<ExprValue> ExprValue::CreateBooleanValue(bool boolValue)
		{
			std::shared_ptr <ExprValue> result = std::shared_ptr <ExprValue>(new ExprValue());
			result->exprType = ExprType::BOOLEAN;
			result->stringValue = boolValue ? "true" : "false";
			result->boolValue = boolValue;
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

		bool ExprValue::IsTypeStringBased()
		{
			return GetExprType() == ExprType::STRING ||
				GetExprType() == ExprType::DATE_TIME ||
				GetExprType() == ExprType::BOOLEAN;
		}

		

		bool ExprValue::IsTypeNumeric()
		{
			return GetExprType() == ExprType::UNSIGNED_INT ||
				GetExprType() == ExprType::INT ||
				GetExprType() == ExprType::UNSIGNED_SHORT ||
				GetExprType() == ExprType::DOUBLE;

		}

		std::shared_ptr <ExprValue> ExprValue::ConvertToInt()
		{
			std::shared_ptr<ExprValue> result = nullptr;
			
			if (IsTypeNumeric())
			{
				if (doubleValue >= INT_MIN && doubleValue <= INT_MAX &&std::ceil(doubleValue) == doubleValue)
				{
					result = CreateIntValue(doubleValue);
				}
			}
			else
			{
				result = CreateDoubleValueFromString(stringValue);
				if (result != nullptr)
				{
					result = ExprValue::CreateIntValue(result->getDoubleValue());
				}
			}

			return result;
		}

		std::shared_ptr<ExprValue> ExprValue::ConvertToString()
		{
			std::shared_ptr<ExprValue> result = nullptr;

			if (IsTypeStringBased())
			{
				result = CreateStringValue(stringValue);
			}

			return result;
		}

		std::shared_ptr<ExprValue> ExprValue::ConvertToBoolean()
		{
			std::shared_ptr<ExprValue> result = nullptr;

			if (this->exprType == ExprType::STRING || this->exprType == ExprType::BOOLEAN)
			{
				if (stringValue == "true" || stringValue == "false" || stringValue == "0" || stringValue == "1")
				{
					result = ExprValue::CreateBooleanValue(stringValue);
				}
			}

			return result;
		}

		std::shared_ptr<ExprValue> ExprValue::ConvertToDateTime()
		{
			std::shared_ptr<ExprValue> result = nullptr;

			if (IsTypeStringBased())
			{
				result = ExprValue::CreateDateTimeValue(stringValue);
			}

			return result;
		}

		std::shared_ptr <ExprValue> ExprValue::ConvertToUnsignedInt()
		{
			std::shared_ptr<ExprValue> result = nullptr;

			if (IsTypeNumeric())
			{
				if (doubleValue >= 0 && doubleValue <= UINT_MAX && std::ceil(doubleValue) == doubleValue)
				{
					result = ExprValue::CreateUnsignedIntValue(doubleValue);
				}
			}
			else
			{
				result = CreateDoubleValueFromString(stringValue);
				if (result != nullptr)
				{
					result = ExprValue::CreateUnsignedIntValue(result->getDoubleValue());
				}
			}

			return result;
		}

		std::shared_ptr <ExprValue> ExprValue::ConvertToUnsignedShort()
		{
			std::shared_ptr<ExprValue> result = nullptr;
			
			if (IsTypeNumeric())
			{
				if (doubleValue >= 0 && doubleValue <= USHRT_MAX && std::ceil(doubleValue) == doubleValue)
				{
					result = ExprValue::CreateUnsignedShortValue(doubleValue);
				}
			}
			else
			{
				result = CreateDoubleValueFromString(stringValue);
				if (result != nullptr)
				{
					result = ExprValue::CreateUnsignedShortValue(result->getDoubleValue());
				}
			}

			return result;
		}

		std::shared_ptr <ExprValue>  ExprValue::ConvertToDouble()
		{
			std::shared_ptr<ExprValue> result = nullptr;
			
			if (IsTypeNumeric())
			{
				result =  CreateDoubleValue(doubleValue);
			}else
			{
				result = CreateDoubleValueFromString(stringValue);
			}
			
			return result;
		}

		

		std::string ExprValue::ToString()
		{
			if (GetExprType() == ExprType::UNSIGNED_INT ||
				GetExprType() == ExprType::INT ||
				GetExprType() == ExprType::UNSIGNED_SHORT ||
				GetExprType() == ExprType::DOUBLE)
			{
				double doubleValue = getDoubleValue();
				if (doubleValue == std::ceil(doubleValue))
				{
					// skip the zeros
					long long unambiguousValue = (long long)doubleValue;
					return std::to_string(unambiguousValue);
				}
				else
				{
					return std::to_string(doubleValue);
				}
			}else
			{
				return stringValue;
			}
			
		}

		

		bool ExprValue::GetBoolValue()
		{
			return boolValue;
		}

		

		std::shared_ptr<ExprValue> ExprValue::ConvertToTargetType(std::shared_ptr <OscExpression::ExprType> type)
		{
			std::shared_ptr<ExprValue> convertedType = nullptr;

			if (type == OscExpression::ExprType::INT) {
				convertedType = ConvertToInt();
			}
			else if (type == OscExpression::ExprType::UNSIGNED_INT) {
				convertedType = ConvertToUnsignedInt();
			}
			else if (type == OscExpression::ExprType::UNSIGNED_SHORT) {
				convertedType = ConvertToUnsignedShort();
			}
			else if (type == OscExpression::ExprType::DOUBLE) {
				convertedType = ConvertToDouble();
			}
			else if (type == OscExpression::ExprType::BOOLEAN) {
				convertedType = ConvertToBoolean();
			}
			else if (type == OscExpression::ExprType::STRING)
			{
				// if string can be unambigously converted into string (integer value or boolean value or Datetime), then convert it.
				if (GetExprType() == OscExpression::ExprType::STRING || GetExprType() == OscExpression::ExprType::BOOLEAN)
				{
					convertedType = ConvertToString();

				}
				else if (IsTypeNumeric())
				{
					double doubleValue = getDoubleValue();
					//if (doubleValue == std::ceil(doubleValue))
					{
						long long unambiguousValue = (long long)doubleValue;
						std::string longStringValue = std::to_string(unambiguousValue);
						convertedType = CreateStringValue(longStringValue);
					}

				}
			}
			else if (type == OscExpression::ExprType::DATE_TIME)
			{
				convertedType = ConvertToDateTime();


			}			

			return convertedType;
		}

};

