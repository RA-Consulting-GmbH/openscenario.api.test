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

		std::shared_ptr<ExprValue> ExprValue::CreateSimpleParameterValue(std::string parameterName,
			std::string stringValue, std::shared_ptr<ExprType> exprType)
		{
			std::shared_ptr <ExprValue> result = std::shared_ptr <ExprValue>(new ExprValue());
			result->exprType = exprType;
			result->isSimpleParameter = true;
			result->parameterName = parameterName;
			result->stringValue = stringValue;
			return result;
		}

		std::shared_ptr<ExprValue> ExprValue::CreateDateTimeValue(std::string dateTimeStringValue)
		{
			std::shared_ptr <ExprValue> result = std::shared_ptr <ExprValue>(new ExprValue());
			result->exprType = ExprType::DATE_TIME;
			result->stringValue = dateTimeStringValue;
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
				
			} else 
			{
				result->boolValue = false;
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
			return !this->isSimpleParameter && (GetExprType() == ExprType::STRING ||
				GetExprType() == ExprType::DATE_TIME ||
				GetExprType() == ExprType::BOOLEAN);
		}

		bool ExprValue::IsSimpleParameter()
		{
			return this->isSimpleParameter;
		}

		bool ExprValue::IsTypeNumeric()
		{
			return !this->isSimpleParameter && (GetExprType() == ExprType::UNSIGNED_INT ||
				GetExprType() == ExprType::INT ||
				GetExprType() == ExprType::UNSIGNED_SHORT ||
				GetExprType() == ExprType::DOUBLE);

		}

		std::shared_ptr <ExprValue> ExprValue::ConvertToInt()
		{
			std::shared_ptr<ExprValue> result = nullptr;
			
			if (IsTypeNumeric())
			{
				if (doubleValue >= INT_MIN && doubleValue <= INT_MAX && ceil(doubleValue) == doubleValue)
				{
					result = CreateIntValue(doubleValue);
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

			if (IsTypeStringBased())
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
				if (std::regex_match(stringValue, std::regex("(\\d{4}-\\d{2}-\\d{2}T\\d{2}:\\d{2}:\\d{2}\\.?\\d*(\\+|\\-)?\\d{0,2}:?\\d{0,2}Z?)")))
				{
					result = ExprValue::CreateDateTimeValue(stringValue);
				}
			}

			return result;
		}

		std::shared_ptr <ExprValue> ExprValue::ConvertToUnsignedInt()
		{
			std::shared_ptr<ExprValue> result = nullptr;

			if (IsTypeNumeric())
			{
				if (doubleValue >= 0 && doubleValue <= UINT_MAX && ceil(doubleValue) == doubleValue)
				{
					result = ExprValue::CreateUnsignedIntValue(doubleValue);
				}
			}

			return result;
		}

		std::shared_ptr <ExprValue> ExprValue::ConvertToUnsignedShort()
		{
			std::shared_ptr<ExprValue> result = nullptr;
			
			if (IsTypeNumeric())
			{
				if (doubleValue >= 0 && doubleValue <= USHRT_MAX && ceil(doubleValue) == doubleValue)
				{
					result = ExprValue::CreateUnsignedShortValue(doubleValue);
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
			}
			
			return result;
		}

		

		std::string ExprValue::ToString()
		{
			if (this->isSimpleParameter)
			{
				return stringValue;
			}else if (GetExprType() == ExprType::UNSIGNED_INT ||
				GetExprType() == ExprType::INT ||
				GetExprType() == ExprType::UNSIGNED_SHORT ||
				GetExprType() == ExprType::DOUBLE)
			{
				return std::to_string(getDoubleValue());
			}else
			{
				return stringValue;
			}
			
		}

		std::string ExprValue::GetParameterName()
		{
			return parameterName;
		}

		bool ExprValue::GetBoolValue()
		{
			return boolValue;
		}

		std::shared_ptr<OscExpression::ExprValue>  ExprValue::ConvertSimpleParameterToTargetType(std::shared_ptr<OscExpression::ExprType> targetType)
		{
			std::shared_ptr<OscExpression::ExprValue> result = nullptr;
			if (!this->IsSimpleParameter())
			{
				return result;
			}

			std::shared_ptr<OscExpression::ExprType> actualType = GetExprType();
			std::string value = ToString();

			if (targetType == ExprType::STRING)
			{
				// Everything can be converted into String
				result = CreateStringValue(value);
			}
			else if (targetType == ExprType::DOUBLE)
			{
				result = CreateDoubleValueFromString(value);

			}
			else if (targetType == ExprType::INT)
			{
				std::shared_ptr<OscExpression::ExprValue> exprValue = CreateDoubleValueFromString(value);
				result = exprValue == nullptr? nullptr: exprValue->ConvertToInt();

			}
			else if (targetType == ExprType::UNSIGNED_INT)
			{
				std::shared_ptr<OscExpression::ExprValue> exprValue = CreateDoubleValueFromString(value);
				result = exprValue == nullptr ? nullptr : exprValue->ConvertToUnsignedInt();
			}

			else if (targetType == ExprType::UNSIGNED_SHORT)
			{
				std::shared_ptr<OscExpression::ExprValue> exprValue = CreateDoubleValueFromString(value);
				result = exprValue == nullptr ? nullptr : exprValue->ConvertToUnsignedShort();

			}

			else if (targetType == ExprType::BOOLEAN)
			{
				std::shared_ptr<OscExpression::ExprValue> exprValue = CreateStringValue(value);
				result = exprValue == nullptr ? nullptr :  exprValue->ConvertToBoolean();

			}
			else if (targetType == ExprType::DATE_TIME)
			{
				std::shared_ptr<OscExpression::ExprValue> exprValue = CreateStringValue(value);
				result = exprValue == nullptr ? nullptr : exprValue->ConvertToDateTime();
			}
			return result;
		}
};

