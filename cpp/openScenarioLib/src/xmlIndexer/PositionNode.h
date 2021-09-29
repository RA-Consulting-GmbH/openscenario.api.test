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
#include "Position.h"
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{

    /**
     * A node along with its position.
     */
    class PositionNode 
    {
    private:
        Position _startPosition;
        Position _endPosition;

    public:
        /**
         * The start position
         * @return start position of the node
         */
		Position GetStartPosition() const;

        /**
         * The end position
         * @return end position of the node
         */
		Position GetEndPosition() const;

        /**
         * Adding an end postion to the node
         * @param line of the end position
         * @param column of the end position
         */
		void AddEndPosition(const int line, const int column);

        /**
         * Constructor
         * @param line of the start position
         * @param column of the stat position
         */
		PositionNode(const int line, const int column);
        /**
         * Constructor
         * @param startLine line of the start position
         * @param startColumn column of the stat position
         * @param endLine line of the end position
         * @param endColumn column of the end position
         */
		PositionNode(const int startLine, const int startColumn, const int endLine, const int endColumn);
    };
}
