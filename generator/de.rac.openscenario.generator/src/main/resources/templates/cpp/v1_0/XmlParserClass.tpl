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
 
#pragma once

#include "IParserMessageLogger.h"
#include "OscConstants<%=fileSuffix%>.h"
#include "IndexedElement.h"
#include "ParserContext.h"
#include <vector>
#include "ApiClassImpl<%=fileSuffix%>.h"
#include "XmlAllParser.h"
#include "XmlChoiceParser.h"
#include "XmlSequenceParser.h"
#include <map>
#include "XmlComplexTypeParser.h"
#include "XmlGroupParser.h"
#include "XmlSimpleContentParser.h"
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace <%=versionNamespace%>
    {
    <%- element.each{ element->-%>
        class <%=element.name.toClassName()%>XmlParser;
    <%-}-%>

    <%- element.each{ element->-%>

    <%- if (element.isComplexType()){-%>
<%= helper.makeClassJavaDoc(element, oscVersion, "        ")%>
        class <%=element.name.toClassName()%>XmlParser: public XmlComplexTypeParser<<%=element.name.toClassName()%>Impl>
        {
    <%-}else if (element.isGroup()){-%>

<%= helper.makeClassJavaDoc(element, oscVersion, "        ")%>
        class <%=element.name.toClassName()%>XmlParser: public XmlGroupParser<<%=element.name.toClassName()%>Impl> 
        {
    <%-}else if (element.isSimpleContent()){-%>

<%= helper.makeClassJavaDoc(element, oscVersion, "        ")%>
        class <%=element.name.toClassName()%>XmlParser: public XmlSimpleContentParser<<%=element.name.toClassName()%>Impl> 
        {
    <%-}-%>

    <%- if (element.isComplexType() || element.isSimpleContent()){-%>
        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser<<%=element.name.toClassName()%>Impl>>> GetAttributeNameToAttributeParserMap() override;
    <%-}-%>
    <%-if (element.isSimpleContent()){-%>
        protected:
            void SetContentProperty(const std::string content, std::shared_ptr<<%=element.name.toClassName()%>Impl>& object) override;
            bool IsContentRequired() override;
     <%-}else{-%>
        private:
            /**
            * Parser for all subelements
            */
        <%- if (element.isModelGroupAll()){-%>
            class SubElementParser: public XmlAllParser<<%=element.name.toClassName()%>Impl>
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename);

        <%-}else if (element.isModelGroupChoice()){-%>
            class SubElementParser: public XmlChoiceParser<<%=element.name.toClassName()%>Impl>
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                */
                 SubElementParser(IParserMessageLogger& messageLogger, std::string& filename);

        <%-}else if (element.isModelGroupSequence()){-%>
            class SubElementParser: public XmlSequenceParser<<%=element.name.toClassName()%>Impl>
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename);
        <%-}-%>
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser<<%=element.name.toClassName()%>Impl>>> CreateParserList() override;
            };
    	<%-}-%>

        <%-properties = element.getXmlElementProperties();-%>
        <%-properties.each{ property -> -%>
            /**
            * A parser for subelement <%=property.name.toMemberName()%>
            */
            class SubElement<%=property.name.toClassName()%>Parser: public IElementParser<<%=element.name.toClassName()%>Impl> 
            {
            private:
                std::shared_ptr<<%=property.type.name.toClassName()%>XmlParser> _<%=property.type.name.toMemberName()%>XmlParser;

            public:
                /**
                * Constructor
                */
                SubElement<%=property.name.toClassName()%>Parser(IParserMessageLogger& messageLogger, std::string& filename);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<<%=element.name.toClassName()%>Impl>& object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

<%-}-%>

        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
            <%=element.name.toClassName()%>XmlParser(IParserMessageLogger& messageLogger, std::string& filename);
        };

<%-}-%>
    }
}