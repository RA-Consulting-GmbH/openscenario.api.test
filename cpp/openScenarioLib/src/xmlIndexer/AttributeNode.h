/*
 * Copyright 2020 RA Consulting
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

#pragma once
#include "PositionNode.h"
#include <string>
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{
    /**
    * Every osc model element does implement this interface
    */
    class AttributeNode: public PositionNode 
    {
    private:
        std::string  _name;
		Position _startValuePosition;;

    public:
        /**
         * Constructor
         * @param name name of the attribute
         * @param startLine line of the start position
         * @param startColumn column of the stat position
         * @param endLine line of the end position
         * @param endColumn column of the end position
         * @param startValueLine start line of the value
         * @param startValueColumn start column of the value
         */
		AttributeNode(std::string& name, const size_t startLine, const size_t startColumn, const size_t endLine, const size_t endColumn, const size_t startValueLine, const size_t startValueColumn);

		/**
		 * The name of the attribute
		 * @return the name
		 */
		std::string GetName() const;

		/**
		 * The start Position of the value
		 * @return the start position of the value
		 */
		Position GetValueStartPosition() const;
    };
}
