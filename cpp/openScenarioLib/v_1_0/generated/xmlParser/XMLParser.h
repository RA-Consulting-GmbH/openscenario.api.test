
#include "PositionIndex.h"
#include "AttributeNode.h"
using namespace NET_ASAM_OPENSCENARIO;


// Generated from XMLParser.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  XMLParser : public antlr4::Parser {
public:
  enum {
    COMMENT = 1, CDATA = 2, DTD_START = 3, EntityRef = 4, CharRef = 5, SEA_WS = 6, 
    OPEN = 7, XMLDeclOpen = 8, TEXT = 9, CLOSE = 10, SPECIAL_CLOSE = 11, 
    SLASH_CLOSE = 12, SLASH = 13, EQUALS = 14, STRING = 15, Name = 16, S = 17, 
    PI = 18, DTD_NESTED = 19, DTD_CLOSE = 20
  };

  enum {
    RuleDocument = 0, RuleProlog = 1, RuleDoctypedecl = 2, RuleContent = 3, 
    RuleElement = 4, RuleAttributeList = 5, RuleReference = 6, RuleAttribute = 7, 
    RuleChardata = 8, RuleMisc = 9
  };

  XMLParser(antlr4::TokenStream *input);
  ~XMLParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


      protected:
      PositionIndex _positionIndex;
      
      public:
      PositionIndex GetPositionIndex() const
      {
      	return _positionIndex;
      }


  class DocumentContext;
  class PrologContext;
  class DoctypedeclContext;
  class ContentContext;
  class ElementContext;
  class AttributeListContext;
  class ReferenceContext;
  class AttributeContext;
  class ChardataContext;
  class MiscContext; 

  class  DocumentContext : public antlr4::ParserRuleContext {
  public:
    DocumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrologContext *prolog();
    ElementContext *element();
    std::vector<MiscContext *> misc();
    MiscContext* misc(size_t i);
    DoctypedeclContext *doctypedecl();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DocumentContext* document();

  class  PrologContext : public antlr4::ParserRuleContext {
  public:
    PrologContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *XMLDeclOpen();
    antlr4::tree::TerminalNode *SPECIAL_CLOSE();
    std::vector<AttributeContext *> attribute();
    AttributeContext* attribute(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PrologContext* prolog();

  class  DoctypedeclContext : public antlr4::ParserRuleContext {
  public:
    DoctypedeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DTD_START();
    antlr4::tree::TerminalNode *DTD_CLOSE();
    std::vector<antlr4::tree::TerminalNode *> DTD_NESTED();
    antlr4::tree::TerminalNode* DTD_NESTED(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DoctypedeclContext* doctypedecl();

  class  ContentContext : public antlr4::ParserRuleContext {
  public:
    ContentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ChardataContext *> chardata();
    ChardataContext* chardata(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CDATA();
    antlr4::tree::TerminalNode* CDATA(size_t i);
    std::vector<ElementContext *> element();
    ElementContext* element(size_t i);
    std::vector<ReferenceContext *> reference();
    ReferenceContext* reference(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PI();
    antlr4::tree::TerminalNode* PI(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMENT();
    antlr4::tree::TerminalNode* COMMENT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ContentContext* content();

  class  ElementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *openToken = nullptr;;
    XMLParser::AttributeListContext *r = nullptr;;
    antlr4::Token *closeToken = nullptr;;
    antlr4::Token *slash_closeToken = nullptr;;
    ElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ContentContext *content();
    std::vector<antlr4::tree::TerminalNode *> OPEN();
    antlr4::tree::TerminalNode* OPEN(size_t i);
    antlr4::tree::TerminalNode *SLASH();
    std::vector<antlr4::tree::TerminalNode *> Name();
    antlr4::tree::TerminalNode* Name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CLOSE();
    antlr4::tree::TerminalNode* CLOSE(size_t i);
    AttributeListContext *attributeList();
    antlr4::tree::TerminalNode *SLASH_CLOSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ElementContext* element();

  class  AttributeListContext : public antlr4::ParserRuleContext {
  public:
    std::vector<AttributeNode> result;
    XMLParser::AttributeContext *attributeContext = nullptr;;
    AttributeListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AttributeContext *> attribute();
    AttributeContext* attribute(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AttributeListContext* attributeList();

  class  ReferenceContext : public antlr4::ParserRuleContext {
  public:
    ReferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EntityRef();
    antlr4::tree::TerminalNode *CharRef();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReferenceContext* reference();

  class  AttributeContext : public antlr4::ParserRuleContext {
  public:
    std::string result;
    antlr4::Token *nameToken = nullptr;;
    AttributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Name();
    antlr4::tree::TerminalNode *EQUALS();
    antlr4::tree::TerminalNode *STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AttributeContext* attribute();

  class  ChardataContext : public antlr4::ParserRuleContext {
  public:
    ChardataContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TEXT();
    antlr4::tree::TerminalNode *SEA_WS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ChardataContext* chardata();

  class  MiscContext : public antlr4::ParserRuleContext {
  public:
    MiscContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *PI();
    antlr4::tree::TerminalNode *SEA_WS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MiscContext* misc();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

