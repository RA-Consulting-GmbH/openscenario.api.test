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
package <%=implPackageName%>;

import <%=packageName%>.I<%=element.name.toClassName()%>;
import <%=packageName%>.writer.I<%=element.name.toClassName()%>Writer;
import net.asam.openscenario.impl.BaseImpl;
import net.asam.openscenario.common.ILocator;
import net.asam.openscenario.common.IParserMessageLogger;
import net.asam.openscenario.v1_0.common.OscConstants;
import net.asam.openscenario.api.SimpleType;
import net.asam.openscenario.common.FileContentMessage;
import net.asam.openscenario.api.IOpenScenarioModelElement;
import net.asam.openscenario.api.IOpenScenarioFlexElement;
import net.asam.openscenario.api.KeyNotSupportedException;
import java.util.Date;
import java.lang.Cloneable;
<%-if (element.getParametrizableAttributes().findAll{property-> property.type.isPrimitiveType() || property.type.isEnumeration()}){-%>
import net.asam.openscenario.parser.ParserHelper;
<%-}-%>
import java.util.Hashtable;
import java.util.List;
import java.util.ArrayList;
import java.util.Iterator;
import java.lang.Iterable;
<%- if (element.hasEnumAttributes()){-%>
import net.asam.openscenario.common.ErrorLevel;
<%-}-%>
<%-if (element.getParameterDefinitionProperty()){-%>
import net.asam.openscenario.parameter.ParameterValue;
<%-}-%>
<%- if (element.hasProxies()){-%>
import net.asam.openscenario.impl.NamedReferenceProxy;
<%-}-%>
<%if (element.hasProxies()){%>import net.asam.openscenario.common.INamedReference;<%}%>
<%helper.getTypeImport(element,packageName).each{importedType->%>import <%=importedType%><%}%>

<%= helper.makeClassJavaDoc(element, oscVersion)%>
public class <%=element.name.toClassName()%>Impl extends BaseImpl implements I<%=element.name.toClassName()%>Writer{
	protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();
	
<%- List properties = element.getParametrizableAttributes();-%>
<%- if (!properties.isEmpty()){-%>
	/**
	 * Filling the property to type map
	 */
	 static{
<%-properties.each{ property ->-%>
	<%-if (property.isProxy()){-%>
		propertyToType.put(OscConstants.ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>, SimpleType.STRING);
	<%-} else if (property.type.isPrimitiveType()){-%>
		propertyToType.put(OscConstants.ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>, SimpleType.<%=property.type.name.toUpperNameFromMemberName()%>);
	<%-} else if (property.type.isEnumeration()){-%>
		propertyToType.put(OscConstants.ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>, SimpleType.ENUM_TYPE);
	<%-}-%>
<%-}-%>
	}
<%-}-%>
<%- properties = element.umlProperties;-%>
<%-properties.each{ property ->-%>
<%- if (property.isProxy() && !property.isList()){-%>
	private INamedReference<<%=property.type.toJavaName()%>> <%=property.name.toMemberName()%>;
<%}else if (property.isTransient() && property.isList()){-%>
    private List<<%=property.type.toJavaName()%>> <%=property.name.toMemberName()%> = new ArrayList<>();
<%}else if (property.isTransient() && !property.isList()){-%>
    private <%=property.type.toJavaName()%> <%=property.name.toMemberName()%>;
<%}else if (property.isXmlElementProperty() && !property.isList()){-%>
	private <%=property.type.toJavaName()%>Writer <%=property.name.toMemberName()%>;
<%}else if (property.isXmlElementProperty() && property.isList()){-%>
	private List<<%=property.type.toJavaName()%>Writer> <%=property.name.toMemberName()%>  = new ArrayList<>();
<%}else {-%>
	private <%=property.type.toJavaName()%> <%=property.name.toMemberName()%>;
<%-}}-%>

	/**
	 * Default constructor
	 */
	public <%=element.name.toClassName()%>Impl()
	{
		super();
		addAdapter(<%=element.name.toClassName()%>Impl.class, this);
		addAdapter(I<%=element.name.toClassName()%>.class, this);
		addAdapter(I<%=element.name.toClassName()%>Writer.class, this);
		
	}
	
	@Override
	public IOpenScenarioFlexElement getOpenScenarioFlexElement()
	{
		return this;
	}
<%- properties = element.umlProperties;-%>
<%-properties.each{ property ->-%>
	<%-if (property.upper== -1){-%>
	<%- if (!property.isTransient()){-%>
	@Override
	public List<<%=property.type.toJavaName()%>Writer> getWriter<%=property.name.toClassName()%>()
	{
		return this.<%=property.name.toMemberName()%>;
	}
	<%-} -%>
	@Override
	public Iterable<<%=property.type.toJavaName()%>> get<%=property.name.toClassName()%>()
	{
	  return new Iterable<<%=property.type.toJavaName()%>>() {

		  @SuppressWarnings("synthetic-access")
	      @Override
	      public Iterator<<%=property.type.toJavaName()%>> iterator()
	      {
	        return new ArrayList<<%=!property.isTransient()?property.type.toJavaName():""%>>(<%=element.name.toClassName()%>Impl.this.<%=property.name.toMemberName()%>).iterator();
	      
	      }
      };
	}
	
	@Override
	public int get<%=property.name.toClassName()%>Size()
	{
		if (this.<%=property.name.toMemberName()%> != null)
			return this.<%=property.name.toMemberName()%>.size();
		return 0;
	}
	
	@Override
	public <%=property.type.toJavaName()%> get<%=property.name.toClassName()%>AtIndex(int index)
	{	if (index >= 0 && this.<%=property.name.toMemberName()%> != null && this.<%=property.name.toMemberName()%>.size() > index){
			return this.<%=property.name.toMemberName()%>.get(index);
		}
		return null;
	}
	
	<%-}else if (property.isProxy()){-%>
	@Override
	public INamedReference<<%=property.type.toJavaName()%>> get<%=property.name.toClassName()%>()
	{
		return this.<%=property.name.toMemberName()%>;
	}
	<%-}else{-%>
	@Override
	public <%=property.type.toJavaName()%> get<%=property.name.toClassName()%>()
	{
		return this.<%=property.name.toMemberName()%>;
	}
	<%-}-%>
<%-}-%>

<%-properties.each{ property ->-%>
@Override
<%- if (property.isProxy() && !property.isList()){-%>
	public void set<%=property.name.toClassName()%>(INamedReference<<%=property.type.toJavaName()%>> <%=property.name.toMemberName()%>)
<%}else if (property.isTransient() && property.isList()){-%>
    public void set<%=property.name.toClassName()%>(List<<%=property.type.toJavaName()%>> <%=property.name.toMemberName()%>)
<%}else if (property.isTransient() && !property.isList()){-%>
    public void set<%=property.name.toClassName()%>(<%=property.type.toJavaName()%> <%=property.name.toMemberName()%>)
<%}else if (property.isXmlElementProperty() && !property.isList()){-%>
	public void set<%=property.name.toClassName()%>(<%=property.type.toJavaName()%>Writer <%=property.name.toMemberName()%>)
<%}else if (property.isXmlElementProperty() && property.isList()){-%>
	public void set<%=property.name.toClassName()%>(List<<%=property.type.toJavaName()%>Writer> <%=property.name.toMemberName()%>)
<%}else {-%>
	public void set<%=property.name.toClassName()%>(<%=property.type.toJavaName()%> <%=property.name.toMemberName()%>)
<%-}-%>
	{
		this.<%=property.name.toMemberName()%> = <%=property.name.toMemberName()%>;
		<%-if (property.isXorElement()){-%>
			<%- element.getXmlElementProperties().each{ siblingProperty -> siblingProperty-%>
				<%-if (siblingProperty.isXorElement()){-%> 
					<%-if (siblingProperty != property){-%>
				this.<%=siblingProperty.name.toMemberName()%> = <%=siblingProperty.isList()?"new ArrayList<>()":"null"%>;
					<%-}-%>
				<%-}else{-%>
				<%-throw new Error();-%>
				<%-}-%>
		<%-}}-%>
		<%-if (property.isParameterizableProperty()){-%>
			//removeAttributeParameter(OscConstants.ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>);
		<%-}-%>
	}
<%-}-%>

	@Override
	public  void resolveParameterInternal(IParserMessageLogger logger,String attributeKey, String parameterLiteralValue)
	{
		<%- properties = element.getParametrizableAttributes();-%>
		<%- if (!properties){-%>
		// Empty
		<%-}-%>
		<%-properties.eachWithIndex { property, index ->-%>
		<%=index==0?"":"else "%>if (attributeKey.equals(OscConstants.ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>))
		{
			<%-if (property.isProxy()){-%>
			// Proxy
			NamedReferenceProxy<I<%=property.type.name.toClassName()%>> proxy = new NamedReferenceProxy<> (parameterLiteralValue);
			this.<%=property.name.toMemberName()%> = proxy;
			addResolvedParameter(attributeKey);
			<%-} else if (property.type.isPrimitiveType()) {-%>
			// Simple type
			this.<%=property.name.toMemberName()%> = ParserHelper.parse<%=property.type.name.toClassName()%>(logger,parameterLiteralValue,getTextmarker(attributeKey));
			addResolvedParameter(attributeKey);
			<%-} else {-%>
			// Enumeration Type
			<%=property.type.name.toClassName()%> result = <%=property.type.name.toClassName()%>.getFromLiteral(parameterLiteralValue);
			if (result != null)
			{
				this.<%=property.name.toMemberName()%> = result;
				addResolvedParameter(attributeKey);
			}else
			{
				logger.logMessage(new FileContentMessage( "Value '" + parameterLiteralValue + "' is not allowed.",ErrorLevel.ERROR, getTextmarker(attributeKey)));
			}
			<%-}-%>
				
	 	}
	 	<%-}-%>
	}
	
	@Override
	public SimpleType getTypeFromAttributeName(String attributeKey)
	{
		return propertyToType.get(attributeKey);
	}
<%-def parameterDeclaration = element.getParameterDefinitionProperty();-%>
<%-if (parameterDeclaration){-%>

	@Override
	public boolean hasParameterDefinitions() {
		return true;
	}
	
	@Override
	public List<ParameterValue> getParameterDefinitions() {
		List<ParameterValue> result = new java.util.ArrayList<>();
		if (this.<%=parameterDeclaration.name.toMemberName()%> != null)
		{
			for (IParameterDeclaration parameterDeclaration :this.<%=parameterDeclaration.name.toMemberName()%>)
			{
				ParameterValue parameterValue = new ParameterValue(parameterDeclaration.getName(), getParameterType(parameterDeclaration.getParameterType().getLiteral()),parameterDeclaration.getValue());
				result.add(parameterValue);
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
	@Override
	public List<BaseImpl> getChildren()
	{
		List<BaseImpl> result = new ArrayList<>();
		
		<%-properties = element.getXmlElementProperties();-%>
		<%-properties.each{ property -> -%>
			<%- if (property.isList()){-%>
			List<I<%=property.type.name.toClassName()%>Writer> <%=property.name.toMemberName()%> = null;
			<%=property.name.toMemberName()%> =  getWriter<%=property.name.toClassName()%>();
			if (<%=property.name.toMemberName()%> != null)
			{
				for(I<%=property.type.name.toClassName()%>Writer item : <%=property.name.toMemberName()%>)
				{
					result.add((BaseImpl) item);
				}
			}
			<%-} else{-%>
			I<%=property.type.name.toClassName()%>Writer <%=property.name.toMemberName()%> = null;
			<%=property.name.toMemberName()%> =  getWriter<%=property.name.toClassName()%>();
			if (<%=property.name.toMemberName()%> != null)
			{
				result.add((BaseImpl) <%=property.name.toMemberName()%>);
			}	
			<%-}-%>
		<%-}-%>
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	@Override
	public <%=element.name.toClassName()%>Impl clone()
	{
		<%=element.name.toClassName()%>Impl clonedObject = new <%=element.name.toClassName()%>Impl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
	<%-properties = element.getXmlAttributeProperties();-%>
	<%-properties.each{ property -> -%>
	<%-if (property.isProxy()){-%>
		// Proxy
		NamedReferenceProxy<I<%=property.type.name.toClassName()%>> proxy = ((NamedReferenceProxy<I<%=property.type.name.toClassName()%>>)get<%=property.name.toClassName()%>()).clone();
		clonedObject.<%=property.name.toMemberName()%> = proxy;
		proxy.setParent(clonedObject);
	<%-} else if (property.type.isPrimitiveType()) {-%>
		// Simple type
		clonedObject.<%=property.name.toMemberName()%> = get<%=property.name.toClassName()%>();		
	<%-} else {-%>
		// Enumeration Type
		<%=property.type.name.toClassName()%> <%=property.name.toMemberName()%> = get<%=property.name.toClassName()%>();
		if (<%=property.name.toMemberName()%> != null)
		{
			clonedObject.<%=property.name.toMemberName()%>= <%=property.type.name.toClassName()%>.getFromLiteral(<%=property.name.toMemberName()%>.getLiteral());
		}
	<%-}-%>
	<%-}-%>
		// clone children
	<%-properties = element.getXmlElementProperties();-%>
	<%-properties.each{ property -> -%>
	<%- if (property.isList()){-%>
		List<I<%=property.type.name.toClassName()%>Writer> <%=property.name.toMemberName()%> = null;
			<%=property.name.toMemberName()%> =  getWriter<%=property.name.toClassName()%>();
		if (<%=property.name.toMemberName()%> != null)
		{
			List<I<%=property.type.name.toClassName()%>Writer> clonedList = new ArrayList<>();
			for(I<%=property.type.name.toClassName()%>Writer item : <%=property.name.toMemberName()%>)
			{
				I<%=property.type.name.toClassName()%>Writer clonedChild = ((<%=property.type.name.toClassName()%>Impl) item).clone();
				clonedList.add(clonedChild);
				clonedChild.setParent(clonedObject);
			}
			clonedObject.set<%=property.name.toClassName()%>(clonedList);
		}
	<%-} else{-%>
		I<%=property.type.name.toClassName()%>Writer <%=property.name.toMemberName()%> = null;
		<%=property.name.toMemberName()%> =  getWriter<%=property.name.toClassName()%>();
		if (<%=property.name.toMemberName()%> != null)
		{
			I<%=property.type.name.toClassName()%>Writer clonedChild = ((<%=property.type.name.toClassName()%>Impl) <%=property.name.toMemberName()%>).clone();
			clonedObject.set<%=property.name.toClassName()%>(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
			<%-}-%>
	<%-}-%>
		return clonedObject;
	}
  
  // Implement the IOpenScenarioFlexElement interface

  @Override
  public String getStringProperty(String key) throws KeyNotSupportedException
  {
	// proxies and string attributes 
  <%- List proxiesAndStringAttributes = element.umlProperties.findAll(){ it.isProxy() || (it.type.isPrimitiveType() && it.type.name.toClassName().equals("String"))  }-%>
	<%-if (proxiesAndStringAttributes.isEmpty()){-%>
	throw new KeyNotSupportedException();
	<%-} else {-%>
	if (key == null)
	{
		throw new KeyNotSupportedException();
	}
		<%-proxiesAndStringAttributes.eachWithIndex{ property, index ->-%>
	<%=index != 0?"else ":" "%>if (key.equals(OscConstants.ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>))
	{
		<%-if(property.isProxy()){-%>
		// Get the Proxy
		INamedReference<<%=property.type.toJavaName()%>> <%=property.name.toMemberName()%> = get<%=property.name.toClassName()%>();
		return <%=property.name.toMemberName()%>!= null? <%=property.name.toMemberName()%>.getNameRef():null;
		<%-}else{-%>
		return get<%=property.name.toClassName()%>();		
		<%-}-%>
	} <%-}-%>
	throw new KeyNotSupportedException();
	<%-}-%>  		
  }
  
  @Override
  public Long getUnsignedIntProperty(String key) throws KeyNotSupportedException
  {
<%addTypeCode(element,"UnsignedInt")%>  		
  }  
  
  @Override
  public Integer getIntProperty(String key) throws KeyNotSupportedException
  {
<%addTypeCode(element,"Int")%>  		
  }
 
  @Override
  public Double getDoubleProperty(String key) throws KeyNotSupportedException
  {
<%addTypeCode(element,"Double")%>  		
  }
  
  @Override
  public Integer getUnsignedShortProperty(String key) throws KeyNotSupportedException
  {
<%addTypeCode(element,"UnsignedShort")%>  	
  }
 
  @Override
  public Boolean getBooleanProperty(String key) throws KeyNotSupportedException
  {
<%addTypeCode(element,"Boolean")%>  	
  }
   
  @Override
  public Date getDateTimeProperty(String key) throws KeyNotSupportedException
  {
 <%addTypeCode(element,"DateTime")%>
  }
 
  @Override
  public IOpenScenarioFlexElement getChildElement(String key) throws KeyNotSupportedException
  {
  	<%-List childElements = element.getXmlElementProperties().findAll(){ !it.isList() }-%>
	<%-if (childElements.isEmpty()){-%>
	throw new KeyNotSupportedException();
	<%-} else {-%>
	if (key == null)
	{
		throw new KeyNotSupportedException();
	}
		<%-childElements.eachWithIndex{ property, index ->-%>
	<%index!=0?"else ":" "%>if (key.equals(OscConstants.ELEMENT__<%=property.name.toUpperNameFromMemberName()%>))
	{
		return (IOpenScenarioFlexElement) get<%=property.name.toClassName()%>();
	}<%-}-%>
	throw new KeyNotSupportedException();
	
	<%-}-%>
  }
 
  <%-List listChildElements = element.getXmlElementProperties().findAll(){ it.isList() }-%>
  <%-if (!listChildElements.isEmpty()){-%>
  @SuppressWarnings("unchecked")
  <%-}-%>
  @Override
  public List<IOpenScenarioFlexElement> getListChildElement(String key) throws KeyNotSupportedException
  {
  	
	<%-if (listChildElements.isEmpty()){-%>
	throw new KeyNotSupportedException();
	<%-} else {-%>
	if (key == null)
	{
		throw new KeyNotSupportedException();
	}
		<%-listChildElements.eachWithIndex{ property, index ->-%>
	<%-if (!property.isWrappedList()){-%>
	<%index!=0?"else ":" "%>if (key.equals(OscConstants.ELEMENT__<%=property.getXmlTagName().toMemberName().toUpperNameFromMemberName()%>))
	{
		return (List<IOpenScenarioFlexElement>)(List<?>) get<%=property.name.toClassName()%>();
	<%-} else {-%>
	if (key.equals(OscConstants.ELEMENT__<%=property.getXsdWrapperElementName().toMemberName().toUpperNameFromMemberName()%>))
	{
		return (List<IOpenScenarioFlexElement>)(List<?>) get<%=property.name.toClassName()%>();
	<%-}%>
	}<%-}-%>
	throw new KeyNotSupportedException();
	<%-}-%>
  }
   
  @Override
  public IOpenScenarioFlexElement getParentFlexElement()
  {
   	return (IOpenScenarioFlexElement) getParent();
  }
  
  @Override
  public IOpenScenarioFlexElement getReferencedElement(String key, String name) throws KeyNotSupportedException
  {
    <%- List proxies = element.umlProperties.findAll(){ it.isProxy() }-%>
	<%-if (proxies.isEmpty()){-%>
	throw new KeyNotSupportedException();
	<%-} else {-%>
	if (key == null)
	{
		throw new KeyNotSupportedException();
	}
		<%-proxies.eachWithIndex{ property, index ->-%>
	<%index!=0?"else ":" "%>if (key.equals(OscConstants.ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>))
	{
		// Get the Proxy
		INamedReference<<%=property.type.toJavaName()%>> <%=property.name.toMemberName()%> = get<%=property.name.toClassName()%>();
		return <%=property.name.toMemberName()%>!= null?(IOpenScenarioFlexElement) <%=property.name.toMemberName()%>.getTargetObject():null;
	}<%-}-%>
	throw new KeyNotSupportedException();
	<%-}-%>
  }
  
  @Override 
  public String getEnumerationLiteral(String key) throws KeyNotSupportedException
  {
	<%- List enumerationProperties = element.umlProperties.findAll(){ it.type.isEnumeration()}-%>
	<%-if (enumerationProperties.isEmpty()){-%>
	throw new KeyNotSupportedException();
	<%-} else {-%>
	if (key == null)
	{
		throw new KeyNotSupportedException();
	}
		<%-enumerationProperties.eachWithIndex{ property, index ->-%>
	<%=index!= 0?"else ":" "%>if (key.equals(OscConstants.ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>))
	{
	 	<%=property.type.name.toClassName()%> <%=property.name.toMemberName()%> = get<%=property.name.toClassName()%>();
		return <%=property.name.toMemberName()%> != null?<%=property.name.toMemberName()%>.getLiteral():null;
	}<%-}-%>
	throw new KeyNotSupportedException();
	
	<%-}-%>
  }
  
  @Override
  public String getModelType()
  {
  	return "<%=element.name.toClassName()%>";
  }
  
<%properties = element.getParametrizableAttributes()-%>

<%-properties.each{ property ->-%>
  @Override
  public void writeParameterTo<%=property.name.toClassName()%>(String parameterName)
  {
    setAttributeParameter(OscConstants.ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>, parameterName, null /*no textmarker*/);
    this.<%=property.name.toMemberName()%> = null;
  }
<%-}-%>

<%-properties.each{ property ->-%>
  @Override
  public String getParameterFrom<%=property.name.toClassName()%>()
  {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>);
  }
<%-}-%>

<%-properties.each{ property ->-%>
  @Override
  public boolean is<%=property.name.toClassName()%>Parameterized()
  {
  	return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>);
  }
<%-}-%>

// children
<%-properties = element.getXmlElementProperties().findAll(){ !it.isList() }-%>
<%-properties.each{ property ->-%>
  @Override
  public <%=property.type.toJavaName()%>Writer getWriter<%=property.name.toClassName()%>()
  {
    return this.<%=property.name.toMemberName()%>;
  }
<%-}-%>



}

<%-def addTypeCode(element, String primitiveTypeName){-%>
<%- List properties = element.umlProperties.findAll(){ it.type.isPrimitiveType() && it.type.name.toClassName().equals(primitiveTypeName) }-%>
	<%-if (properties.isEmpty()){-%>
	throw new KeyNotSupportedException();
	<%-} else {-%>
	if (key == null)
	{
		throw new KeyNotSupportedException();
	}
	<%-properties.eachWithIndex{ property, index ->-%>
	<%=index != 0?"else ":" "%>if (key.equals(OscConstants.ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>))
	{
		return get<%=property.name.toClassName()%>();
	}<%-}-%>
	throw new KeyNotSupportedException();
	
	<%-}-%>
<%-}-%>
