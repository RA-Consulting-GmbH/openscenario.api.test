parser grammar OscExprParser;

options {
	tokenVocab = OscExprLexer;
}


/** The start rule; begin parsing here. */
prog:   OPEN_PROG expr CLOSE_PROG EOF; 

expr:   func=POW OPEN_BRACKET expr COLON expr CLOSE_BRACKET # FunctionTwoArguments
    | func=SQRT OPEN_BRACKET expr CLOSE_BRACKET # FunctionOneArgument
    | func=CEIL OPEN_BRACKET expr CLOSE_BRACKET # FunctionOneArgument
    | func=FLOOR OPEN_BRACKET expr CLOSE_BRACKET # FunctionOneArgument
    | func=ROUND OPEN_BRACKET expr CLOSE_BRACKET # FunctionOneArgument   
	| MINUS expr	 # UnaryMinus
	| expr op=(MULTIPLY | DIVIDE | MODULO) expr # MultiDivMod
	| expr op=(PLUS|MINUS) expr # PlusMinus
	| num=NUMBER_LITERAL #NumLiteral
	| ID # IdExpr
	| OPEN_BRACKET expr CLOSE_BRACKET  # SquaredExpr
	;