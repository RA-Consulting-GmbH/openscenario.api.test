#pragma once
#include "PositionNode.h"
#include <string>


namespace RAC_XML_INDEXER
{
    /**
    * Every osc model element does implement this interface
    */
    class AttributeNode: public PositionNode 
    {
    private:
        std::string  _name;

    public:
        /**
         * Constructor
         * @param name name of the attribute
         * @param startLine line of the start position
         * @param startColumn column of the stat position
         * @param endLine line of the end position
         * @param endColumn column of the end position
         */
        AttributeNode(std::string& name, const int startLine, const int startColumn, const int endLine, const int endColumn):
            PositionNode(startLine, startColumn, endLine, endColumn), _name(name) {}

        /**
         * The name of the attribute
         * @return the name
         */
        std::string GetName() const
        {
            return _name;
        }
    };
}
