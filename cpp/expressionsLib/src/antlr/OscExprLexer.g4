lexer grammar OscExprLexer;

OPEN_BRACKET: '(';
CLOSE_BRACKET: ')';

OPEN_PROG: '${';
CLOSE_PROG: '}';
 
COLON: ',';

SQRT: 'sqrt';
POW: 'pow';
CEIL: 'ceil';
FLOOR: 'floor';
ROUND: 'round';

ID  :   '$'[a-zA-Z_][a-zA-Z0-9_]* ;
NUMBER_LITERAL
    :   INT '.' [0-9]+ EXP? // 1.35, 1.35E-9, 0.3, -4.5
    |   INT EXP             // 1e10 -3e4
    |   INT                 // -3, 45
    ;
NEWLINE:'\r'? '\n' -> skip ;   // toss out newline
WS  :   [ \t]+ -> skip ; // toss out whitespace


MULTIPLY : '*';
DIVIDE : '/';
MODULO : '%';
PLUS : '+';
MINUS : '-';
NOT : 'not';
AND : 'and';
OR : 'or';
FALSE_LITERAL : 'false';
TRUE_LITERAL : 'true';

SIN: 'sin';
COS: 'cos';
TAN: 'tan';
ASIN: 'asin';
ACOS: 'acos';
ATAN: 'atan';
SIGN: 'sign';
ABS: 'abs';
MAX: 'max';
MIN: 'min';
	
fragment INT :   '0' | [1-9] [0-9]* ; // no leading zeros
fragment EXP :   [Ee] [+\-]? INT ; // \- since - means "range" inside [...]
