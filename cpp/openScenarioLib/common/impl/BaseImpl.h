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

#include <string>
#include <map>
#include <set>
#include <vector>
#include "IOpenScenarioModelElement.h"
#include "ILocator.h"
#include "IParserMessageLogger.h"
#include "Textmarker.h"
#include "IParameterizedObject.h"
#include "ParameterValue.h"
#include "DateTime.h"
#include <cassert>
#include "IOpenScenarioFlexElement.h"
#include "SimpleType.h"
#include "MemLeakDetection.h"

/**
 * This a base class for all osc model classes. They are independent from the xml platform.
 * Subclasses can be filled from other sources than xml.
 *
 */
namespace NET_ASAM_OPENSCENARIO
{
    class BaseImpl : public IParameterizedObject, public virtual IOpenScenarioModelElement, public virtual IOpenScenarioFlexElement
    {
    private:
        /**
         * An attribute that is parameterized.
         */
        class ParameterizedAttribute
        {
        public:
            Textmarker textMarker;
            std::string parameterName;

            ParameterizedAttribute(const std::string parameterName, Textmarker& textMarker) : textMarker(textMarker), parameterName(parameterName) {}
        };

        class BaseImplIlocator : public ILocator
        {
            std::map<std::string, std::shared_ptr<Textmarker>>& _attributeKeyToStartMarker;
            std::map<std::string, std::shared_ptr<Textmarker>>& _attributeKeyToEndMarker;
            Textmarker& _startMarker;
            Textmarker& _endMarker;

        public:
            BaseImplIlocator(std::map<std::string, std::shared_ptr<Textmarker>>& attributeKeyToStartMarker, std::map<std::string, std::shared_ptr<Textmarker>>& attributeKeyToEndMarker,
                             Textmarker& startMarker, Textmarker& endMarker): _attributeKeyToStartMarker(attributeKeyToStartMarker),
                                                                              _attributeKeyToEndMarker(attributeKeyToEndMarker), _startMarker(startMarker), _endMarker(endMarker)
            {
            }

            Textmarker GetStartMarkerOfProperty(const std::string& propertyKey) override
            {
                if (_attributeKeyToStartMarker[propertyKey] != nullptr)
                    return *_attributeKeyToStartMarker[propertyKey];
                return Textmarker(-1,-1,"");
            }

            Textmarker GetStartMarker() override
            {
                return _startMarker;
            }

            Textmarker GetEndMarkerOfProperty(std::string& propertyKey) override
            {
                return *_attributeKeyToEndMarker[propertyKey];
            }

            Textmarker GetEndMarker() override
            {
                return _endMarker;
            }
        };

        std::map<std::string, std::shared_ptr<ParameterizedAttribute>> _attributeKeyToParameterName{};
        std::vector<std::string> _resolvedAttributes{};
        std::map<std::string, std::shared_ptr<Textmarker>> _attributeKeyToStartMarker{};
        std::map<std::string, std::shared_ptr<Textmarker>> _attributeKeyToEndMarker{};
        std::map<std::string, std::shared_ptr<void>> _adapters{};
        Textmarker _startMarker;
        Textmarker _endMarker;
        std::weak_ptr<IOpenScenarioModelElement> _parent;

    protected:
        std::map<std::string, SimpleType> _propertyToType;

    public:
        virtual ~BaseImpl() = default;

        /**
         * A clone method for the start marker
         * @param baseImpl the cloned object to set this object's start marker
         */
        void CloneStartMarker(BaseImpl& baseImpl)
        {
            baseImpl.SetStartMarker(_startMarker);
        }

        /**
         * Clone method for the end marker
         * @param baseImpl the cloned object to set this object's end marker
         */
        void CloneEndMarker(BaseImpl& baseImpl)
        {
            baseImpl.SetEndMarker(_endMarker);
        }

        /**
         * Clone method for the properties start markers
         * @param baseImpl the cloned object to set this object's property start markers
         */
        void CloneAttributeKeyToStartMarker(BaseImpl& baseImpl) const
        {
            baseImpl._attributeKeyToStartMarker = _attributeKeyToStartMarker;
        }

        /**
         * Clone method for the properties end markers
         * @param baseImpl the cloned object to set this object's property end markers
         */
        void CloneAttributeKeyToEndMarker(BaseImpl& baseImpl) const
        {
            baseImpl._attributeKeyToEndMarker = _attributeKeyToEndMarker;
        }

        /**
         * Clones the attributeKeyToParameterName property of this class into the cloned object.
         * @param baseImpl  the cloned object to copy this object's attributeKeyToParameterName into.
         */
        void CloneAttributeKeyToParameterNameMap(BaseImpl& baseImpl)
        {
            for (auto&& pair : _attributeKeyToParameterName)
            {
                auto parameterizedAttribute = pair.second;
                baseImpl._attributeKeyToParameterName.emplace(pair.first, std::make_shared<ParameterizedAttribute>(parameterizedAttribute->parameterName, parameterizedAttribute->textMarker));
            }
        }

        /**
         * Sets an attribute that is represented by a parameter instead of a real value.
         * @param attributeKey the key of this attribute.
         * @param parameterName the name of the parameter.
         * @param textMarker The text marker for this object.
         */
        void SetAttributeParameter(const std::string attributeKey, const std::string parameterName, Textmarker& textMarker)
        {
            _attributeKeyToParameterName.emplace(attributeKey, std::make_shared<ParameterizedAttribute>(parameterName, textMarker));
        }

        /**
         * Removes a parameter from a attribute.
         *
         * @param attributeKey the key of this attribute.
         */
        void RemoveAttributeParameter(const std::string attributeKey)
        {
            _attributeKeyToParameterName.erase(attributeKey);
        }

        /**
         * Adds the resolved attribute value to the list of resolved parameters.
         *
         * @param attributeKey attribute key of the property.
         */
        void AddResolvedParameter(std::string& attributeKey) 
        {
            _resolvedAttributes.push_back(attributeKey);
        }

        std::vector<std::string> GetResolvedAttributeKeys() override
        {
            return _resolvedAttributes;
        }

        /**
         * Gets the java class for a parameter type (for resolving the parameter).
         * @param typeName the model type name.
         * @return the corresponding cpp class or null if no type is found.
         */
        static SimpleType GetParameterType(std::string& typeName)
        {
            if (typeName == "string")
                return SimpleType::STRING;
            if (typeName == "unsignedInt")
                return SimpleType::UNSIGNED_INT;
            if (typeName == "integer")
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

        /**
         * Resolve a parameter internally
         * @param logger to log messages during the resolving process (e.g. format errors)
         * @param attributeKey the key of the property the value should be assigned to
         * @param value the string representation of the value that should be assigned to the property
         */
        virtual void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& value) {}

        /**
         * Constructor
         */
        BaseImpl(): _startMarker(0, 0, ""), _endMarker(0, 0, "")
        {
            _adapters.emplace(std::make_pair(typeid(ILocator).name(), std::make_shared<BaseImplIlocator>(_attributeKeyToStartMarker,
                                                                                                         _attributeKeyToEndMarker, _startMarker, _endMarker)));
        }

        std::shared_ptr<void> GetAdapter(const std::string classifier) override
        {
            return _adapters[classifier];
        }

        /**
         * Adds an adapter object to the instance
         * @param classifier The adapter class
         * @param object the adapter object
         */
        void AddAdapter(std::string classifier, std::shared_ptr<void> object)
        {
            _adapters.emplace(std::make_pair(classifier, object));
        }

        /**
         * Puts a start marker for a specific property
         * @param propertyKey the key of the property
         * @param startMarker the start marker
         */
        void PutPropertyStartMarker(std::string propertyKey, std::shared_ptr<Textmarker> startMarker)
        {
            _attributeKeyToStartMarker.emplace(std::make_pair(propertyKey, startMarker));
        }

        /**
         * Puts an end marker for a specific property
         * @param propertyKey the key of the property
         * @param endMarker the end marker
         */
        void PutPropertyEndMarker(std::string propertyKey, std::shared_ptr<Textmarker> endMarker)
        {
            _attributeKeyToEndMarker.emplace(std::make_pair(propertyKey, endMarker));
        }

        std::vector<std::shared_ptr<ParameterValue>> GetParameterDefinitions() override
        {
            return std::vector<std::shared_ptr<ParameterValue>>{};
        }

        bool HasParameterDefinitions() override
        {
            return false;
        }

        std::shared_ptr<Textmarker> GetTextmarker(std::string& attributeKey) override
        {
            const auto kIt = _attributeKeyToParameterName.find(attributeKey);
            if( kIt != _attributeKeyToParameterName.end() )
                return std::make_shared<Textmarker>(kIt->second->textMarker);
            return nullptr;
        }

        std::vector<std::string> GetParameterizedAttributeKeys() override
        {
            std::vector<std::string> keys;
            for( auto&& element : _attributeKeyToParameterName )
            {
                keys.push_back(element.first);
            }
            return keys;
        }

        std::string GetParameterNameFromAttribute(std::string& attributeKey) override
        {
            const auto kIt = _attributeKeyToParameterName.find(attributeKey);
            if( kIt != _attributeKeyToParameterName.end() )
                return kIt->second->parameterName;
            return "";
        }

        /**
         * Resolve a parameter. Checks the target class and calls resolveParameterInternal.
         * @param logger to log messages during the resolving process (e.g. format errors)
         * @param attributeKey the key of the property the value should be assigned to
         * @param value the string representation of the value that should be assigned to the property
         */
        void ResolveParameter(std::shared_ptr<IParserMessageLogger>& logger, std::string& attributeKey, std::string& value) override
        {
            // make sure it is a parameterized attribute
            const auto kTargetClass = GetTypeFromAttributeName(attributeKey);
            assert(kTargetClass != SimpleType::UNKNOWN);
            ResolveParameterInternal(*logger.get(), attributeKey, value);
        }

        /**
         * The start marker of the this object in a file.
         * @return start marker or null if not set
         */
        Textmarker GetStartMarker() const
        {
            return _startMarker;
        }

        /**
         * Assigns the start marker
         * @param startMarker the start marker
         */
        void SetStartMarker(Textmarker startMarker)
        {
            _startMarker = startMarker;
        }

        /**
         * The end marker of the this object in a file.
         * @return end marker or null if not set
         */
        Textmarker GetEndMarker() const
        {
            return _endMarker;
        }

        /**
         * Assigns the end marker
         * @param endMarker the end marker
         */
        void SetEndMarker(Textmarker endMarker)
        {
            _endMarker = endMarker;
        }

        /**
         * All child instances of this object as a flattened list. Must be implemented in subclasses.
         * @return a list with all child instances.
         */
        virtual  std::vector<std::shared_ptr<BaseImpl>> GetChildren()
        {
            return {};
        }

        /**
         * Indicating that all subclasses must implement the the Clonable interface.
         */
        virtual std::shared_ptr<BaseImpl> Clone()
        {
            return nullptr;
        }

        std::weak_ptr<IOpenScenarioModelElement> GetParent() override
        {
            return _parent;
        }

        /**
         * Setting the object's parent
         * @param parent the parent of the object in the model tree.
         */
        void SetParent(const std::weak_ptr<IOpenScenarioModelElement> parent)
        {
            _parent = parent;
        }
    };
}
