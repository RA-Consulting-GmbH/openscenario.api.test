#pragma once
#include "ErrorLevel.h"
#include "FileContentMessage.h"
#include "IParserMessageLogger.h"
#include "Textmarker.h"
#include "BaseImpl.h"
#include "ParserContext.h"
#include "XmlComplexTypeParser.h"
#include "IndexedElement.h"
#include "Position.h"
#include <vector>
#include "MemLeakDetection.h"

namespace RAC_OPENSCENARIO
{
    /**
    * Parser for XSD:simpleContent types (a complexType Parser with no elements, just content)
    */
    template <class T>
    class XmlSimpleContentParser: public virtual BaseImpl, public XmlComplexTypeParser<T> 
    {
    public:
        /**
         * Constructor
         * @param messageLogger to log messages during parsing process
         * @param filename of the file the parser is operating on.
         */
        XmlSimpleContentParser(IParserMessageLogger& messageLogger, std::string& filename) : XmlComplexTypeParser(messageLogger, filename) {}

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr <ParserContext>& parserContext, std::shared_ptr <T>& object) override
        {

            this->ParseAttributes(indexedElement, *object.get());
            // Read element. Make sure it is a Character Tag
            auto content = indexedElement->GetCharacters();
            if (!content.empty())
                SetContentProperty(content, *object.get());
            else if (IsContentRequired())
                SetContentProperty("", *object.get());

            auto subElements = indexedElement->GetSubElements();
            for (auto&& elem : subElements)
            {
                std::string elemName = elem->GetElement()->Name();
                auto msg = FileContentMessage("Element '" + elemName + "' is not allowed here.", ERROR, Textmarker(elem->GetStartElementLocation().GetLine(), elem->GetStartElementLocation().GetColumn(), this->_filename));
                this->_messageLogger.LogMessage(msg);
            }

            const auto kStartPosition = indexedElement->GetStartElementLocation();
            object->SetStartMarker( Textmarker(kStartPosition.GetLine(), kStartPosition.GetColumn(), this->_filename));
            const auto kEndPosition = indexedElement->GetStartElementLocation();
            object->SetEndMarker( Textmarker(kEndPosition.GetLine(), kEndPosition.GetColumn(), this->_filename));
            parserContext->SetLastElementParsed(indexedElement);
        }


    protected:
        /**
         * Sets the property that is represented by the content
         * @param content the content of the simpleContent
         * @param object the model object for that the property is assigned with the content
         */
        virtual void SetContentProperty( const std::string content, T& object) {}

        /**
         * is the content a required property.
         * @return true if required
         */
        virtual bool IsContentRequired()
        {
            return false;
        }

    };
}
