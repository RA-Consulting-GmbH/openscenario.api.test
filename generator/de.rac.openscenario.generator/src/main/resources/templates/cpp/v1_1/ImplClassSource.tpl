<%-
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
-%>
<%=JavaLicenseHelper.getApache2License()%>
 
#include "ApiClassImpl<%=fileSuffix%>.h"
#include "OscConstants<%=fileSuffix%>.h"
#include "FileContentMessage.h"
#include "IOpenScenarioModelElement.h"
#include "ErrorLevel.h"
#include "NamedReferenceProxy.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace <%=versionNamespace%>
    {
    <%- model.getClasses().each{ element->-%>

        IOpenScenarioFlexElement* <%=element.name.toClassName()%>Impl::GetOpenScenarioFlexElement()
        {
            return this;
        }
    <%- properties = element.umlProperties-%>
    <%-properties.each{ property ->-%>
        <%-if (property.upper== -1){-%>
        std::vector<<%=property.type.toCppName()%>> <%=element.name.toClassName()%>Impl::Get<%=property.name.toClassName()%>() const
        {
            std::vector<<%=property.type.toCppName()%>> temp;
            for(auto&& elm: _<%=property.name.toMemberName()%>)
                temp.push_back(elm);
            return temp;
        }
			<%- if (!property.isTransient()){-%>
        std::vector<<%=property.type.toCppWriterName()%>> <%=element.name.toClassName()%>Impl::GetWriter<%=property.name.toClassName()%>() const
        {
            return _<%=property.name.toMemberName()%>;
        }
			<%-} -%>

        int <%=element.name.toClassName()%>Impl::Get<%=property.name.toClassName()%>Size() const
        {
            return static_cast<int>(_<%=property.name.toMemberName()%>.size());
        }

        <%=property.type.toCppName()%> <%=element.name.toClassName()%>Impl::Get<%=property.name.toClassName()%>AtIndex(unsigned int index) const
        {
            if (index >= 0 && _<%=property.name.toMemberName()%>.size() > index)
            {
                return _<%=property.name.toMemberName()%>[index];
            }
            return <%=property.type.toCppDefaultValue()%>;
        }
        <%-}else if (property.isProxy()){-%>
        std::shared_ptr<INamedReference<I<%=property.type.name.toClassName()%>>> <%=element.name.toClassName()%>Impl::Get<%=property.name.toClassName()%>() const
        {
        	 return _<%=property.name.toMemberName()%>;
        }
        <%-}else{-%>
        <%=property.type.toCppName()%> <%=element.name.toClassName()%>Impl::Get<%=property.name.toClassName()%>() const
        {
        	  return _<%=property.name.toMemberName()%>;
        }
        <%-}-%>
    <%-}-%>

<%-properties.each{ property ->-%>

<%- if (property.isProxy() && !property.isList()){-%>
        void <%=element.name.toClassName()%>Impl::Set<%=property.name.toClassName()%>(std::shared_ptr<INamedReference<<%=property.type.toCppTemplateName()%>>> <%=property.name.toMemberName()%>)
<%}else if (property.isTransient() && property.isList()){-%>
        void <%=element.name.toClassName()%>Impl::Set<%=property.name.toClassName()%>(std::vector<<%=property.type.toCppName()%>>& <%=property.name.toMemberName()%>)
<%}else if (property.isTransient() && !property.isList()){-%>
        void <%=element.name.toClassName()%>Impl::Set<%=property.name.toClassName()%>(const <%=property.type.toCppName()%> <%=property.name.toMemberName()%>)
<%}else if (property.isXmlElementProperty() && !property.isList()){-%>
        void <%=element.name.toClassName()%>Impl::Set<%=property.name.toClassName()%>(<%=property.type.toCppWriterName()%> <%=property.name.toMemberName()%>)
<%}else if (property.isXmlElementProperty() && property.isList()){-%>
        void <%=element.name.toClassName()%>Impl::Set<%=property.name.toClassName()%>(std::vector<<%=property.type.toCppWriterName()%>>& <%=property.name.toMemberName()%>)
<%}else {-%>
        void <%=element.name.toClassName()%>Impl::Set<%=property.name.toClassName()%>(const <%=property.type.toCppName()%> <%=property.name.toMemberName()%>)
<%-}-%>
        {
<%- if (property.isXmlElementProperty() && property.isList()){-%>
            _<%=property.name.toMemberName()%> = <%=property.name.toMemberName()%>;
<%}else {-%>
            _<%=property.name.toMemberName()%> = <%=property.name.toMemberName()%>;
<%-}-%>
<%-if (property.isXorElement()){-%>
<%- element.getXmlElementProperties().each{ siblingProperty -> siblingProperty-%>
<%-if (siblingProperty.isXorElement()){-%> 
<%-if (siblingProperty != property){-%>
            _<%=siblingProperty.name.toMemberName()%> = {};
<%-}-%>
<%-}else{-%>
<%-throw new Error();-%>
<%-}-%>
<%-}}-%>
<%-if (property.isParameterizableProperty()){-%>
            //RemoveAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>);
<%-}-%>
<%-if (property.lower == 0) {-%>
			// set the indicator to true
            isSet<%=property.name.toClassName()%> = true;          
<%-}-%>
        }
<%-}-%>

        std::shared_ptr<void> <%=element.name.toClassName()%>Impl::GetAdapter(const std::string classifier)
        {
            if (classifier == typeid(<%=element.name.toClassName()%>Impl).name())
                return shared_from_this();
            else if (classifier == typeid(I<%=element.name.toClassName()%>).name())
                return std::dynamic_pointer_cast<I<%=element.name.toClassName()%>>(shared_from_this());
            else if (classifier == typeid(I<%=element.name.toClassName()%>Writer).name())
                return std::dynamic_pointer_cast<I<%=element.name.toClassName()%>Writer>(shared_from_this());
            return BaseImpl::GetAdapter(classifier);
        }

        std::weak_ptr<IOpenScenarioModelElement> <%=element.name.toClassName()%>Impl::GetParent() const
        {
            return BaseImpl::GetParent();
        }

        // Implement the IOpenScenarioFlexElement interface


        uint32_t <%=element.name.toClassName()%>Impl::GetUnsignedIntProperty(std::string key) const
        {
            <%addTypeCode(element,"UnsignedInt")%>
        }

        int <%=element.name.toClassName()%>Impl::GetIntProperty(std::string key) const
        {
            <%addTypeCode(element,"Int")%>
        }

        double <%=element.name.toClassName()%>Impl::GetDoubleProperty(std::string key) const
        {
            <%addTypeCode(element,"Double")%>
        }

        uint16_t <%=element.name.toClassName()%>Impl::GetUnsignedShortProperty(std::string key) const
        {
            <%addTypeCode(element,"UnsignedShort")%>
            }
 
            bool <%=element.name.toClassName()%>Impl::GetBooleanProperty(std::string key) const
        {
            <%addTypeCode(element,"Boolean")%>
        }

        DateTime <%=element.name.toClassName()%>Impl::GetDateTimeProperty(std::string key) const
        {
            <%addTypeCode(element,"DateTime")%>
        }

  <%-List listChildElements = element.getXmlElementProperties().findAll(){ it.isList() }-%>
  <%-if (!listChildElements.isEmpty()){-%>
  <%-}-%>
 
        std::weak_ptr<IOpenScenarioFlexElement> <%=element.name.toClassName()%>Impl::GetParentFlexElement() const
        {
            return std::dynamic_pointer_cast<IOpenScenarioFlexElement>(GetParent().lock());
        }


        std::string <%=element.name.toClassName()%>Impl::GetModelType() const
        {
            return "<%=element.name.toClassName()%>";
        }

<%properties = element.getParametrizableAttributes()-%>
<%-properties.each{ property ->-%>
        void <%=element.name.toClassName()%>Impl::WriteParameterTo<%=property.name.toClassName()%>(std::string& parameterName)
        {
            Textmarker nullTextMarker(-1, -1, "");
            SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>, parameterName, nullTextMarker /*no textmarker*/);
            _<%=property.name.toMemberName()%> = {};
        }

<%-}-%>
<%-properties.each{ property ->-%>
        std::string <%=element.name.toClassName()%>Impl::GetParameterFrom<%=property.name.toClassName()%>() const
        {
            auto <%=property.name.toMemberName()%> = OSC_CONSTANTS::ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>;
            return GetParameterNameFromAttribute(<%=property.name.toMemberName()%>);
        }

<%-}-%>
<%-properties.each{ property ->-%>
        bool <%=element.name.toClassName()%>Impl::Is<%=property.name.toClassName()%>Parameterized()
        {
            auto keys = GetParameterizedAttributeKeys();
            const auto kIt = std::find(keys.begin(), keys.end(), OSC_CONSTANTS::ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>);
            if (kIt != keys.end())
                return true;
            return false;
        }

<%-}-%>
            // children
<%-properties = element.getXmlElementProperties().findAll(){ !it.isList() }-%>
<%-properties.each{ property ->-%>
        <%=property.type.toCppWriterName()%> <%=element.name.toClassName()%>Impl::GetWriter<%=property.name.toClassName()%>() const
        {
            return std::dynamic_pointer_cast<<%=property.type.toCppTemplateName()%>Writer>(_<%=property.name.toMemberName()%>);
        }
<%-}-%>
    <%- properties = element.umlProperties-%>

        <%=element.name.toClassName()%>Impl::<%=element.name.toClassName()%>Impl()
        {
            /**
            * Filling the property to type map
            */
        <%-properties.each{ property ->-%>
            <%-if (property.isProxy()){-%>
            _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>, SimpleType::STRING);
            <%-} else if (property.type.isPrimitiveType()){-%>
            _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>, SimpleType::<%=property.type.name.toUpperNameFromMemberName()%>);
            <%-} else if (property.type.isEnumeration()){-%>
            _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>, SimpleType::ENUM_TYPE);
            <%-}-%>
        <%-}-%>
        }

        void <%=element.name.toClassName()%>Impl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
        {
        <%-element.getParametrizableAttributes().eachWithIndex { property, index ->-%>
            <%=index==0?"":"else "%>if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>)
            {
                <%-if (property.isProxy()){-%>
                // Proxy
                const auto kProxy = std::make_shared<NamedReferenceProxy<I<%=property.type.name.toClassName()%>>>(parameterLiteralValue);
                _<%=property.name.toMemberName()%> = std::dynamic_pointer_cast<INamedReference<I<%=property.type.name.toClassName()%>>>(kProxy);
                AddResolvedParameter(attributeKey);
                <%-} else if (property.type.isPrimitiveType()) {-%>
                // Simple type
                _<%=property.name.toMemberName()%> = ParserHelper::Parse<%=property.type.name.toClassName()%>(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
                AddResolvedParameter(attributeKey);
                <%-} else {-%>
                // Enumeration Type
                const auto kResult = <%=property.type.name.toClassName()%>::GetFromLiteral(parameterLiteralValue);
                if (kResult != <%=property.type.name.toClassName()%>::UNKNOWN)
                {
                    _<%=property.name.toMemberName()%> = kResult;
                    AddResolvedParameter(attributeKey);
                }
                else
                {
                    auto msg = FileContentMessage("Value '" + parameterLiteralValue + "' is not allowed.", ERROR, *GetTextmarker(attributeKey));
                    logger.LogMessage(msg );
                }
                <%-}-%>
            }
        <%-}-%>
        }

        SimpleType <%=element.name.toClassName()%>Impl::GetTypeFromAttributeName(std::string& attributeKey) const
        {
            const auto kIt = _propertyToType.find(attributeKey);
            if (kIt != _propertyToType.end())
                return kIt->second;
            return SimpleType::UNKNOWN;
        }

    <%-def parameterDeclaration = element.getParameterDefinitionProperty();-%>
    <%-if (parameterDeclaration){-%>

        bool <%=element.name.toClassName()%>Impl::HasParameterDefinitions() 
        {
            return true;
        }

        std::vector<std::shared_ptr<ParameterValue>> <%=element.name.toClassName()%>Impl::GetParameterDefinitions() const
        {
            std::vector<std::shared_ptr<ParameterValue>> result;
            if (!_<%=parameterDeclaration.name.toMemberName()%>.empty())
            {
                for (auto&& parameterDeclaration :_<%=parameterDeclaration.name.toMemberName()%>)
                {
                    auto parameterType = parameterDeclaration->GetParameterType().GetLiteral();
                    auto parameterValue = std::make_shared<ParameterValue>(parameterDeclaration->GetName(), GetParameterType(parameterType), parameterDeclaration->GetValue());
                    result.push_back(parameterValue);
                }
            }
            return result;
        }
    <%-}-%>

        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> <%=element.name.toClassName()%>Impl::GetChildren() const
        {
            std::vector<std::shared_ptr<BaseImpl>> result;

            <%-properties = element.getXmlElementProperties();-%>
            <%-properties.each{ property -> -%>
                <%- if (property.isList()){-%>
                auto <%=property.name.toMemberName()%> =  GetWriter<%=property.name.toClassName()%>();
                if (!<%=property.name.toMemberName()%>.empty())
                {
                    for(auto&& item : <%=property.name.toMemberName()%>)
                    {
                        result.push_back(std::dynamic_pointer_cast<BaseImpl>(item) );
                    }
                }
                <%-} else{-%>
                const auto k<%=property.name.toClassName()%> =  GetWriter<%=property.name.toClassName()%>();
                if (k<%=property.name.toClassName()%>)
                {
                    result.push_back(std::dynamic_pointer_cast<BaseImpl>(k<%=property.name.toClassName()%>));
                }
                <%-}-%>
                <%-}-%>
            return result;
        }

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        std::shared_ptr<BaseImpl> <%=element.name.toClassName()%>Impl::Clone()
        {
            auto clonedObject = std::make_shared<<%=element.name.toClassName()%>Impl>();
            CloneStartMarker(*clonedObject);
            CloneEndMarker(*clonedObject);
            CloneAttributeKeyToStartMarker(*clonedObject);
            CloneAttributeKeyToEndMarker(*clonedObject);
			CloneAttributeKeyToParameterNameMap(*clonedObject);
				
            // clone attributes;
            <%-properties = element.getXmlAttributeProperties();-%>
            <%-properties.each{ property -> -%>
            <%-if (property.isProxy()){-%>
            // Proxy
            auto proxy = std::make_shared<NamedReferenceProxy<I<%=property.type.name.toClassName()%>>>(*std::dynamic_pointer_cast<NamedReferenceProxy<I<%=property.type.name.toClassName()%>>>(Get<%=property.name.toClassName()%>()));
            proxy->SetParent(std::static_pointer_cast<IOpenScenarioModelElement>(clonedObject));
            clonedObject->_<%=property.name.toMemberName()%> = proxy;
            
            <%-} else if (property.type.isPrimitiveType()) {-%>
            // Simple type
            clonedObject->_<%=property.name.toMemberName()%> = Get<%=property.name.toClassName()%>();
            <%-} else {-%>
            // Enumeration Type
            const auto k<%=property.name.toClassName()%> = Get<%=property.name.toClassName()%>();
            if ( k<%=property.name.toClassName()%>.GetLiteral() != "UNKNOWN" )
            {
                clonedObject->_<%=property.name.toMemberName()%> = <%=property.type.name.toClassName()%>::GetFromLiteral(k<%=property.name.toClassName()%>.GetLiteral());
            }
            <%-}-%>
            <%-}-%>
            // clone indicators
            <%-properties.findAll(){property -> property.lower == 0}.each{ property ->-%>          
            	clonedObject->isSet<%=property.name.toClassName()%> = isSet<%=property.name.toClassName()%>;
            <%-}-%>
            // clone children
            <%-properties = element.getXmlElementProperties();-%>
            <%-properties.each{ property -> -%>
            <%- if (property.isList()){-%>
            const auto k<%=property.name.toClassName()%> =  GetWriter<%=property.name.toClassName()%>();
            if (!k<%=property.name.toClassName()%>.empty())
            {
                std::vector<std::shared_ptr<I<%=property.type.name.toClassName()%>Writer>> clonedList;
                for(auto&& kItem : k<%=property.name.toClassName()%>)
                {
                    auto clonedChild = std::dynamic_pointer_cast<<%=property.type.name.toClassName()%>Impl>(kItem)->Clone();
                    clonedChild->SetParent(std::static_pointer_cast<IOpenScenarioModelElement>(clonedObject));
                    clonedList.push_back(std::dynamic_pointer_cast<I<%=property.type.name.toClassName()%>Writer>(clonedChild));
                }
                clonedObject->Set<%=property.name.toClassName()%>(clonedList);
            }
            <%-} else{-%>
            const auto k<%=property.name.toClassName()%> =  GetWriter<%=property.name.toClassName()%>();
            if (k<%=property.name.toClassName()%>)
            {
                auto clonedChild = std::dynamic_pointer_cast<<%=property.type.name.toClassName()%>Impl>(k<%=property.name.toClassName()%>)->Clone();
                auto clonedChildI<%=property.type.name.toClassName()%> = std::dynamic_pointer_cast<I<%=property.type.name.toClassName()%>>(clonedChild);
                clonedChild->SetParent(std::static_pointer_cast<IOpenScenarioModelElement>(clonedObject));
                clonedObject->Set<%=property.name.toClassName()%>(std::dynamic_pointer_cast<I<%=property.type.name.toClassName()%>Writer>(clonedChildI<%=property.type.name.toClassName()%>));
            }
            <%-}-%>
            <%-}-%>
            return clonedObject;
        }

        std::string <%=element.name.toClassName()%>Impl::GetStringProperty(std::string key) const
        {
            // proxies and string attributes 
            <%- List proxiesAndStringAttributes = element.umlProperties.findAll(){ it.isProxy() || (it.type.isPrimitiveType() && it.type.name.toClassName().equals("String"))  }-%>
            <%-if (proxiesAndStringAttributes.isEmpty()){-%>
            throw KeyNotSupportedException();
            <%-} else {-%>
            if (key.empty())
            {
                throw KeyNotSupportedException();
            }
            <%-proxiesAndStringAttributes.eachWithIndex{ property, index ->-%>
            <%=index != 0?"else ":" "%>
            if (key == OSC_CONSTANTS::ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>)
            {
                <%-if(property.isProxy()){-%>
                // Get the Proxy
                auto <%=property.name.toMemberName()%> = Get<%=property.name.toClassName()%>();
                return <%=property.name.toMemberName()%>!= nullptr ? <%=property.name.toMemberName()%>->GetNameRef() : "";
                <%-}else{-%>
                return Get<%=property.name.toClassName()%>();
                <%-}-%>
            } 
            <%-}-%>
            throw KeyNotSupportedException();
            <%-}-%>
        }

        std::shared_ptr<IOpenScenarioFlexElement> <%=element.name.toClassName()%>Impl::GetChildElement(std::string key) const
        {
            <%-List childElements = element.getXmlElementProperties().findAll(){ !it.isList() }-%>
            <%-if (childElements.isEmpty()){-%>
            throw KeyNotSupportedException();
            <%-} else {-%>
            if (key.empty())
            {
                throw KeyNotSupportedException();
            }
            <%-childElements.eachWithIndex{ property, index ->-%>
            <%index!=0?"else ":" "%>
            if (key == OSC_CONSTANTS::ELEMENT__<%=property.name.toUpperNameFromMemberName()%>)
            {
                return std::dynamic_pointer_cast<IOpenScenarioFlexElement>(Get<%=property.name.toClassName()%>());
            }
            <%-}-%>
            throw  KeyNotSupportedException();
            <%-}-%>
        }

        std::vector<std::shared_ptr<IOpenScenarioFlexElement>> <%=element.name.toClassName()%>Impl::GetListChildElement(std::string key) const
        {
            <%-if (listChildElements.isEmpty()){-%>
            throw KeyNotSupportedException();
            <%-} else {-%>
            if (key.empty())
            {
                throw KeyNotSupportedException();
            }
            <%-listChildElements.eachWithIndex{ property, index ->-%>
            <%-if (!property.isWrappedList()){-%>
                <%index!=0?"else ":" "%>
            if (key == OSC_CONSTANTS::ELEMENT__<%=property.getXmlTagName().toMemberName().toUpperNameFromMemberName()%>)
            {
                std::vector<std::shared_ptr<IOpenScenarioFlexElement>> vect;
                for (auto&& elem : Get<%=property.name.toClassName()%>())
                    vect.push_back(std::dynamic_pointer_cast<IOpenScenarioFlexElement>(elem));
                return vect;
            <%-} else {-%>
            if (key == OSC_CONSTANTS::ELEMENT__<%=property.getXsdWrapperElementName().toMemberName().toUpperNameFromMemberName()%>)
            {
                std::vector<std::shared_ptr<IOpenScenarioFlexElement>> vect;
                for (auto&& elem : Get<%=property.name.toClassName()%>())
                    vect.push_back(std::dynamic_pointer_cast<IOpenScenarioFlexElement>(elem));
                return vect;
            <%-}%>
            }<%-}-%>

            throw KeyNotSupportedException();
            <%-}-%>
        }

        std::shared_ptr<IOpenScenarioFlexElement> <%=element.name.toClassName()%>Impl::GetReferencedElement(std::string key, std::string name) const
        {
            <%- List proxies = element.umlProperties.findAll(){ it.isProxy() }-%>
            <%-if (proxies.isEmpty()){-%>
            throw KeyNotSupportedException();
            <%-} else {-%>
            if (key.empty())
            {
                throw KeyNotSupportedException();
            }
            <%-proxies.eachWithIndex{ property, index ->-%>
            <%index!=0?"else ":" "%>
            if (key == OSC_CONSTANTS::ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>)
            {
                // Get the Proxy
                auto <%=property.name.toMemberName()%> = Get<%=property.name.toClassName()%>();
                return <%=property.name.toMemberName()%> != nullptr ? std::dynamic_pointer_cast<IOpenScenarioFlexElement>(<%=property.name.toMemberName()%>->GetTargetObject()) : nullptr;
            }<%-}-%>

            throw KeyNotSupportedException();
            <%-}-%>
        }

        std::string <%=element.name.toClassName()%>Impl::GetEnumerationLiteral(std::string key) const
        {
            <%- List enumerationProperties = element.umlProperties.findAll(){ it.type.isEnumeration()}-%>
            <%-if (enumerationProperties.isEmpty()){-%>
            throw KeyNotSupportedException();
            <%-} else {-%>
            if (key.empty())
            {
                throw KeyNotSupportedException();
            }
            <%-enumerationProperties.eachWithIndex{ property, index ->-%>
            <%=index!= 0?"else ":" "%>
            if (key == OSC_CONSTANTS::ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>)
            {
                auto <%=property.name.toMemberName()%> = Get<%=property.name.toClassName()%>();
                return <%=property.name.toMemberName()%>.GetLiteral() != "UNKNOWN" ? <%=property.name.toMemberName()%>.GetLiteral() : "";
            }<%-}-%>

            throw KeyNotSupportedException();
            <%-}-%>
        }
<%-addResolveFunction(element, "unsignedInt", "unsigned int")-%>
<%-addResolveFunction(element, "unsignedShort", "unsigned short")-%>
<%-addResolveFunction(element, "boolean", "bool")-%>
<%-addResolveFunction(element, "string", "std::string")-%>
<%-addResolveFunction(element, "double", "double")-%>
<%-addResolveFunction(element, "int", "int")-%>
<%-addResolveFunction(element, "dateTime", "DateTime")-%>

<%-if (helper.hasStringTypedValue(element)){-%>
		bool <%=element.name.toClassName()%>Impl::IsTypedStringAttribute(std::string& attributeKey)
		{
			return (attributeKey == OSC_CONSTANTS::ATTRIBUTE__VALUE);
		}
<%-}-%>	

<%-properties = element.umlProperties-%>
<%-properties.each{ property ->-%>
<%-if (property.lower == 0) {-%>
       void <%=element.name.toClassName()%>Impl::Reset<%=property.name.toClassName()%>()
	   {
	   		isSet<%=property.name.toClassName()%> = false; 
	   		<%- if (property.isProxy() && !property.isList()){-%>
        	_<%=property.name.toMemberName()%> = nullptr;
			<%-}else{-%>
			_<%=property.name.toMemberName()%> = {<%=defaultValueHelper.getDefaultValue(element.name.toClassName(),property.name.toMemberName())%>};
			<%-}-%>
			
	   }
       bool <%=element.name.toClassName()%>Impl::IsSet<%=property.name.toClassName()%>() const
	   {
			return isSet<%=property.name.toClassName()%>;
	   }
<%-}}-%>
<%-}-%>
    }
}

<%-def addTypeCode(element, String primitiveTypeName){-%>
<%- List properties = element.umlProperties.findAll(){ it.type.isPrimitiveType() && it.type.name.toClassName().equals(primitiveTypeName) }-%>
    <%-if (properties.isEmpty()){-%>
throw KeyNotSupportedException();
    <%-} else {-%>
if (key.empty())
                {
                    throw KeyNotSupportedException();
                }
    <%-properties.eachWithIndex{ property, index ->-%>
    <%=index != 0?"else ":" "%>
                if (key == OSC_CONSTANTS::ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>)
                {
                    return Get<%=property.name.toClassName()%>();
                }<%-}-%>

                throw KeyNotSupportedException();
 <%-}-%>
 <%-}-%>
 
 <%-def addResolveFunction(element, primitiveType, cTypeString){-%>
 <%- def attributes = element.getParametrizableAttributes().findAll(){property -> property.type.name == primitiveType};-%>
 <%- if(!attributes.isEmpty()){-%>
		void <%=element.name.toClassName()%>Impl::Resolve<%=primitiveType.toClassName()%>Expression(std::string& attributeKey, <%=cTypeString%>& value)
		{
		 <%-attributes.eachWithIndex { property, index ->-%>
            <%=index==0?"":"else "%>if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>)
            {
                // Simple type
                _<%=property.name.toMemberName()%> = value;
                AddResolvedParameter(attributeKey);
            }
        <%-}-%>
		
		}
<%-}-%>	
<%-}-%>		