lexer grammar OscParamDefLexer;

EQUAL: '=';
SEMICOLON: ';';
NUMERIC_TYPECAST :  ('int'|'double'| 'unsignedInt' | 'unsignedShort');
STRING_TYPECAST :  ( 'string' | 'dateTime' );
BOOLEAN_TYPECAST :  'boolean';
TRUE_LITERAL :  'true';
FALSE_LITERAL :  'false';
ID  :   [a-zA-Z_][a-zA-Z0-9_]* ;

STRING:  '\'' ( ~('\\'|'\'') )* '\'';

NUMBER_LITERAL
    :   '-'? INT '.' [0-9]+ EXP? // 1.35, 1.35E-9, 0.3, -4.5
    |   '-'? INT EXP             // 1e10 -3e4
    |   '-'? INT                 // -3, 45
    ;
NEWLINE:'\r'? '\n' -> skip ;   // toss out newline
WS  :   [ \t]+ -> skip ; // toss out whitespace

	
fragment INT :   '0' | [1-9] [0-9]* ; // no leading zeros
fragment EXP :   [Ee] [+\-]? INT ; // \- since - means "range" inside [...]
