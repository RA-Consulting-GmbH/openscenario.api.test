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
#include "XMLParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by XMLParser.
 */
class  XMLParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterDocument(XMLParser::DocumentContext *ctx) = 0;
  virtual void exitDocument(XMLParser::DocumentContext *ctx) = 0;

  virtual void enterProlog(XMLParser::PrologContext *ctx) = 0;
  virtual void exitProlog(XMLParser::PrologContext *ctx) = 0;

  virtual void enterDoctypedecl(XMLParser::DoctypedeclContext *ctx) = 0;
  virtual void exitDoctypedecl(XMLParser::DoctypedeclContext *ctx) = 0;

  virtual void enterContent(XMLParser::ContentContext *ctx) = 0;
  virtual void exitContent(XMLParser::ContentContext *ctx) = 0;

  virtual void enterElement(XMLParser::ElementContext *ctx) = 0;
  virtual void exitElement(XMLParser::ElementContext *ctx) = 0;

  virtual void enterAttributeList(XMLParser::AttributeListContext *ctx) = 0;
  virtual void exitAttributeList(XMLParser::AttributeListContext *ctx) = 0;

  virtual void enterReference(XMLParser::ReferenceContext *ctx) = 0;
  virtual void exitReference(XMLParser::ReferenceContext *ctx) = 0;

  virtual void enterAttribute(XMLParser::AttributeContext *ctx) = 0;
  virtual void exitAttribute(XMLParser::AttributeContext *ctx) = 0;

  virtual void enterChardata(XMLParser::ChardataContext *ctx) = 0;
  virtual void exitChardata(XMLParser::ChardataContext *ctx) = 0;

  virtual void enterMisc(XMLParser::MiscContext *ctx) = 0;
  virtual void exitMisc(XMLParser::MiscContext *ctx) = 0;


};

