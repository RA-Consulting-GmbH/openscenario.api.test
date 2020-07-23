#pragma once
#include <vector>
#include "tinyxml2.h"
#include "ErrorLevel.h"
#include "FileContentMessage.h"
#include "IParserMessageLogger.h"
#include "Textmarker.h"
#include "BaseImpl.h"
#include "XmlParserBase.h"
#include "IndexedElement.h"
#include "Position.h"
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{
    /**
    * Generic parsers for wrapped list. An inner parser is wrapped by this parser.
    */
    template <class T>
    class WrappedListParser: public BaseImpl, public XmlParserBase<T>, public IElementParser<T>
    {
    private:
        std::shared_ptr<IElementParser<T>> _innerElementParser;

    protected:
        std::string _wrapperTagName;
        Position _wrapperTagNameEndPosition;

    public:
        /**
         * Constructor
         * @param messageLogger to log messages during parsing process
         * @param filename of the file the parser is operationg on.
         * @param innerParser the inner parser
         * @param wrapperTagName the tagname that wrapps the list.
         */
        WrappedListParser(IParserMessageLogger& messageLogger, std::string& filename, const std::shared_ptr<IElementParser<T>> innerParser, const std::string wrapperTagName):
            XmlParserBase<T>(messageLogger, filename), _innerElementParser(innerParser), _wrapperTagName(wrapperTagName), _wrapperTagNameEndPosition(-1,-1) {}

        void ParseSubElements(std::vector<std::shared_ptr<IndexedElement>>& parentElements, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<T>& object) override
        {
            int currentOccurs = 0;
            for (auto && indexedElement : parentElements)
            {
                const auto kElement = indexedElement->GetElement();
                std::string tagName = kElement->Name();
                auto start = indexedElement->GetStartElementLocation();

                if (!_innerElementParser->DoesMatch(tagName))
                {
                   auto msg = FileContentMessage("Unknown or unexpected element '" + tagName + "'", ERROR, Textmarker(start.GetLine(), start.GetColumn(), this->_filename));
                   this->_messageLogger.LogMessage(msg);
                }
                else
                {

                    if (currentOccurs < _innerElementParser->GetMaxOccur() || _innerElementParser->GetMaxOccur() == -1)
                    {
                        _innerElementParser->Parse(indexedElement, parserContext, object);
                        currentOccurs++;
                    }
                    else
                    {
                        auto msg = FileContentMessage("Too many elements in <" + _wrapperTagName + ">  (" + std::to_string(_innerElementParser->GetMaxOccur()) + ") has already reached", ERROR, Textmarker(start.GetLine(), start.GetColumn(), this->_filename));
                        this->_messageLogger.LogMessage(msg);
                    }
                }

            }

            if (currentOccurs < _innerElementParser->GetMinOccur())
            {
                auto msg = FileContentMessage("Too few elements in <" + _wrapperTagName + ">(" + std::to_string(_innerElementParser->GetMaxOccur()) + " are allowed)", ERROR, Textmarker(_wrapperTagNameEndPosition.GetLine(), _wrapperTagNameEndPosition.GetColumn(), this->_filename));
                this->_messageLogger.LogMessage(msg);
            }

        }

        void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr <ParserContext>& parserContext, std::shared_ptr <T>& object) override
        {
            _wrapperTagNameEndPosition = indexedElement->GetEndElementLocation();
            auto subElements = indexedElement->GetSubElements();
            ParseSubElements(subElements, parserContext, object);
            parserContext->SetLastElementParsed(indexedElement);
        }

        int GetMinOccur() override
        {
            return _innerElementParser->GetMinOccur() == 0 ? 0 : 1;
        }


        int GetMaxOccur() override
        {
            return 1;
        }


        bool DoesMatch(std::string& elementName) override
        {
            return elementName == _wrapperTagName;
        }


        std::vector<std::string> GetExpectedTagNames() override
        {
            return std::vector<std::string>{ _wrapperTagName };
        }

    };
}
