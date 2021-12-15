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


#include "ExprValue.h"
#include "EvaluatorListener.h"
#include "OscExprEvaluator.h"

namespace OscExpression {

	/**
	 * This class implements the Evaluator interface.
	 */
	class  OscExprEvaluatorImpl : public OscExpression::OscExprEvaluator {
	private:
		
		std::shared_ptr<EvaluatorListener> evaluatorListener;

		std::shared_ptr <antlr4::tree::ParseTree> tree = nullptr;

		std::shared_ptr<OscExpression::ExprType> expectedDatatype;
		
	public:
		OscExprEvaluatorImpl(std::shared_ptr<std::map<std::string,  std::shared_ptr<OscExpression::ExprValue>>> definedParameters, std::shared_ptr<OscExpression::ExprType> expectedDatatype);
		virtual std::shared_ptr<ExprValue> Evaluate(std::string textToParse) override;
		

	};

}  // namespace OscExpression
