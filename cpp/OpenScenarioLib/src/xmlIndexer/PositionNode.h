#pragma once
#include "Position.h"
#include "MemLeakDetection.h"


namespace RAC_XML_INDEXER
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
        Position GetStartPosition() const
        {
            return _startPosition;
        }

        /**
         * The end position
         * @return end position of the node
         */
        Position GetEndPosition() const
        {
            return _endPosition;
        }

        /**
         * Adding an end postion to the node
         * @param line of the end position
         * @param column of the end position
         */
        void AddEndPosition(const int line, const int column) 
        {
            _endPosition = Position(line, column);
        }

        /**
         * Constructor
         * @param line of the start position
         * @param column of the stat position
         */
        PositionNode(const int line, const int column):_startPosition(line, column), _endPosition(-1,-1) {}

        /**
         * Constructor
         * @param startLine line of the start position
         * @param startColumn column of the stat position
         * @param endLine line of the end position
         * @param endColumn column of the end position
         */
        PositionNode(const int startLine, const int startColumn, const int endLine, const int endColumn):
        _startPosition(startLine, startColumn), _endPosition(endLine, endColumn) {}
    };
}
