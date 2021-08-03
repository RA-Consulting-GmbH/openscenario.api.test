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
 
#include "PositionIndex.h"
#include "AttributeNode.h"
using namespace NET_ASAM_OPENSCENARIO;


// Generated from XMLParser.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "XMLParserListener.h"


/**
 * This class provides an empty implementation of XMLParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  XMLParserBaseListener : public XMLParserListener {
public:

  virtual void enterDocument(XMLParser::DocumentContext * /*ctx*/) override { }
  virtual void exitDocument(XMLParser::DocumentContext * /*ctx*/) override { }

  virtual void enterProlog(XMLParser::PrologContext * /*ctx*/) override { }
  virtual void exitProlog(XMLParser::PrologContext * /*ctx*/) override { }

  virtual void enterDoctypedecl(XMLParser::DoctypedeclContext * /*ctx*/) override { }
  virtual void exitDoctypedecl(XMLParser::DoctypedeclContext * /*ctx*/) override { }

  virtual void enterContent(XMLParser::ContentContext * /*ctx*/) override { }
  virtual void exitContent(XMLParser::ContentContext * /*ctx*/) override { }

  virtual void enterElement(XMLParser::ElementContext * /*ctx*/) override { }
  virtual void exitElement(XMLParser::ElementContext * /*ctx*/) override { }

  virtual void enterAttributeList(XMLParser::AttributeListContext * /*ctx*/) override { }
  virtual void exitAttributeList(XMLParser::AttributeListContext * /*ctx*/) override { }

  virtual void enterReference(XMLParser::ReferenceContext * /*ctx*/) override { }
  virtual void exitReference(XMLParser::ReferenceContext * /*ctx*/) override { }

  virtual void enterAttribute(XMLParser::AttributeContext * /*ctx*/) override { }
  virtual void exitAttribute(XMLParser::AttributeContext * /*ctx*/) override { }

  virtual void enterChardata(XMLParser::ChardataContext * /*ctx*/) override { }
  virtual void exitChardata(XMLParser::ChardataContext * /*ctx*/) override { }

  virtual void enterMisc(XMLParser::MiscContext * /*ctx*/) override { }
  virtual void exitMisc(XMLParser::MiscContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

