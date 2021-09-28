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

#include "PositionNode.h"
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{

	Position PositionNode::GetStartPosition() const
    {
        return _startPosition;
    }

    Position PositionNode::GetEndPosition() const
    {
        return _endPosition;
    }

    void PositionNode::AddEndPosition(const int line, const int column)
    {
        _endPosition = Position(line, column);
    }

	PositionNode::PositionNode(const int line, const int column):_startPosition(line, column), _endPosition(-1,-1) {}

	PositionNode::PositionNode(const int startLine, const int startColumn, const int endLine, const int endColumn):
    _startPosition(startLine, startColumn), _endPosition(endLine, endColumn) {}

}
