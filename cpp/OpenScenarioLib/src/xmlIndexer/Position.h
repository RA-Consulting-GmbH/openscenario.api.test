#pragma once
#include "MemLeakDetection.h"

namespace RAC_XML_INDEXER
{
    /**
     * Class for position value objects.
     */
    class Position 
    {
    private:
        int _line;
        int _column;

    public:
        /**
         * The column
         * @return the column of the position.
         */
        int GetColumn() const
        {
            return _column;
        }

        /**
         * The line
         * @return the line of the position
         */
        int GetLine() const
        {
            return _line;
        }

        /**
         * Constructor
         * @param line line of the position
         * @param column column of the position
         */
        Position(const int line, const int column):_line(line), _column(column) {}

        Position() :_line(-1), _column(-1) {}

    };

}