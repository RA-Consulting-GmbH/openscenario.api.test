#include "OscExprEvaluator.h"
#include "SemanticException.h"

#include "OscExprLexer.h"
#include "OscExprParser.h"


namespace OscExpression
{	
	

	OscExprEvaluator::OscExprEvaluator(
		std::shared_ptr<std::map<std::string, std::shared_ptr<OscExpression::ExprValue>>> definedParameters,
		std::shared_ptr<OscExpression::ExprType> expectedDatatype)
	{
		this->evaluatorListener = std::make_unique<EvaluatorListener>(definedParameters, expectedDatatype);
		
	}

	void OscExprEvaluator::Parse(std::string textToParse)
	{
		antlr4::ANTLRInputStream input("${5+4}");
		OscExprLexer lexer(&input);
		antlr4::CommonTokenStream tokens(&lexer);

		OscExprParser parser(&tokens);
		
		this->tree = std::unique_ptr< antlr4::tree::ParseTree>(parser.prog());
	}
	std::shared_ptr<ExprValue> OscExprEvaluator::Evaluate()
	{
		if (this->tree != nullptr)
		{
			antlr4::tree::ParseTreeWalker::DEFAULT.walk(&*this->evaluatorListener, &*this->tree);
			return this->evaluatorListener->GetResult();
		}

		return nullptr;
	}


}
