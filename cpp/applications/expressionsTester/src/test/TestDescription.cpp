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
		"message": "Divison by zero",
		"column": 5
	}
},{
	"id" : 10,
	"comment" : "Division by zero, int type",
	"parameterDefinitions": ["int value= 0;"],
	"expr": "${25/$value}",
	"expectedError": {
		"message": "Divison by zero",
		"column": 5
	}
},{
	"id" : 10,
	"comment" : "Division by zero, unsignedShort type",
	"parameterDefinitions": ["unsignedShort value= 0;"],
	"expr": "${25/$value}",
	"expectedError": {
		"message": "Divison by zero",
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
	"expectedValue": 4.333
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
	"boolean isSpeed= 'false';"],
	"expr": "$isSpeed",
	"expectedValue": "false"
},
{
	"id" : 43,
	"comment" : "Simple dateTime parameter",
	"parameterDefinitions": [
	"dateTime testDateTime= 'TestDateTime';"],
	"expr": "$testDateTime",
	"expectedValue": "TestDateTime"
},
{
	"id" : 44,
	"comment": "dateTime is not allowed in expression calculation",
	"parameterDefinitions": [
	"dateTime testDateTime= 'TestDateTime';"],
	"expr": "${$testDateTime + 1}",
	"expectedError": {
		"message": "Expressions are exclusively supported for numeric types. Parameter '$testDateTime' is of not supported type 'dateTime'",
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
		"message": "Expressions are exclusively supported for numeric types. Parameter '$testString' is of not supported type 'string'",
		"column": 2
	}
},
{
	"id" : 46,
	"comment": "boolean is not allowed in expression calculation",
	"parameterDefinitions": [
	"boolean testBoolean= 'TestBoolean';"],
	"expr": "${$testBoolean + 1}",
	"expectedError": {
		"message": "Expressions are exclusively supported for numeric types. Parameter '$testBoolean' is of not supported type 'boolean'",
		"column": 2
	}
},
{
	"id" : 47,
	"comment": "Not a Boolean String",
	"parameterDefinitions": [
	"boolean testBoolean= 'TestBoolean';"],
	"expr": "$testBoolean",
	"expectedDatatype": "boolean",	
	"expectedError": {
		"message": "Value 'TestBoolean' cannot be converted to type 'boolean'",
		"column": 0
	}
},
{
	"id" : 48,
	"comment": "A boolean String",
	"parameterDefinitions": [
	"boolean testBoolean= 'false';"],
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
}


]
)json";

