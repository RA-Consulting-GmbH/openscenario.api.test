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

#include "BaseImpl.h"

namespace NET_ASAM_OPENSCENARIO
{
    

	BaseImpl::ParameterizedAttribute::ParameterizedAttribute(const std::string parameterName, Textmarker& textMarker) : textMarker(textMarker), parameterName(parameterName) {}


    BaseImpl::BaseImplIlocator::BaseImplIlocator(std::map<std::string, std::shared_ptr<Textmarker>>& attributeKeyToStartMarker, std::map<std::string, std::shared_ptr<Textmarker>>& attributeKeyToEndMarker, 
                         Textmarker& startMarker, Textmarker& endMarker): _attributeKeyToStartMarker(attributeKeyToStartMarker),
                                                                          _attributeKeyToEndMarker(attributeKeyToEndMarker), _startMarker(startMarker), _endMarker(endMarker)
    {
    }

    Textmarker BaseImpl::BaseImplIlocator::GetStartMarkerOfProperty(const std::string& propertyKey) 
    {
        if (_attributeKeyToStartMarker[propertyKey] != nullptr)
            return *_attributeKeyToStartMarker[propertyKey];
        return Textmarker(-1,-1,"");
    }

	Textmarker BaseImpl::BaseImplIlocator::GetStartMarker()
    {
        return _startMarker;
    }

    Textmarker BaseImpl::BaseImplIlocator::GetEndMarkerOfProperty(const std::string& propertyKey)
    {
        return *_attributeKeyToEndMarker[propertyKey];
    }

    Textmarker BaseImpl::BaseImplIlocator::GetEndMarker() 
    {
        return _endMarker;
    }
   



    BaseImpl::~BaseImpl() = default;

    void BaseImpl::CloneStartMarker(BaseImpl& baseImpl) const
    {
        baseImpl.SetStartMarker(_startMarker);
    }

    void BaseImpl::CloneEndMarker(BaseImpl& baseImpl) const
    {
        baseImpl.SetEndMarker(_endMarker);
    }

    void BaseImpl::CloneAttributeKeyToStartMarker(BaseImpl& baseImpl) const
    {
        baseImpl._attributeKeyToStartMarker = _attributeKeyToStartMarker;
    }

    void BaseImpl::CloneAttributeKeyToEndMarker(BaseImpl& baseImpl) const
    {
        baseImpl._attributeKeyToEndMarker = _attributeKeyToEndMarker;
    }

    void BaseImpl::CloneAttributeKeyToParameterNameMap(BaseImpl& baseImpl)
    {
        for (auto&& pair : _attributeKeyToParameterName)
        {
            auto parameterizedAttribute = pair.second;
            baseImpl._attributeKeyToParameterName.emplace(pair.first, std::make_shared<ParameterizedAttribute>(parameterizedAttribute->parameterName, parameterizedAttribute->textMarker));
        }
    }

	

	void BaseImpl::SetAttributeParameter(const std::string attributeKey, const std::string parameterName, Textmarker& textMarker)
    {
        _attributeKeyToParameterName.emplace(attributeKey, std::make_shared<ParameterizedAttribute>(parameterName, textMarker));
    }

    void BaseImpl::RemoveAttributeParameter(const std::string attributeKey)
    {
        _attributeKeyToParameterName.erase(attributeKey);
    }
	
	void BaseImpl::AddResolvedParameter(std::string& attributeKey)
    {
        _resolvedAttributes.push_back(attributeKey);
    }

    std::vector<std::string> BaseImpl::GetResolvedAttributeKeys() const
    {
        return _resolvedAttributes;
    }

    SimpleType BaseImpl::GetParameterType(std::string& typeName)
    {
        if (typeName == "string")
            return SimpleType::STRING;
        if (typeName == "unsignedInt")
            return SimpleType::UNSIGNED_INT;
        if (typeName == "integer" || typeName == "int")
            return SimpleType::INT;
        if (typeName == "unsignedShort")
            return SimpleType::UNSIGNED_SHORT;
        if (typeName == "dateTime")
            return SimpleType::DATE_TIME;
        if (typeName == "boolean")
            return SimpleType::BOOLEAN;
        if (typeName == "double")
            return SimpleType::DOUBLE;
        return SimpleType::UNKNOWN;
    }

   void BaseImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& value) {}

	void BaseImpl::ResolveExpressionInternal(IParserMessageLogger& logger, std::string& attributeKey,
		std::string& expression, std::shared_ptr<std::map<std::string, std::shared_ptr<OscExpression::ExprValue>>> definedParameters)
	{
	}

	BaseImpl::BaseImpl(): _startMarker(0, 0, ""), _endMarker(0, 0, "")
    {
        _adapters.emplace(std::make_pair(typeid(ILocator).name(), std::make_shared<BaseImplIlocator>(_attributeKeyToStartMarker,
                                                                                                     _attributeKeyToEndMarker, _startMarker, _endMarker)));
    }

    std::shared_ptr<void> BaseImpl::GetAdapter(const std::string classifier)
    {
        const auto kIt = _adapters.find(classifier);
        if (kIt != _adapters.end())
            return kIt->second;
        return nullptr;
    }

   void BaseImpl::AddAdapter(std::string classifier, std::shared_ptr<void> object)
    {
        _adapters.emplace(std::make_pair(classifier, object));
    }

    void BaseImpl::PutPropertyStartMarker(std::string propertyKey, std::shared_ptr<Textmarker> startMarker)
    {
        _attributeKeyToStartMarker.emplace(std::make_pair(propertyKey, startMarker));
    }

    void BaseImpl::PutPropertyEndMarker(std::string propertyKey, std::shared_ptr<Textmarker> endMarker)
    {
        _attributeKeyToEndMarker.emplace(std::make_pair(propertyKey, endMarker));
    }
	
	

    std::vector<std::shared_ptr<ParameterValue>> BaseImpl::GetParameterDefinitions() const
    {
        return std::vector<std::shared_ptr<ParameterValue>>{};
    }

    bool BaseImpl::HasParameterDefinitions()
    {
        return false;
    }

    std::shared_ptr<Textmarker> BaseImpl::GetTextmarker(std::string& attributeKey) const
    {
        const auto kIt = _attributeKeyToParameterName.find(attributeKey);
        if( kIt != _attributeKeyToParameterName.end() )
            return std::make_shared<Textmarker>(kIt->second->textMarker);
        return nullptr;
    }

	

    std::vector<std::string> BaseImpl::GetParameterizedAttributeKeys() const
    {
        std::vector<std::string> keys;
        for( auto&& element : _attributeKeyToParameterName )
        {
            keys.push_back(element.first);
        }
        return keys;
    }

    std::string BaseImpl::GetParameterNameFromAttribute(std::string& attributeKey) const 
    {
        const auto kIt = _attributeKeyToParameterName.find(attributeKey);
        if( kIt != _attributeKeyToParameterName.end() )
            return kIt->second->parameterName;
        return "";
    }

    void BaseImpl::ResolveParameter(std::shared_ptr<IParserMessageLogger>& logger, std::string& attributeKey, std::string& value)
    {
        // make sure it is a parameterized attribute
        const auto kTargetClass = GetTypeFromAttributeName(attributeKey);
        assert(kTargetClass != SimpleType::UNKNOWN);
        ResolveParameterInternal(*logger.get(), attributeKey, value);
    }

    Textmarker BaseImpl::GetStartMarker()
    {
        return _startMarker;
    }

    void BaseImpl::SetStartMarker(Textmarker startMarker)
    {
        _startMarker = startMarker;
    }

     Textmarker BaseImpl::GetEndMarker() const
    {
        return _endMarker;
    }

    void BaseImpl::SetEndMarker(Textmarker endMarker)
    {
        _endMarker = endMarker;
    }

    std::vector<std::shared_ptr<BaseImpl>> BaseImpl::GetChildren() const
    {
        return {};
    }

    std::shared_ptr<BaseImpl> BaseImpl::Clone()
    {
        return nullptr;
    }

    std::weak_ptr<IOpenScenarioModelElement> BaseImpl::GetParent() const
    {
        return _parent;
    }

    void BaseImpl::SetParent(const std::weak_ptr<IOpenScenarioModelElement> parent)
    {
        _parent = parent;
    }

	void BaseImpl::ResolveUnsignedIntExpression(std::string & attributeKey, unsigned int & value)
	{
	}

	void BaseImpl::ResolveIntExpression(std::string& attributeKey, int& value)
	{
	}

	void BaseImpl::ResolveBooleanExpression(std::string& attributeKey, bool& value)
	{
	}

	void BaseImpl::ResolveStringExpression(std::string& attributeKey, std::string& value)
	{
	}

	void BaseImpl::ResolveUnsignedShortExpression(std::string& attributeKey, unsigned short& value)
	{
	}

	void BaseImpl::ResolveDateTimeExpression(std::string& attributeKey, DateTime& value)
	{
	}

	void BaseImpl::ResolveDoubleExpression(std::string& attributeKey, double& value)
	{
	}

	bool BaseImpl::IsTypedStringAttribute(std::string& attributeKey)
    {
		return false;
    }

}
