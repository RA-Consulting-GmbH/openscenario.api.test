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

#if defined (__linux__) || defined (__APPLE__) || defined (__MINGW32__) || defined (__MINGW64__)
#   include <unistd.h>
#   define GETCWD getcwd
#   define OS_PATH_MAX PATH_MAX
#elif defined (WIN32)
#   include <direct.h>
#   define GETCWD _getcwd
#   define OS_PATH_MAX _MAX_PATH
#else
#   error "Operating system not supported."
#endif

#include <iostream>
#include "MemLeakDetection.h"
#include "PositionIndex.h"
#include "XMLLexer.h"
#include "XMLParser.h"

void Dump(PositionIndex& positionIndex, int& index)
{
    const auto kElementNode = positionIndex.GetElementNode(index);
    std::cout << index << ": " << "(" << kElementNode->GetStartPosition().GetLine() << ", ";
    std::cout << kElementNode->GetStartPosition().GetColumn() << ") - (" << kElementNode->GetEndPosition().GetLine();
    std::cout << ", " << kElementNode->GetEndPosition().GetColumn() << ")" << std::endl;
}

void TestBooks()
{
    try 
    {
        char cwdBuffer[OS_PATH_MAX];
		std::string filePath = "./test-rc/books.xml";
		std::string currentPath = std::string(GETCWD(cwdBuffer, OS_PATH_MAX));
        std::ifstream infile(filePath, std::ios::binary);
        if (infile.bad() || infile.fail())
        {
            auto msg = "File " + filePath + " not found. Current Path: '" + currentPath + "'";
            throw std::runtime_error(msg);
        }

        // read data as a block:
        infile.seekg(0, infile.end);
        const auto kLength = static_cast<unsigned int>(infile.tellg());
        infile.seekg(0, infile.beg);
        char * buffer = new char[kLength];
        infile.read(buffer, kLength);
        std::string fileData;
        fileData.assign(buffer, kLength);
        delete[] buffer;
        infile.close();

        antlr4::ANTLRInputStream input(fileData);
        XMLLexer lexer(&input);
        antlr4::CommonTokenStream tokens(&lexer);
        XMLParser parser(&tokens);
        parser.document();

        auto positionIndex = parser.GetPositionIndex();
        for (int i = 0; i < positionIndex.GetSize(); i++)
        {
            Dump(positionIndex, i);
        }

    }
    catch (std::runtime_error & e)
    {
        std::cout << e.what();
    }
}

int main(int argc, char** argv)
{
#if defined(_DEBUG) && defined(WIN32)
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
#endif

    TestBooks();

}
