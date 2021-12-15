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
#include <string>
#include "MemLeakDetection.h"
#include "ExportDefinitions.h"

namespace NET_ASAM_OPENSCENARIO
{
    /**
     * A text marker hold information of a file a line and a column.
     * Both line and column should start with 0
     *
     */
    class Textmarker 
    {
    private:
        int _column;
        int _line;
        std::string _filename;

    public:
		OPENSCENARIOLIB_EXP Textmarker(const int line, const int column, const std::string filename);

        /**
         * The column in a line
         * @return the column (starting with 0)
         */
		OPENSCENARIOLIB_EXP int GetColumn() const;

        /**
         * The line in a file.
         * @return The line number (starting with 0)
         */
		OPENSCENARIOLIB_EXP int GetLine() const;

        /**
         * The filename
         * @return the name of the file.
         */
		OPENSCENARIOLIB_EXP std::string GetFilename() const;

		OPENSCENARIOLIB_EXP bool operator==(const Textmarker& rhs) const;

		OPENSCENARIOLIB_EXP size_t HashCode() const;

		OPENSCENARIOLIB_EXP std::string ToString() const;
    };
}
