#pragma once
#include "tinyxml2.h"
#include <vector>
#include <string>
#include "ElementNode.h"
#include "Position.h"
#include "MemLeakDetection.h"

namespace RAC_OPENSCENARIO
{
    /**
     * Helper class. Wraps dom elements with their information (ElementNode) for ANTLR parsers.
     * (elements and parent elements)
     */
    class IndexedElement 
    {
    private:
        std::vector<std::shared_ptr<IndexedElement>> _subElements;
        std::shared_ptr<RAC_XML_INDEXER::ElementNode> _elementNode;
        std::string _characters;
        tinyxml2::XMLElement* _element;
        std::weak_ptr<IndexedElement> _parent;
        bool _isMixedNode = false;

    public:

        IndexedElement(): _elementNode(nullptr), _element(nullptr), _parent() {}

        /**
         * Constructor
         * @param element the dom element
         * @param elementNode the ElementNode from the ANTLR parser
         * @param parent parent element from the ANTLR parser
        */
        IndexedElement(tinyxml2::XMLElement* element, const std::shared_ptr<RAC_XML_INDEXER::ElementNode> elementNode, const std::weak_ptr<IndexedElement> parent) :
                      _elementNode(elementNode), _element(element), _parent(parent) {}
        
        /**
         * Sets the characters (for simpleContent types)
         * @param characters the cahracters
         */
        void SetCharacters(std::string& characters) 
        {
            _characters = characters;
        }

        /**
         * The parent of this element (from ANTLR element)
         * @return the parent
         */
        std::weak_ptr<IndexedElement> GetParent() const
        {
            return _parent;
        }

        /**
         * Adding sub elements (for complex types and groups)
         * @param element
         */
        void AddSubElement(std::shared_ptr<IndexedElement>& element)
        {
            _subElements.push_back(element);
        }

        /**
         * The ordered list of sub elements of the element as they occur in the xml.
         * @return the sub elements
         */
        std::vector<std::shared_ptr<IndexedElement>> GetSubElements() const
        {
            return _subElements;
        }

        /**
         * The characters (for simpleContent types)
         * @return the characters
         */
        std::string GetCharacters() const
        {
            return _characters;
        };

        /**
         * The start position in the file
         * @return the position
         */
        RAC_XML_INDEXER::Position GetStartElementLocation() const
        {
            return _elementNode->GetStartPosition();
        }

        /**
         * The end position in the file
         * @return the position
         */
        RAC_XML_INDEXER::Position GetEndElementLocation() const
        {
            return _elementNode->GetEndPosition();
        }

        /**
        * The dom element
        * @return dom element
        */
        tinyxml2::XMLElement* GetElement() const
        {
            return _element;
        }

        /**
         * The start position of an attribute in this element
         * @param attributeName name of the requested attribute
         * @return the position
         */
        RAC_XML_INDEXER::Position GetAttributeStartPosition(std::string& attributeName) const
        {
            const auto kAttributeNode = _elementNode->GetAttributeNode(attributeName);
            if (kAttributeNode)
                return kAttributeNode->GetStartPosition();
            return { -1, -1 };
        }

        /**
         * The end position of an attribute in this element
         * @param attributeName name of the requested attribute
         * @return the position
         */
        RAC_XML_INDEXER::Position GetAttributeEndPosition(std::string& attributeName) const
        {
            const auto kAttributeNode = _elementNode->GetAttributeNode(attributeName);
            if (kAttributeNode)
                return kAttributeNode->GetEndPosition();
            return {-1,-1};
        }
        /**
         * Is this node a mixed node
         * @return true if mixed node
         */
        bool IsMixedNode() const
        {
            return _isMixedNode;
        }

        /**
         * Set whether this node is a mixed node
         * @param isMixedNode true if mixed node
         */
        void SetMixedNode(const bool isMixedNode) 
        {
            _isMixedNode = isMixedNode;
        }
    };
}