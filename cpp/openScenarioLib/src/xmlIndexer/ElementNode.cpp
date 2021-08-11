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
#include <vector>
#include "AttributeNode.h"
#include "MemLeakDetection.h"
#include <memory>

namespace NET_ASAM_OPENSCENARIO
{
    /**
     * Element node that hold attributes and positions (start, end)
     */
    class ElementNode : public PositionNode
    {
    private:
        std::vector<std::shared_ptr<AttributeNode>> _attributes;

    public:
        /**
         * Constructor
         * @param line of the start position
         * @param column of the stat position
         */
        ElementNode(const int line, const int column) : PositionNode(line, column) {}

        /**
         * Constructor
         * @param startLine line of the start position
         * @param startColumn column of the stat position
         * @param endLine line of the end position
         * @param endColumn column of the end position
         */
        ElementNode(const int startLine, const int startColumn, const int endLine, const int endColumn) :
            PositionNode(startLine, startColumn, endLine, endColumn) {}

        /**
         * Adds an attribute node
         * @param attributeNodes attribte node to add
         */
        void AddAttributes(std::vector<AttributeNode>& attributeNodes)
        {
            for (auto&& node : attributeNodes)
                _attributes.push_back(std::make_shared<AttributeNode>(node));
        }

        /**
         * Get the attribute node by its index.
         * @param index the requested index
         * @return the attribute node
         */
        std::shared_ptr<AttributeNode> GetAttributeNode(const unsigned int index)
        {
            if (index > _attributes.size())
                return nullptr;
            return _attributes[index];
        }

        /**
         * Get the attribute node by its name
         * @param attributeName the name of the attribute node
         * @return the attribute node with the specific name.
         */
        std::shared_ptr<AttributeNode> GetAttributeNode(std::string& attributeName)
        {
            for (auto attributeNode : _attributes)
            {
                if (attributeNode->GetName() == attributeName)
                {
                    return attributeNode;
                }
            }
            return nullptr;
        }
    };
}
