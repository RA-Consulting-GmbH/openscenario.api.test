
#include "PositionIndex.h"
#include "AttributeNode.h"
using namespace RAC_XML_INDEXER;


// Generated from XMLParser.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "XMLParserVisitor.h"


/**
 * This class provides an empty implementation of XMLParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  XMLParserBaseVisitor : public XMLParserVisitor {
public:

  virtual antlrcpp::Any visitDocument(XMLParser::DocumentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProlog(XMLParser::PrologContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDoctypedecl(XMLParser::DoctypedeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitContent(XMLParser::ContentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElement(XMLParser::ElementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAttributeList(XMLParser::AttributeListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReference(XMLParser::ReferenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAttribute(XMLParser::AttributeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChardata(XMLParser::ChardataContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMisc(XMLParser::MiscContext *ctx) override {
    return visitChildren(ctx);
  }


};

