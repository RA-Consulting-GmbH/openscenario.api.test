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
#include "tinyxml2.h"
#include <vector>
#include <string>
#include "ElementNode.h"
#include "Position.h"
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{
    /**
     * Helper class. Wraps dom elements with their information (ElementNode) for ANTLR parsers.
     * (elements and parent elements)
     */
    class IndexedElement 
    {
    private:
        std::vector<std::shared_ptr<IndexedElement>> _subElements;
        std::shared_ptr<ElementNode> _elementNode;
        std::string _characters;
        tinyxml2::XMLElement* _element;
        std::weak_ptr<IndexedElement> _parent;
        bool _isMixedNode = false;

    public:

		IndexedElement();

        /**
         * Constructor
         * @param element the dom element
         * @param elementNode the ElementNode from the ANTLR parser
         * @param parent parent element from the ANTLR parser
        */
		IndexedElement(tinyxml2::XMLElement* element, const std::shared_ptr<ElementNode> elementNode, const std::weak_ptr<IndexedElement> parent);
        
        /**
         * Sets the characters (for simpleContent types)
         * @param characters the cahracters
         */
		void SetCharacters(std::string& characters);

        /**
         * The parent of this element (from ANTLR element)
         * @return the parent
         */
		std::weak_ptr<IndexedElement> GetParent() const;

        /**
         * Adding sub elements (for complex types and groups)
         * @param element
         */
		void AddSubElement(std::shared_ptr<IndexedElement>& element);

        /**
         * The ordered list of sub elements of the element as they occur in the xml.
         * @return the sub elements
         */
		std::vector<std::shared_ptr<IndexedElement>> GetSubElements() const;

        /**
         * The characters (for simpleContent types)
         * @return the characters
         */
		std::string GetCharacters() const;

        /**
         * The start position in the file
         * @return the position
         */
		Position GetStartElementLocation() const;

        /**
         * The end position in the file
         * @return the position
         */
		Position GetEndElementLocation() const;

        /**
        * The dom element
        * @return dom element
        */
		tinyxml2::XMLElement* GetElement() const;

        /**
         * The start position of an attribute in this element
         * @param attributeName name of the requested attribute
         * @return the position
         */
		Position GetAttributeStartPosition(std::string& attributeName) const;

        /**
         * The end position of an attribute in this element
         * @param attributeName name of the requested attribute
         * @return the position
         */
		Position GetAttributeEndPosition(std::string& attributeName) const;

    	/**
		 * The start value position of an attribute in this element
		 * @param attributeName name of the requested attribute
		 * @return the position
		 */
		Position GetAttributeStartValuePosition(std::string& attributeName) const;
        /**
         * Is this node a mixed node
         * @return true if mixed node
         */
		bool IsMixedNode() const;
        /**
         * Set whether this node is a mixed node
         * @param isMixedNode true if mixed node
         */
		void SetMixedNode(const bool isMixedNode);
    };
}
