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
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
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