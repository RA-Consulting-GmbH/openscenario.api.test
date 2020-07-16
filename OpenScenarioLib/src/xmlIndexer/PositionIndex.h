#pragma once
#include "ElementNode.h"
#include <map>
#include <stack>
#include "MemLeakDetection.h"

namespace RAC_XML_INDEXER
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
        void PushElementNode(const int line, const int column, std::vector<AttributeNode> attributeNodes)
        {
            auto node = std::make_shared<ElementNode>(line, column);
            node->AddAttributes(attributeNodes);
            _dictionary.emplace(std::make_pair(_counter++, node));
            _stack.push(node);
        }
        /**
         * Sets the end position
         * @param line end line of the element node
         * @param column end column of the element node
         */
        void SetEndPosition(const int line, const int column)
        {
            auto node = _stack.top();
            node->AddEndPosition(line, column);
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
