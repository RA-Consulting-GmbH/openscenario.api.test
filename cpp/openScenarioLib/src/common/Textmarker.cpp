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

#include "Textmarker.h"
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{

	Textmarker::Textmarker(const int line, const int column, const std::string filename): _column(column), _line(line), _filename(filename) {}

    /**
     * The column in a line
     * @return the column (starting with 0)
     */
    int Textmarker::GetColumn() const { return _column; }

    /**
     * The line in a file.
     * @return The line number (starting with 0)
     */
    int Textmarker::GetLine() const { return _line; }

    /**
     * The filename
     * @return the name of the file.
     */
    std::string Textmarker::GetFilename() const { return _filename; }

    bool Textmarker::operator==(const Textmarker& rhs) const
    {
        return rhs._filename == this->_filename && rhs._line == this->_line && rhs._column == this->_column;
    }

    size_t Textmarker::HashCode() const { return std::hash<std::string>{}(this->ToString()); }

    std::string Textmarker::ToString() const { return _filename + "(" + std::to_string(_line) + "," + std::to_string(_column) + ")"; }

}
