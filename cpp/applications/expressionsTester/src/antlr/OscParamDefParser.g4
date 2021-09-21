parser grammar OscParamDefParser;

options {
	tokenVocab = OscParamDefLexer;
}


/** The start rule; begin parsing here. */
paramDefs:  (defs+=paramDef)+ EOF; 
paramDef: stringParamDef | numericParamDef;
numericParamDef: type=NUMERIC_TYPECAST  id=ID EQUAL literal=NUMBER_LITERAL  SEMICOLON;
stringParamDef: type=STRING_TYPECAST  id=ID EQUAL literal= STRING SEMICOLON;

