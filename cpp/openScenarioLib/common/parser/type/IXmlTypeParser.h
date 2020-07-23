#pragma once
#include "ParserContext.h"
#include "XmlParserException.h"
#include "IndexedElement.h"
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{
    /**
    * Parser interface for types (XSD:group, XSD:complexType, XSD:simpleContent)
    */
    template <class T>
    class IXmlTypeParser 
    {
    public:
        IXmlTypeParser() = default;
        virtual ~IXmlTypeParser() = default;

        /**
         * Parsing the XSD type
         * @param indexedElement the element to be parsed
         * @param parserContext a parser context to store dynamic information in.
         * @param object the object that will be filled during the parsing process.
         * @throws XmlParserException if an exception occurs.
         */
        //TODO: discuss with Dieter if this should be avoided as usually its suggested not to specify exceptions
        virtual void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr <ParserContext>& parserContext, std::shared_ptr <T>& object) {} //throw(XmlParserException) {}

    };

}
