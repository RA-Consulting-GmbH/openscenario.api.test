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
#include "IExpressionObject.h"
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
    class BaseImpl :  public IExpressionObject, public virtual IOpenScenarioModelElement, public virtual IOpenScenarioFlexElement
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

			ParameterizedAttribute(const std::string parameterName, Textmarker& textMarker);
        };

        class BaseImplIlocator : public ILocator
        {
            std::map<std::string, std::shared_ptr<Textmarker>>& _attributeKeyToStartMarker;
			std::map<std::string, std::shared_ptr<Textmarker>>& _attributeKeyToEndMarker;
			std::map<std::string, std::shared_ptr<Textmarker>>& _attributeKeyToStartValueMarker;
			Textmarker& _startMarker;
            Textmarker& _endMarker;

        public:
			BaseImplIlocator(std::map<std::string, std::shared_ptr<Textmarker>>& attributeKeyToStartMarker, std::map<std::string, std::shared_ptr<Textmarker>>& attributeKeyToEndMarker, std::map<std::string, std::shared_ptr<Textmarker>>& attributeKeyToStartValueMarker,
				Textmarker& startMarker, Textmarker& endMarker);

			virtual Textmarker GetStartMarkerOfProperty(const std::string& propertyKey) override;

			virtual Textmarker GetValueStartMarkerOfProperty(const std::string &propertyKey) override;

			virtual Textmarker GetStartMarker() override;

			virtual Textmarker GetEndMarkerOfProperty(const std::string& propertyKey) override;

			virtual Textmarker GetEndMarker() override;
        };

		std::map<std::string, std::shared_ptr<ParameterizedAttribute>> _attributeKeyToParameterName{};
		
		std::vector<std::string> _resolvedAttributes{};
        std::map<std::string, std::shared_ptr<Textmarker>> _attributeKeyToStartMarker{};
		std::map<std::string, std::shared_ptr<Textmarker>> _attributeKeyToEndMarker{};
		std::map<std::string, std::shared_ptr<Textmarker>> _attributeKeyToStartValueMarker{};
		std::map<std::string, std::shared_ptr<void>> _adapters{};
        Textmarker _startMarker;
        Textmarker _endMarker;
        std::weak_ptr<IOpenScenarioModelElement> _parent;

    protected:
        std::map<std::string, SimpleType> _propertyToType;

    public:
        virtual ~BaseImpl();

        /**
         * A clone method for the start marker
         * @param baseImpl the cloned object to set this object's start marker
         */
		void CloneStartMarker(BaseImpl& baseImpl) const;

        /**
         * Clone method for the end marker
         * @param baseImpl the cloned object to set this object's end marker
         */
		void CloneEndMarker(BaseImpl& baseImpl) const;

        /**
         * Clone method for the properties start markers
         * @param baseImpl the cloned object to set this object's property start markers
         */
		void CloneAttributeKeyToStartMarker(BaseImpl& baseImpl) const;

        /**
         * Clone method for the properties end markers
         * @param baseImpl the cloned object to set this object's property end markers
         */
		void CloneAttributeKeyToEndMarker(BaseImpl& baseImpl) const;

		/**
		 * Clones the attributeKeyToParameterName property of this class into the cloned object.
		 * @param baseImpl  the cloned object to copy this object's attributeKeyToParameterName into.
		 */
		void CloneAttributeKeyToParameterNameMap(BaseImpl& baseImpl);
    	
		/**
		* Clones the attributeKeyToExpression property of this class into the cloned object.
		* @param baseImpl  the cloned object to copy this object's attributeKeyToExpression into.
		*/
		void CloneAttributeKeyToExpressionMap(BaseImpl& baseImpl);

        /**
         * Sets an attribute that is represented by a parameter instead of a real value.
         * @param attributeKey the key of this attribute.
         * @param parameterName the name of the parameter.
         * @param textMarker The text marker for this object.
         */
		void SetAttributeParameter(const std::string attributeKey, const std::string parameterName, Textmarker& textMarker);

        /**
         * Removes a parameter from an attribute.
         *
         * @param attributeKey the key of this attribute.
         */
		void RemoveAttributeParameter(const std::string attributeKey);

		/**
		 * Sets an attribute that is represented by an expression instead of a real value.
		 * @param attributeKey the key of this attribute.
		 * @param expression the expression.
		 * @param textMarker The text marker for this object.
		 */
		void SetAttributeExpression(const std::string attributeKey, const std::string expression, Textmarker& textMarker);

		/**
		 * Removes a expression from an attribute.
		 *
		 * @param attributeKey the key of this attribute.
		 */
		void RemoveAttributeExpression(const std::string attributeKey);

        /**
         * Adds the resolved attribute value to the list of resolved parameters.
         *
         * @param attributeKey attribute key of the property.
         */
		void AddResolvedParameter(std::string& attributeKey);

		std::vector<std::string> GetResolvedAttributeKeys() const override;

        /**
         * Gets the java class for a parameter type (for resolving the parameter).
         * @param typeName the model type name.
         * @return the corresponding cpp class or null if no type is found.
         */
		static SimpleType GetParameterType(std::string& typeName);
        /**
         * Resolve a parameter internally
         * @param logger to log messages during the resolving process (e.g. format errors)
         * @param attributeKey the key of the property the value should be assigned to
         * @param value the string representation of the value that should be assigned to the property
         */
		virtual void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& value);

		/**
		 * Resolve a expression internally
		 * @param logger to log messages during the resolving process (e.g. format errors)
		 * @param attributeKey the key of the property the expression should be assigned to
		 * @param expression the string representation of the expression that should be assigned to the property
		 */
		virtual void ResolveExpressionInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& expression, std::shared_ptr<std::map<std::string, std::shared_ptr<OscExpression::ExprValue>>> definedParameters);

        /**
         * Constructor
         */
		BaseImpl();

		std::shared_ptr<void> GetAdapter(const std::string classifier) override;

        /**
         * Adds an adapter object to the instance
         * @param classifier The adapter class
         * @param object the adapter object
         */
		void AddAdapter(std::string classifier, std::shared_ptr<void> object);

        /**
         * Puts a start marker for a specific property
         * @param propertyKey the key of the property
         * @param startMarker the start marker
         */
		void PutPropertyStartMarker(std::string propertyKey, std::shared_ptr<Textmarker> startMarker);

		/**
		 * Puts an end marker for a specific property
		 * @param propertyKey the key of the property
		 * @param endMarker the end marker
		 */
		void PutPropertyEndMarker(std::string propertyKey, std::shared_ptr<Textmarker> endMarker);
		/**
		  * Puts an startValue marker for a specific property
		  * @param propertyKey the key of the property
		  * @param startValueMarker the start value marker
		  */
		void PutPropertyStartValueMarker(std::string propertyKey, std::shared_ptr<Textmarker> startValueMarker);

		std::vector<std::shared_ptr<ParameterValue>> GetParameterDefinitions() const override;

		bool HasParameterDefinitions() override;

		std::shared_ptr<Textmarker> GetTextmarker(std::string& attributeKey) const override;

		std::vector<std::string> GetParameterizedAttributeKeys() const override;

		std::string GetParameterNameFromAttribute(std::string& attributeKey) const  override;

        /**
         * Resolve a parameter. Checks the target class and calls resolveParameterInternal.
         * @param logger to log messages during the resolving process (e.g. format errors)
         * @param attributeKey the key of the property the value should be assigned to
         * @param value the string representation of the value that should be assigned to the property
         */
		void ResolveParameter(std::shared_ptr<IParserMessageLogger>& logger, std::string& attributeKey, std::string& value) override;


        /**
         * The start marker of the this object in a file.
         * @return start marker or null if not set
         */
		Textmarker GetStartMarker();

        /**
         * Assigns the start marker
         * @param startMarker the start marker
         */
		void SetStartMarker(Textmarker startMarker);

        /**
         * The end marker of the this object in a file.
         * @return end marker or null if not set
         */
		Textmarker GetEndMarker() const;

        /**
         * Assigns the end marker
         * @param endMarker the end marker
         */
		void SetEndMarker(Textmarker endMarker);

        /**
         * All child instances of this object as a flattened list. Must be implemented in subclasses.
         * @return a list with all child instances.
         */
		virtual  std::vector<std::shared_ptr<BaseImpl>> GetChildren() const;

        /**
         * Indicating that all subclasses must implement the the Clonable interface.
         */
		virtual std::shared_ptr<BaseImpl> Clone();

		std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

        /**
         * Setting the object's parent
         * @param parent the parent of the object in the model tree.
         */
		void SetParent(const std::weak_ptr<IOpenScenarioModelElement> parent);

		virtual void ResolveUnsignedIntExpression(std::string& attributeKey, unsigned int& value) override;

		virtual void ResolveIntExpression(std::string& attributeKey, int& value) override;

		virtual void ResolveBooleanExpression(std::string& attributeKey, bool& value) override;

		virtual void ResolveDoubleExpression(std::string& attributeKey, double& value) override;

		virtual void ResolveStringExpression(std::string& attributeKey, std::string& value) override;

		virtual void ResolveUnsignedShortExpression(std::string& attributeKey, unsigned short& value) override;
    	
		virtual void ResolveDateTimeExpression(std::string& attributeKey, DateTime& value) override;


    };
}
