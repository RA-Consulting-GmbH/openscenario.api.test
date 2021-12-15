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
#include "ExprType.h"

#include <algorithm>

namespace OscExpression
{

	std::shared_ptr<ExprType> ExprType::UNSIGNED_INT = std::shared_ptr<ExprType>(new ExprType("unsignedInt"));

	std::shared_ptr<ExprType> ExprType::INT = std::shared_ptr<ExprType>(new ExprType("int"));

	std::shared_ptr<ExprType> ExprType::UNSIGNED_SHORT = std::shared_ptr<ExprType>(new ExprType("unsignedShort"));

	std::shared_ptr<ExprType> ExprType::DOUBLE = std::shared_ptr<ExprType>(new ExprType("double"));

	std::shared_ptr<ExprType> ExprType::STRING = std::shared_ptr<ExprType>(new ExprType("string"));

	std::shared_ptr<ExprType> ExprType::BOOLEAN = std::shared_ptr<ExprType>(new ExprType("boolean"));

	std::shared_ptr<ExprType> ExprType::DATE_TIME = std::shared_ptr<ExprType>(new ExprType("dateTime"));

	std::map<std::string, std::shared_ptr<ExprType>> ExprType::_literalToInstance =
	{

		{ "unsignedInt", UNSIGNED_INT },
		{ "int", INT },
		{ "unsignedShort", UNSIGNED_SHORT },
		{ "double", DOUBLE },
		{ "string", STRING },
		{ "boolean", BOOLEAN },
		{ "dateTime", DATE_TIME },

	};

	
	ExprType::ExprType(const std::string literal)
		: _literal(literal)
	{}

	std::shared_ptr<ExprType> ExprType::GetUnsignedIntType()
	{
		return  ExprType::UNSIGNED_INT;
	}

	std::shared_ptr<ExprType> ExprType::GetIntType()
	{
		return  ExprType::INT;
	}

	std::shared_ptr<ExprType> ExprType::GetUnsignedShortType()
	{
		return  ExprType::UNSIGNED_SHORT;
	}
	std::shared_ptr<ExprType> ExprType::GetDoubleType()
	{
		return  ExprType::DOUBLE;
	}
	std::shared_ptr<ExprType> ExprType::GetStringType()
	{
		return  ExprType::STRING;
	}
	std::shared_ptr<ExprType> ExprType::GetBooleanType()
	{
		return  ExprType::BOOLEAN;
	}
	std::shared_ptr<ExprType> ExprType::GetDateTimeType()
	{
		return  ExprType::DATE_TIME;
	}
	

	std::shared_ptr<ExprType> ExprType::GetFromLiteral(const std::string& literal)
	{
		const auto kIt = _literalToInstance.find(literal);
		if (kIt != _literalToInstance.end())
		{
			return kIt->second;
		}
		// Fix inconsistency between int/integer
		if (literal == "integer")
		{
			return  ExprType::INT;
		}
		return nullptr;
	}


	std::string ExprType::GetLiteral() const
	{
		return _literal;
	}

	

	bool ExprType::IsIntegerNumeric()
	{
		return (this == INT.get() || this == UNSIGNED_INT.get() || this == UNSIGNED_SHORT.get());
	}
	

	
}
