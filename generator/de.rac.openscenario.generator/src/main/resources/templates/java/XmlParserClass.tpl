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
package <%=xmlPackageName%>;

import net.asam.openscenario.common.IParserMessageLogger;
import net.asam.openscenario.v1_0.common.OscConstants;
import net.asam.openscenario.simple.struct.IndexedElement;
import net.asam.openscenario.parser.ParserContext;
import net.asam.openscenario.v1_0.parser.CatalogReferenceParserContext;
<%- if (element.hasProxies()){-%>
import net.asam.openscenario.impl.NamedReferenceProxy;
<%-}-%>
import net.asam.openscenario.common.FileContentMessage;
import net.asam.xml.indexer.Position;
import net.asam.openscenario.common.Textmarker;
import net.asam.openscenario.common.ErrorLevel;
<%- element.getXmlElementProperties().findAll{property-> property.isList()}.each{ property ->-%>
import net.asam.openscenario.v1_0.api.writer.I<%=property.type.name.toClassName()%>Writer;
<%-}-%>
<%- if (element.hasWrappedList()){-%>
import net.asam.openscenario.parser.WrappedListParser;
<%-}-%>
import java.util.List;
<%helper.getInterfaceTypeImport(element, packageName).each{importedType->%>import <%=importedType%><%}%>
<%helper.getImplTypeImport(element, implPackageName).each{importedType->%>import <%=importedType%><%}%>
<%- if (element.isModelGroupAll()){-%>
import net.asam.openscenario.parser.modelgroup.XmlAllParser;
<%-}else if (element.isModelGroupChoice()){-%>
import net.asam.openscenario.parser.modelgroup.XmlChoiceParser;
<%-}else if (element.isModelGroupSequence()){-%>
import net.asam.openscenario.parser.modelgroup.XmlSequenceParser;
<%-}-%>
<%- if (element.isComplexType()){-%>
import java.util.Map;
import java.util.Hashtable;
import java.util.ArrayList;
import net.asam.openscenario.parser.type.XmlComplexTypeParser;


<%= helper.makeClassJavaDoc(element, oscVersion)%>
public class <%=element.name.toClassName()%>XmlParser extends XmlComplexTypeParser<<%=element.name.toClassName()%>Impl> {
<%-}else if (element.isGroup()){-%>
import java.util.ArrayList;
import net.asam.openscenario.parser.type.XmlGroupParser;

<%= helper.makeClassJavaDoc(element, oscVersion)%>
public class <%=element.name.toClassName()%>XmlParser extends XmlGroupParser<<%=element.name.toClassName()%>Impl> {
<%-}else if (element.isSimpleContent()){-%>
import java.util.Map;
import java.util.Hashtable;
import net.asam.openscenario.parser.type.XmlSimpleContentParser;

<%= helper.makeClassJavaDoc(element, oscVersion)%>
public class <%=element.name.toClassName()%>XmlParser extends XmlSimpleContentParser<<%=element.name.toClassName()%>Impl> {
<%-}-%>

	/**
	 * Constructor
	 * @param messageLogger to log messages during parsing
	 * @param filename to locate the messages in a file
	 */
	public <%=element.name.toClassName()%>XmlParser(IParserMessageLogger messageLogger, String filename) {
		super(messageLogger, filename);
		<%- if (element.isComplexType() || element.isGroup()){-%>
		this.subElementParser = new SubElementParser(messageLogger, filename);
		<%-}-%>
	}			
	
<%- if (element.isComplexType() || element.isSimpleContent()){-%>
	@Override
	protected  Map<String, IAttributeParser<<%=element.name.toClassName()%>Impl>> getAttributeNameToAttributeParserMap()
	{
		Map<String, IAttributeParser<<%=element.name.toClassName()%>Impl>> result  = new Hashtable<>();
		<%-List properties = element.getXmlAttributeProperties();-%>
		<%-properties.each{ property -> -%>
		result.put(OscConstants.ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>, new IAttributeParser<<%=element.name.toClassName()%>Impl>() {
			@SuppressWarnings("synthetic-access")
			@Override
			public void parse(Position startPosition, Position endPosition, String attributeName, String attributeValue, <%=element.name.toClassName()%>Impl object)
			{
				
				<%-if (property.isParameterizableProperty()){-%>
				Textmarker startMarker = new Textmarker(startPosition.getLine(), startPosition.getColumn(),<%=element.name.toClassName()%>XmlParser.this.filename);
				Textmarker endMarker = new Textmarker(endPosition.getLine(), endPosition.getColumn(),<%=element.name.toClassName()%>XmlParser.this.filename);
				if (isParametrized(attributeValue))
				{
					object.setAttributeParameter(OscConstants.ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>, stripDollarSign(attributeValue), startMarker); 
				}else
				{
					// Parse value
					<%-if (property.isProxy()){-%>
					// Proxy
					NamedReferenceProxy<I<%=property.type.name.toClassName()%>> proxy = new NamedReferenceProxy<> (attributeValue);
					proxy.setParent(object);
					object.set<%=property.name.toClassName()%>(proxy);
					<%-} else if (property.type.isPrimitiveType()) {-%>
					// Simple type
					object.set<%=property.name.toClassName()%>(parse<%=property.type.name.toClassName()%>(attributeValue,startMarker));
					<%-} else {-%>
					// Enumeration Type
					<%=property.type.name.toClassName()%> result = <%=property.type.name.toClassName()%>.getFromLiteral(attributeValue);
					if (result != null)
					{
						object.set<%=property.name.toClassName()%>(result);
					}else
					{
						<%=element.name.toClassName()%>XmlParser.this.messageLogger.logMessage(new FileContentMessage( "Value '"+attributeValue+"' is not allowed.",ErrorLevel.ERROR, startMarker));
					}
					<%-}-%>
				}
				object.putPropertyStartMarker(OscConstants.ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>, startMarker);
				object.putPropertyEndMarker(OscConstants.ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>, endMarker);
				
				<%-} else {-%>
				// This is a special case for ParameterDeclaration.name or ParamterAssignment.parameterRef
					<%-if (property.isProxy()){-%>
				// Proxy
				NamedReferenceProxy<I<%=property.type.name.toClassName()%>> proxy = new NamedReferenceProxy<I<%=property.type.name.toClassName()%>> (stripDollarSign(attributeValue));
				proxy.setParent(object);
				object.set<%=property.name.toClassName()%>(proxy);
				<%-} else if (property.type.isPrimitiveType()) {-%>
				// Simple type
				Textmarker startMarker = new Textmarker(startPosition.getLine(), startPosition.getColumn(),<%=element.name.toClassName()%>XmlParser.this.filename);
				object.set<%=property.name.toClassName()%>(parse<%=property.type.name.toClassName()%>(stripDollarSign(attributeValue),startMarker));
					<%-}-%>
				<%-}-%>
			}
			

			@Override
			public int getMinOccur() {
				return <%=property.lower%>;
			}
			
		});
		<%-}-%>
		return result;
	}
<%-}-%>
<%-if (element.isSimpleContent()){-%>
	@Override
	protected void setContentProperty(String content, <%=element.name.toClassName()%>Impl object)
	{
		object.set<%=element.getContentPropertyName().toClassName()%>(content);
	}
	@Override
	protected boolean isContentRequired()
	{
		return false;
	}
<%-}else{-%>

	/**
	 * Parser for all subelements
	 */
	<%- if (element.isModelGroupAll()){-%>
	private class SubElementParser extends XmlAllParser<<%=element.name.toClassName()%>Impl>{
		/**
		 * Constructor
		 * @param messageLogger to log messages during parsing
		 * @param filename to locate the messages in a file
		 */
		public SubElementParser (IParserMessageLogger messageLogger, String filename) {
			super(messageLogger,filename);	
		}
	<%-}else if (element.isModelGroupChoice()){-%>
	private class SubElementParser extends XmlChoiceParser<<%=element.name.toClassName()%>Impl>{
		/**
		 * Constructor
		 * @param messageLogger to log messages during parsing
		 * @param filename to locate the messages in a file
		 */
		public SubElementParser (IParserMessageLogger messageLogger, String filename) {
			super( messageLogger, filename);	
		}
	<%-}else if (element.isModelGroupSequence()){-%>
	private class SubElementParser extends XmlSequenceParser<<%=element.name.toClassName()%>Impl>{
		/**
		 * Constructor
		 * @param messageLogger to log messages during parsing
		 * @param filename to locate the messages in a file
		 */
		public SubElementParser (IParserMessageLogger messageLogger, String filename) {
			super( messageLogger, filename);	
		}
	<%-}-%>
		/*
		 * Creates a list of parser
		 */
		@Override
		<%-properties = element.getXmlElementProperties();-%>
		<%-if(!properties.findAll(){ it.isWrappedList()}.isEmpty()){-%>
		@SuppressWarnings("synthetic-access")
		<%-}-%>	
		protected  List<IElementParser<<%=element.name.toClassName()%>Impl>> createParserList()
		{
			List<IElementParser<<%=element.name.toClassName()%>Impl>> result = new ArrayList<>();		
			<%-properties.each{ property -> -%>
				<%- if (property.isWrappedList()){-%>
			result.add(new WrappedListParser<>(this.messageLogger,<%=element.name.toClassName()%>XmlParser.this.filename,new SubElement<%=property.name.toClassName()%>Parser(), OscConstants.ELEMENT__<%=property.name.toClassName().toUpperNameFromMemberName()%>) );
				<%-} else { -%>
			result.add(new SubElement<%=property.name.toClassName()%>Parser());
				<%-}-%>
			<%-}-%>
			return result;
		
		}	
	}
<%-}-%>
	<%-properties = element.getXmlElementProperties();-%>
	<%-properties.each{ property -> -%>
	/**
	 * A parser for subelement <%=property.name.toMemberName()%>
	 */
	 @SuppressWarnings("synthetic-access")
	 private class SubElement<%=property.name.toClassName()%>Parser implements IElementParser<<%=element.name.toClassName()%>Impl> {
	
		/**
		 * Constructor
		 */

		public SubElement<%=property.name.toClassName()%>Parser()
		{
			super();
			this.<%=property.type.name.toMemberName()%>XmlParser = new <%=property.type.name.toClassName()%>XmlParser(<%=element.name.toClassName()%>XmlParser.this.messageLogger, <%=element.name.toClassName()%>XmlParser.this.filename);
		}
		private <%=property.type.name.toClassName()%>XmlParser <%=property.type.name.toMemberName()%>XmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,<%=element.name.toClassName()%>Impl object)
		{
			<%=property.type.name.toClassName()%>Impl <%=property.name.toMemberName()%> = new <%=property.type.name.toClassName()%>Impl();
			// Setting the parent
			<%=property.name.toMemberName()%>.setParent(object);
			this.<%=property.type.name.toMemberName()%>XmlParser.parseElement(indexedElement,parserContext, <%=property.name.toMemberName()%>);
			<%-if (property.isList()){-%>
			List<I<%=property.type.name.toClassName()%>Writer> <%=property.name.toMemberName()%>List = object.getWriter<%=property.name.toClassName()%>();
			if (<%=property.name.toMemberName()%>List == null)
			{
				<%=property.name.toMemberName()%>List = new ArrayList<>();
				object.set<%=property.name.toClassName()%>( <%=property.name.toMemberName()%>List);
			}
			<%=property.name.toMemberName()%>List.add(<%=property.name.toMemberName()%>);
			<%-} else {%>
			object.set<%=property.name.toClassName()%>( <%=property.name.toMemberName()%>);
			<%-}-%>
			<%- if (property.type.name.toClassName() == "CatalogReference"){-%>
			((CatalogReferenceParserContext)parserContext).addCatalogReference(<%=property.name.toMemberName()%>);
			<%-}-%>
			
		}

		@Override
		public int getMinOccur()
		{
			return <%=property.lower%>;
		}
		
		@Override
		public int getMaxOccur()
		{
			return <%=property.upper%>;
		}
		
		@Override
		public boolean doesMatch(String elementName)
		{
		<%-if (property.isWrappedList()){-%>
			return elementName.equals(OscConstants.ELEMENT__<%=property.getXsdWrapperElementName().toMemberName().toUpperNameFromMemberName()%>);			
		<%-} else {-%>
			return
			<%-helper.splitEqualTo(property.getPossibleTagNames(),"elementName").each{ name ->-%>
				<%=name%>
			<%-}-%>
		 <%-}-%>
		}
		
		@Override
		public String[] getExpectedTagNames()
		{<%-if (property.isWrappedList()){-%>
			return new String[]{OscConstants.ELEMENT__<%=property.getXsdWrapperElementName().toMemberName().toUpperNameFromMemberName()%>};
		 <%-} else {-%>
		 	return new String[]{
		 	<%-helper.splitStringList(property.getPossibleTagNames()).each{ name ->-%>
				<%=name%>
			<%-}-%>
					};
		 <%-}-%>
		}
	}
	<%-}-%>
}

