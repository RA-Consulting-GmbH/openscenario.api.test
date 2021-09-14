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


#include "IndexedElement.h"


namespace NET_ASAM_OPENSCENARIO
{
	IndexedElement::IndexedElement(tinyxml2::XMLElement* element, const std::shared_ptr<ElementNode> elementNode, const std::weak_ptr<IndexedElement> parent) :
		_elementNode(elementNode), _element(element), _parent(parent) {}

	void IndexedElement::SetCharacters(std::string& characters)
	{
		_characters = characters;
	}

	std::weak_ptr<IndexedElement> IndexedElement::GetParent() const
	{
		return _parent;
	}

	void IndexedElement::AddSubElement(std::shared_ptr<IndexedElement>& element)
	{
		_subElements.push_back(element);
	}

	std::vector<std::shared_ptr<IndexedElement>> IndexedElement::GetSubElements() const
	{
		return _subElements;
	}

	std::string IndexedElement::GetCharacters() const
	{
		return _characters;
	};

	Position IndexedElement::GetStartElementLocation() const
	{
		return _elementNode->GetStartPosition();
	}

	Position IndexedElement::GetEndElementLocation() const
	{
		return _elementNode->GetEndPosition();
	}

	tinyxml2::XMLElement* IndexedElement::GetElement() const
	{
		return _element;
	}

	Position IndexedElement::GetAttributeStartPosition(std::string& attributeName) const
	{
		const auto kAttributeNode = _elementNode->GetAttributeNode(attributeName);
		if (kAttributeNode)
			return kAttributeNode->GetStartPosition();
		return { -1, -1 };
	}

	Position IndexedElement::GetAttributeEndPosition(std::string& attributeName) const
	{
		const auto kAttributeNode = _elementNode->GetAttributeNode(attributeName);
		if (kAttributeNode)
			return kAttributeNode->GetEndPosition();
		return { -1,-1 };
	}
	bool IndexedElement::IsMixedNode() const
	{
		return _isMixedNode;
	}

	void IndexedElement::SetMixedNode(const bool isMixedNode)
	{
		_isMixedNode = isMixedNode;
	}

}