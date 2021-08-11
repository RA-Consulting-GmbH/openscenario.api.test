parser grammar OscParamDefParser;

options {
	tokenVocab = OscParamDefLexer;
}


/** The start rule; begin parsing here. */
paramDefs:  (defs+=paramDef)+ EOF; 
paramDef: type=TYPECAST  id=ID EQUAL literal=NUMBER_LITERAL SEMICOLON;
