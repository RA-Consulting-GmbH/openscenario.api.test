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
#include <string>
#include <vector>
#include "ElementNode.h"
#include "MemLeakDetection.h"
#include <memory>

namespace NET_ASAM_OPENSCENARIO
{
  
	ElementNode::ElementNode(const int line, const int column) : PositionNode(line, column) {}

	ElementNode::ElementNode(const int startLine, const int startColumn, const int endLine, const int endColumn) :
        PositionNode(startLine, startColumn, endLine, endColumn) {}

    void ElementNode::AddAttributes(std::vector<AttributeNode>& attributeNodes)
    {
        for (auto&& node : attributeNodes)
            _attributes.push_back(std::make_shared<AttributeNode>(node));
    }

   std::shared_ptr<AttributeNode> ElementNode::GetAttributeNode(const unsigned int index)
    {
        if (index > _attributes.size())
            return nullptr;
        return _attributes[index];
    }
   std::shared_ptr<AttributeNode> ElementNode::GetAttributeNode(std::string& attributeName)
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
}
