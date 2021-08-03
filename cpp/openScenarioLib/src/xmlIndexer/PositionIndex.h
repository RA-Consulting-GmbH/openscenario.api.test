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
#include "ElementNode.h"
#include <map>
#include <stack>
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{
    /**
     * Index of element nodes that is filled during reading
     */
    class PositionIndex 
    {
    private:
        int _counter = 0;
        std::map<int, std::shared_ptr<ElementNode>> _dictionary;
        std::stack<std::shared_ptr<ElementNode>> _stack;

    public:
        /**
         * Pushing a element node
         * @param line start line of the element node
         * @param column start column of the element node
         * @param attributeNodes the attribute nodes of the element node.
         */
        void PushElementNode(const size_t line, const size_t column, std::vector<AttributeNode> attributeNodes)
        {
            auto node = std::make_shared<ElementNode>(static_cast<int>(line), static_cast<int>(column));
            node->AddAttributes(attributeNodes);
            _dictionary.emplace(std::make_pair(_counter++, node));
            _stack.push(node);
        }
        /**
         * Sets the end position
         * @param line end line of the element node
         * @param column end column of the element node
         */
        void SetEndPosition(const size_t line, const size_t column)
        {
            auto node = _stack.top();
            node->AddEndPosition(static_cast<int>(line), static_cast<int>(column));
            _stack.pop();
        }

        /**
         * Getter facadse for the index
         * @param index the requested index
         * @return the found element node or null if not not found
         */
        std::shared_ptr<ElementNode> GetElementNode(const unsigned int index)
        {
            if (index > _dictionary.size())
                return nullptr;
            return _dictionary[index];
        }

        /**
         * Size of the index
         * @return the size
         */
        int GetSize() const
        {
            return _counter;
        }
    };
}
