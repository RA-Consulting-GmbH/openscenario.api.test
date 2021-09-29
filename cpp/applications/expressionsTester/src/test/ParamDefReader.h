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

#include <string>
#include "ExprValue.h"
#include <map>


using namespace OscExpression;


/*
 * This class encapsulates the parser for parameter definitions
 */
class ParamDefReader {


public:
	/*
	 * parses parameter definitions
	 * @param textToParse the parameter definitions separated by ';'. e.g 'int a =4; double f = 0.0';
	 * @return a shared pointer to the structure that maps a parameter name to its ExprValue.
	 */
	static std::shared_ptr<std::map<std::string, std::shared_ptr<ExprValue>>> readParamDefs( std::string textToParse) ;
  
};
