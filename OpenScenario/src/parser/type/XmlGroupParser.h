#pragma once
#include "IParserMessageLogger.h"
#include "Textmarker.h"
#include "BaseImpl.h"
#include "ParserContext.h"
#include "XmlModelGroupParser.h"
#include "IXmlTypeParser.h"
#include "XmlParserBase.h"
#include "IndexedElement.h"
#include "Position.h"
#include <vector>

namespace RAC_OPENSCENARIO
{
    /**
    * Parser for XSD:group types
    */
    template <class T>
    class XmlGroupParser:public BaseImpl, public XmlParserBase<T>, public IXmlTypeParser<T> 
    {

    protected:
        std::string _elementName;
        XmlModelGroupParser<T> _subElementParser;

    public:
        /**
         * Constructor
         * @param messageLogger to log messages during parsing process
         * @param filename of the file the parser is operating on.
         */
        XmlGroupParser(IParserMessageLogger& messageLogger, std::string& filename): XmlParserBase(messageLogger, filename), _subElementParser(messageLogger, filename) {}

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr <ParserContext>& parserContext, std::shared_ptr <T>& object) override
        {
            const auto kStartPosition = indexedElement->GetStartElementLocation();
            object->SetStartMarker(Textmarker(kStartPosition.GetLine(), kStartPosition.GetColumn(), this->_filename));

            // Prepare a list
            auto parentSubElements = indexedElement->GetParent()->GetSubElements();
            const auto kIt = std::find(parentSubElements.begin(), parentSubElements.end(), indexedElement);
            int index = 0;
            if (kIt != parentSubElements.end())
                index = std::distance(parentSubElements.begin(), kIt);

            ParseSubElements(parentSubElements, *parserContext.get(), *object.get());
            const auto kEndPosition = parserContext->GetLastElementParsed()->GetEndElementLocation();
            object->SetStartMarker(Textmarker(kEndPosition.GetLine(), kEndPosition.GetColumn(), this->_filename));
        }

        void ParseSubElements(std::vector<std::shared_ptr<IndexedElement>>& indexedElement, ParserContext& parserContext, T& object) override
        {
            _subElementParser.ParseSubElements(indexedElement, parserContext, object);
        }
    };
}
