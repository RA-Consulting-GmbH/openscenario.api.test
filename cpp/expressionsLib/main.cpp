/* Copyright (c) 2012-2017 The ANTLR Project. All rights reserved.
 * Use of this file is governed by the BSD 3-clause license that
 * can be found in the LICENSE.txt file in the project root.
 */

//
//  main.cpp
//  antlr4-cpp-demo
//
//  Created by Mike Lischke on 13.03.16.
//

#include <iostream>

#include "antlr4-runtime.h"
#include "TLexer.h"
#include "TParser.h"

#include <Windows.h>

#include "EvaluatorListener.h"

#pragma execution_character_set("utf-8")

using namespace OscExpression;
using namespace antlr4;

int main(int argc, const char * argv[]) {

  ANTLRInputStream input("${5+4}");
  TLexer lexer(&input);
  CommonTokenStream tokens(&lexer);

  TParser parser(&tokens);
  Token* token = tokens.LT(2);
  std::cout << token->getText();
	
  tree::ParseTree *tree = parser.prog();

  std::wstring s = antlrcpp::s2ws(tree->toStringTree(&parser)) + L"\n";

  OutputDebugStringW(s.c_str()); // Only works properly since VS 2015.

  EvaluatorListener listener = EvaluatorListener(nullptr, nullptr);
 

  try
  {
	  antlr4::tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);
  }
  catch (OscExpression::SemanticException e)
  {

	  std::cout << e.GetMessageMy() << " in (" << e.GetColumn() << ")";
  }
  return 0;
}
