parser grammar OscExprParser;

options {
	tokenVocab = OscExprLexer;
}


/** The start rule; begin parsing here. */
prog:   (OPEN_PROG expr CLOSE_PROG) EOF
	|   (parameterExpr) EOF; 
	
parameterExpr: ID # ParamExpr;

expr: func=POW OPEN_BRACKET expr COLON expr CLOSE_BRACKET # FunctionTwoArguments
    | func=SQRT OPEN_BRACKET expr CLOSE_BRACKET # FunctionOneArgument
    | func=CEIL OPEN_BRACKET expr CLOSE_BRACKET # FunctionOneArgument
    | func=FLOOR OPEN_BRACKET expr CLOSE_BRACKET # FunctionOneArgument
    | func=ROUND OPEN_BRACKET expr CLOSE_BRACKET # FunctionOneArgument  
	| NOT expr # Not	
	| MINUS expr	 # UnaryMinus
	| expr op=(MULTIPLY | DIVIDE | MODULO) expr # MultiDivMod
	| expr op=(PLUS|MINUS) expr # PlusMinus
	| expr op=AND expr # And
	| expr op=OR expr # Or
	| num=NUMBER_LITERAL #NumLiteral
	| FALSE_LITERAL #FalseLiteral
	| TRUE_LITERAL #TrueLiteral
	| ID # IdExpr
	| OPEN_BRACKET expr CLOSE_BRACKET  # SquaredExpr
	;