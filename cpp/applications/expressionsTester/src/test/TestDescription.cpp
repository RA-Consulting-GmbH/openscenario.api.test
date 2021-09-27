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

#include "TestDescription.h"

const std::string TestDescription::json = R"json(
[{
	"id" : 41,
	"comment" : "Simple string parameter",
	"parameterDefinitions": [
	"string speed= 'test';"],
	"expr": "$speed",
	"expectedValue": "test"
},
{
	"id" : 0,
	"comment" : "test internal calculation maximal value for unsignedShort +1 (65535+1)",
	"parameterDefinitions": ["unsignedShort testShort = 65535;"],
	"expr": "${$testShort +1}",
	"expectedValue": 65536
},{

	"id" : 1,
	"comment" : "Expect error when explicitly casting 65535+1 to unsignedShort",
	"parameterDefinitions": ["unsignedShort testShort = 65535;"],
	"expr": "${$testShort +1}",
	"expectedDatatype": "unsignedShort",
	"expectedError": {
		"message": "Value '65536.000000' cannot be converted to type 'unsignedShort'",
		"column": 0
	}
},{
	"id" : 2,
	"comment" : "Calculate a complex formula (Tested in Excel to verify)",
	"parameterDefinitions": ["double delay=23.1;",
	"double speed= 4.333;",
	"int x0= 1;",
	"int x1=2;",
	"int y0=3;",
	"int y1=4;"],
	"expr": "${$delay + ((($x1 - $x0)* 2 + ($y1 - $y0)*2 )*0.5 / $speed) + sqrt(9)}",
	"expectedValue": 26.56157396722825
},{
	"id" : 3,
	"comment" : "Test oeprator precedence for +/*",
	"expr": "${4+6*5}",
	"expectedValue": 34
},{
	"id" : 4,
	"comment" : "Expect error when explicitly casting 66000 to unsignedShort",
	"expr": "${66000}",
	"expectedDatatype": "unsignedShort",
	"expectedError": {
		"message": "Value '66000.000000' cannot be converted to type 'unsignedShort'",
		"column": 0
	}
},{
	"id" : 5,
	"comment" : "Test cutting off digits for positive double when converting to an integer",
	"parameterDefinitions": ["double value= 65.5;"],
	"expr": "${floor($value +1)}",
	"expectedValue": 66
},{
	"id" : 6,
	"comment" : "Test cutting off digits for negative double when converting to an integer",
	"parameterDefinitions": ["double value= -65.5;"],
	"expr": "${floor($value -1 )}",
	"expectedDatatype" : "int",
	"expectedValue": -67
},{
	"id" : 7,
	"comment" : "Test cutting off digits for negative double when converting to an integer",
	"parameterDefinitions": ["double value= -65.5;"],
	"expr": "${ceil($value -1 )}",
	"expectedDatatype" : "int",
	"expectedValue": -66
},{
	"id" : 8,
	"comment" : "Division by zero, floating point type",
	"parameterDefinitions": ["double value= 0.0;"],
	"expr": "${25/$value}",
	"expectedError": {
		"message": "Division by zero",
		"column": 5
	}
},{
	"id" : 9,
	"comment" : "Division by zero, unsignedInt type",
	"parameterDefinitions": ["unsignedInt value= 0;"],
	"expr": "${25/$value}",
	"expectedError": {
		"message": "Division by zero",
		"column": 5
	}
},{
	"id" : 10,
	"comment" : "Division by zero, int type",
	"parameterDefinitions": ["int value= 0;"],
	"expr": "${25/$value}",
	"expectedError": {
		"message": "Division by zero",
		"column": 5
	}
},{
	"id" : 10,
	"comment" : "Division by zero, unsignedShort type",
	"parameterDefinitions": ["unsignedShort value= 0;"],
	"expr": "${25/$value}",
	"expectedError": {
		"message": "Division by zero",
		"column": 5
	}
},{
	"id" : 12,
	"comment": "Sqrt of a positive floating point value ",
	"expr": "${sqrt(6.25)}",
	"expectedValue": 2.5
},{
	"id" : 13,
	"comment": "Sqrt of a positive integer  value ",
	"expr": "${sqrt(9)}",
	"expectedValue": 3
},{
	"id" : 14,
	"comment": "Sqrt of a negative integer value",
	"expr": "${sqrt(-9)}",
	"expectedError": {
		"message": "Cannot calculate square root from a negative value.",
		"column": 7
	}
},{
	"id" : 15,
	"comment": "Sqrt of a negative floating point value",
	"expr": "${sqrt(-9.0)}",
	"expectedError": {
		"message": "Cannot calculate square root from a negative value.",
		"column": 7
	}
},{
	"id" : 16,
	"comment": "Complex formular with sqrt Sqrt of a positive integer value ",
	"parameterDefinitions": [
		"double acceleration=2.0;",
		"double distance=4.0;"
	],
	"expr": "${sqrt(2 * $acceleration * $distance)}",
	"expectedValue": 4.0
},{
	"id" : 17,
	"comment": "Power floating point value by an integer value",
	"expr": "${pow(2.5, 2)}",
	"expectedValue": 6.25
},{
	"id" : 18,
	"comment": "Power floating point value by a floating point value",
	"expr": "${pow(6.25, 0.5)}",
	"expectedValue": 2.5
},{
	"id" : 19,
	"comment": "Power integer value by a floating point value",
	"expr": "${pow(4, 0.5)}",
	"expectedValue": 2
},{
	"id" : 20,
	"comment": "Power integer value by an integer value",
	"expr": "${pow(4, 2)}",
	"expectedValue": 16
},{
	"id" : 21,
	"comment": "Raising the value 0 to an exponent < 0",
	"expr": "${pow(0,-0.5)}",
	"expectedError": {
		"message": "Raising the value 0 to an exponent < 0 is not allowed",
		"column": 6
	}
},{
	"id" : 22,
	"comment": "Raising a negative basis to an exponent that is not 0 or 1 or -1",
	"expr": "${pow(-3,-0.5)}",
	"expectedError": {
		"message": "Raising a negative basis to an exponent that is not 0 or 1 or -1 is not allowed",
		"column": 6
	}
},{
	"id" : 23,
	"comment": "Raising a negative basis to an exponent that is not 0 or 1 or -1)",
	"expr": "${pow(-3,0.5)}",
	"expectedError": {
		"message": "Raising a negative basis to an exponent that is not 0 or 1 or -1 is not allowed",
		"column": 6
	}
},{
	"id" : 24,
	"comment": "Raising a negative basis to an exponent that is 0 or 1 or -1",
	"expr": "${pow(-4, 1) + pow(-4, -1) * pow(-4, 0)}",
	"expectedValue": -4.25
},{
	"id" : 25,
	"comment": "Raising the value 0 to an exponent >= 0",
	"expr": "${pow(0, 0) + pow(0, 20) }",
	"expectedValue": 1
},{
	"id" : 26,
	"comment": "Raising the value 0 to an exponent 0",
	"expr": "${pow(0, 0)}",
	"expectedValue": 1
},{
	"id" : 27,
	"comment": "Raising the value 0 to an exponent > 0",
	"expr": "${pow(0, 20)}",
	"expectedValue": 0
},{
	"id" : 29,
	"comment": "Parsing a floating point value that exceeds internal limits ",
	"expr": "${1.80E308}",
	"expectedError": {
		"message": "Internal Overflow (limits of internal 64 byte double value exceeded)",
		"column": 2
	}
},{
	"id" : 30,
	"comment": "Parsing a floating point value that exceeds internal limits ",
	"expr": "${1.7976931348623157E308 + 1E308}",
	"expectedError": {
		"message": "Internal Overflow (limits of internal 64 byte double value exceeded)",
		"column": 25
	}
},{
	"id" : 33,
	"comment": "Parsing a floating point value that exceeds internal limits ",
	"expr": "${4.9E-324 -1E-324 }",
	"expectedError": {
		"message": "Internal Overflow (limits of internal 64 byte double value exceeded)",
		"column": 12
	}
},{
	"id" : 34,
	"comment": "Parsing a floating point value that exceeds internal limits ",
	"expr": "${-4.9E-324 +1E-324 }",
	"expectedError": {
		"message": "Internal Overflow (limits of internal 64 byte double value exceeded)",
		"column": 13
	}
},{
	"id" : 35,
	"comment": "Minmal double value",
	"expr": "${4.9E-324}",
	"expectedValue": 4.9E-324
},
{
	"id" : 36,
	"comment": "Minmal double value",
	"expr": "${-4.9E-324}",
	"expectedValue": -4.9E-324
},
{
	"id" : 37,
	"comment": "Pow over Double limits",
	"expr": "${pow(1.7976931348623157E308 , 1.7976931348623157E308)}",
	"expectedError": {
		"message": "Internal Overflow (limits of internal 64 byte double value exceeded)",
		"column": 6
	}
},
{
	"id" : 38,
	"comment": "Syntax error",
	"expr": "${5f}",
	"expectedError": {
		"message": "Syntax error in expression",
		"column": 3
	}
},
{
	"id" : 39,
	"comment": "Syntax error in Parser",
	"expr": "${5}}",
	"expectedError": {
		"message": "Syntax error in expression near '}'",
		"column": 4
	}
},
{
	"id" : 40,
	"comment" : "Simple parameter",
	"parameterDefinitions": [
	"double speed= 4.333;"],
	"expr": "$speed",
	"expectedValue": 4.333,
	"expectedDatatype": "double"	
},
{
	"id" : 41,
	"comment" : "Simple string parameter",
	"parameterDefinitions": [
	"string speed= 'test';"],
	"expr": "$speed",
	"expectedValue": "test"
},
{
	"id" : 42,
	"comment" : "Simple boolean parameter",
	"parameterDefinitions": [
	"boolean isSpeed= false;"],
	"expr": "$isSpeed",
	"expectedValue": "false"
},
{
	"id" : 44,
	"comment": "dateTime is not allowed in expression calculation",
	"parameterDefinitions": [
	"dateTime testDateTime= 'TestDateTime';"],
	"expr": "${$testDateTime + 1}",
	"expectedError": {
		"message": "Expressions are exclusively supported for numeric types or boolean type. Parameter '$testDateTime' is of not supported type 'dateTime'",
		"column": 2
	}
},
{
	"id" : 45,
	"comment": "string is not allowed in expression calculation",
	"parameterDefinitions": [
	"string testString= 'TestString';"],
	"expr": "${$testString + 1}",
	"expectedError": {
		"message": "Expressions are exclusively supported for numeric types or boolean type. Parameter '$testString' is of not supported type 'string'",
		"column": 2
	}
},
{
	"id" : 48,
	"comment": "A boolean String",
	"parameterDefinitions": [
	"boolean testBoolean= false;"],
	"expr": "$testBoolean",
	"expectedDatatype": "boolean",	
	"expectedValue": "false"
},
{
	"id" : 49,
	"comment": "Not a dateTime String",
	"parameterDefinitions": [
	"dateTime testDateTime= 'testDateTime';"],
	"expr": "$testDateTime",
	"expectedDatatype": "dateTime",	
	"expectedError": {
		"message": "Value 'testDateTime' cannot be converted to type 'dateTime'",
		"column": 0
	}
},
{
	"id" : 50,
	"comment": "Not a dateTime String",
	"parameterDefinitions": [
	"dateTime testDateTime= '2001-10-26T21:32:52';"],
	"expr": "$testDateTime",
	"expectedDatatype": "dateTime",	
	"expectedValue": "2001-10-26T21:32:52"
},
{
	"id" : 51,
	"comment": "Simple Boolean (false)",
	"expr": "${false}",
	"expectedDatatype": "boolean",	
	"expectedValue": "false"
},
{
	"id" : 52,
	"comment": "Simple Boolean (true)",
	"expr": "${true}",
	"expectedDatatype": "boolean",	
	"expectedValue": "true"
},
{
	"id" : 53,
	"comment": "Simple not",
	"expr": "${not true}",
	"expectedDatatype": "boolean",	
	"expectedValue": "false"
},
{
	"id" : 54,
	"comment": "Simple true and true",
	"expr": "${true and true}",
	"expectedDatatype": "boolean",	
	"expectedValue": "true"
},
{
	"id" : 55,
	"comment": "Simple true and false",
	"expr": "${true and false}",
	"expectedDatatype": "boolean",	
	"expectedValue": "false"
},
{
	"id" : 56,
	"comment": "Simple false and false",
	"expr": "${false and false}",
	"expectedDatatype": "boolean",	
	"expectedValue": "false"
},
{
	"id" : 57,
	"comment": "Simple false and true",
	"expr": "${false and true}",
	"expectedDatatype": "boolean",	
	"expectedValue": "false"
},
{
	"id" : 58,
	"comment": "Simple true or true",
	"expr": "${true or true}",
	"expectedDatatype": "boolean",	
	"expectedValue": "true"
},
{
	"id" : 59,
	"comment":  "Simple true or false",
	"expr": "${true or false}",
	"expectedDatatype": "boolean",	
	"expectedValue": "true"
},
{
	"id" : 60,
	"comment":  "Simple false or false",
	"expr": "${false or false}",
	"expectedDatatype": "boolean",	
	"expectedValue": "false"
},
{
	"id" : 61,
	"comment":  "Simple false or true",
	"expr": "${false or true}",
	"expectedDatatype": "boolean",	
	"expectedValue": "true"
},
{
	"id" : 62,
	"comment": "Simple not brackets",
	"expr": "${not(false)}",
	"expectedDatatype": "boolean",	
	"expectedValue": "true"
},
{
	"id" : 63,
	"comment": "Precedence and, or",
	"expr": "${false or true and false}",
	"expectedDatatype": "boolean",	
	"expectedValue": "false"
},
{
	"id" : 64,
	"comment": "No Precedence with brackets",
	"expr": "${(false or true) and true}",
	"expectedDatatype": "boolean",	
	"expectedValue": "true"
},
{
	"id" : 65,
	"comment": "consecutive not: not not true",
	"expr": "${not not true}",
	"expectedDatatype": "boolean",	
	"expectedValue": "true"
},
{
	"id" : 66,
	"comment": "Parameter and (first)",
	"parameterDefinitions": [
	"boolean testBoolean= true;"],
	"expr": "${$testBoolean and false}",
	"expectedDatatype": "boolean",	
	"expectedValue": "false"
},
{
	"id" : 67,
	"comment": "Parameter and (second)",
	"parameterDefinitions": [
	"boolean testBoolean= true;"],
	"expr": "${false and $testBoolean}",
	"expectedDatatype": "boolean",	
	"expectedValue": "false"
},
{
	"id" : 68,
	"comment": "Parameter or (first)",
	"parameterDefinitions": [
	"boolean testBoolean= true;"],
	"expr": "${$testBoolean or false}",
	"expectedDatatype": "boolean",	
	"expectedValue": "true"
},
{
	"id" : 69,
	"comment": "Parameter or (second)",
	"parameterDefinitions": [
	"boolean testBoolean= true;"],
	"expr": "${false or $testBoolean}",
	"expectedDatatype": "boolean",	
	"expectedValue": "true"
},
{
	"id" : 70,
	"comment": "Parameter not",
	"parameterDefinitions": [
	"boolean testBoolean= true;"],
	"expr": "${not($testBoolean)}",
	"expectedDatatype": "boolean",	
	"expectedValue": "false"
},
{
	"id" : 71,
	"comment": "Pow first operand is not numeric",
	"expr": "${pow(false, 20)}",
	"expectedError": {
		"message": "Value must be numeric",
		"column": 6
	}
},
{
	"id" : 72,
	"comment": "Pow second operand is not numeric",
	"expr": "${pow(20, false)}",
	"expectedError": {
		"message": "Value must be numeric",
		"column": 10
	}
},
{
	"id" : 73,
	"comment": "Sqrt operand is not numeric",
	"expr": "${sqrt(false)}",
	"expectedError": {
		"message": "Value must be numeric",
		"column": 7
	}
},
{
	"id" : 74,
	"comment": "Unary minus operand is not numeric",
	"expr": "${-false}",
	"expectedError": {
		"message": "Value must be numeric",
		"column": 3
	}
},
{
	"id" : 75,
	"comment": "Ceil operand is not numeric",
	"expr": "${ceil(false)}",
	"expectedError": {
		"message": "Value must be numeric",
		"column": 7
	}
},
{
	"id" : 76,
	"comment": "Round operand is not numeric",
	"expr": "${round(false)}",
	"expectedError": {
		"message": "Value must be numeric",
		"column": 8
	}
},
{
	"id" : 77,
	"comment": "Floor operand is not numeric",
	"expr": "${floor(false)}",
	"expectedError": {
		"message": "Value must be numeric",
		"column": 8
	}
},
{
	"id" : 78,
	"comment": "Plus first operand is not numeric",
	"expr": "${false + 20}",
	"expectedError": {
		"message": "Value must be numeric",
		"column": 2
	}
},
{
	"id" : 79,
	"comment": "Minus second operand is not numeric",
	"expr": "${20 - false}",
	"expectedError": {
		"message": "Value must be numeric",
		"column": 7
	}
},
{
	"id" : 79,
	"comment": "Multiplication first operand is not numeric",
	"expr": "${false * 20}",
	"expectedError": {
		"message": "Value must be numeric",
		"column": 2
	}
},
{
	"id" : 80,
	"comment": "Division second operand is not numeric",
	"expr": "${20 / false}",
	"expectedError": {
		"message": "Value must be numeric",
		"column": 7
	}
},
{
	"id" : 81,
	"comment": "Not operand is not boolean",
	"expr": "${not 20}",
	"expectedError": {
		"message": "Value must be of type 'boolean'",
		"column": 6
	}
},
{
	"id" : 82,
	"comment": "And first operand is not boolean",
	"expr": "${20 and 20}",
	"expectedError": {
		"message": "Value must be of type 'boolean'",
		"column": 2
	}
},
{
	"id" : 83,
	"comment": "And second operand is not boolean",
	"expr": "${false and 20}",
	"expectedError": {
		"message": "Value must be of type 'boolean'",
		"column": 12
	}
},
{
	"id" : 84,
	"comment": "Or first operand is not boolean",
	"expr": "${20 or 20}",
	"expectedError": {
		"message": "Value must be of type 'boolean'",
		"column": 2
	}
},
{
	"id" : 85,
	"comment": "Or second operand is not boolean",
	"expr": "${false or 20}",
	"expectedError": {
		"message": "Value must be of type 'boolean'",
		"column": 11
	}
}


]
)json";

