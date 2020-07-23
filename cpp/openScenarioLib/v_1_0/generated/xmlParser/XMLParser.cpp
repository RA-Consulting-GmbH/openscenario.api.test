
#include "PositionIndex.h"
#include "AttributeNode.h"
using namespace NET_ASAM_OPENSCENARIO;


// Generated from XMLParser.g4 by ANTLR 4.8


#include "XMLParserListener.h"

#include "XMLParser.h"


using namespace antlrcpp;
using namespace antlr4;

XMLParser::XMLParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

XMLParser::~XMLParser() {
  delete _interpreter;
}

std::string XMLParser::getGrammarFileName() const {
  return "XMLParser.g4";
}

const std::vector<std::string>& XMLParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& XMLParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- DocumentContext ------------------------------------------------------------------

XMLParser::DocumentContext::DocumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

XMLParser::PrologContext* XMLParser::DocumentContext::prolog() {
  return getRuleContext<XMLParser::PrologContext>(0);
}

XMLParser::ElementContext* XMLParser::DocumentContext::element() {
  return getRuleContext<XMLParser::ElementContext>(0);
}

std::vector<XMLParser::MiscContext *> XMLParser::DocumentContext::misc() {
  return getRuleContexts<XMLParser::MiscContext>();
}

XMLParser::MiscContext* XMLParser::DocumentContext::misc(size_t i) {
  return getRuleContext<XMLParser::MiscContext>(i);
}

XMLParser::DoctypedeclContext* XMLParser::DocumentContext::doctypedecl() {
  return getRuleContext<XMLParser::DoctypedeclContext>(0);
}


size_t XMLParser::DocumentContext::getRuleIndex() const {
  return XMLParser::RuleDocument;
}

void XMLParser::DocumentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XMLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDocument(this);
}

void XMLParser::DocumentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XMLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDocument(this);
}

XMLParser::DocumentContext* XMLParser::document() {
  DocumentContext *_localctx = _tracker.createInstance<DocumentContext>(_ctx, getState());
  enterRule(_localctx, 0, XMLParser::RuleDocument);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(20);
    prolog();
    setState(24);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << XMLParser::COMMENT)
      | (1ULL << XMLParser::SEA_WS)
      | (1ULL << XMLParser::PI))) != 0)) {
      setState(21);
      misc();
      setState(26);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(34);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == XMLParser::DTD_START) {
      setState(27);
      doctypedecl();
      setState(31);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << XMLParser::COMMENT)
        | (1ULL << XMLParser::SEA_WS)
        | (1ULL << XMLParser::PI))) != 0)) {
        setState(28);
        misc();
        setState(33);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(36);
    element();
    setState(40);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << XMLParser::COMMENT)
      | (1ULL << XMLParser::SEA_WS)
      | (1ULL << XMLParser::PI))) != 0)) {
      setState(37);
      misc();
      setState(42);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrologContext ------------------------------------------------------------------

XMLParser::PrologContext::PrologContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XMLParser::PrologContext::XMLDeclOpen() {
  return getToken(XMLParser::XMLDeclOpen, 0);
}

tree::TerminalNode* XMLParser::PrologContext::SPECIAL_CLOSE() {
  return getToken(XMLParser::SPECIAL_CLOSE, 0);
}

std::vector<XMLParser::AttributeContext *> XMLParser::PrologContext::attribute() {
  return getRuleContexts<XMLParser::AttributeContext>();
}

XMLParser::AttributeContext* XMLParser::PrologContext::attribute(size_t i) {
  return getRuleContext<XMLParser::AttributeContext>(i);
}


size_t XMLParser::PrologContext::getRuleIndex() const {
  return XMLParser::RuleProlog;
}

void XMLParser::PrologContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XMLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProlog(this);
}

void XMLParser::PrologContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XMLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProlog(this);
}

XMLParser::PrologContext* XMLParser::prolog() {
  PrologContext *_localctx = _tracker.createInstance<PrologContext>(_ctx, getState());
  enterRule(_localctx, 2, XMLParser::RuleProlog);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(43);
    match(XMLParser::XMLDeclOpen);
    setState(47);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == XMLParser::Name) {
      setState(44);
      attribute();
      setState(49);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(50);
    match(XMLParser::SPECIAL_CLOSE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DoctypedeclContext ------------------------------------------------------------------

XMLParser::DoctypedeclContext::DoctypedeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XMLParser::DoctypedeclContext::DTD_START() {
  return getToken(XMLParser::DTD_START, 0);
}

tree::TerminalNode* XMLParser::DoctypedeclContext::DTD_CLOSE() {
  return getToken(XMLParser::DTD_CLOSE, 0);
}

std::vector<tree::TerminalNode *> XMLParser::DoctypedeclContext::DTD_NESTED() {
  return getTokens(XMLParser::DTD_NESTED);
}

tree::TerminalNode* XMLParser::DoctypedeclContext::DTD_NESTED(size_t i) {
  return getToken(XMLParser::DTD_NESTED, i);
}


size_t XMLParser::DoctypedeclContext::getRuleIndex() const {
  return XMLParser::RuleDoctypedecl;
}

void XMLParser::DoctypedeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XMLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDoctypedecl(this);
}

void XMLParser::DoctypedeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XMLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDoctypedecl(this);
}

XMLParser::DoctypedeclContext* XMLParser::doctypedecl() {
  DoctypedeclContext *_localctx = _tracker.createInstance<DoctypedeclContext>(_ctx, getState());
  enterRule(_localctx, 4, XMLParser::RuleDoctypedecl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(52);
    match(XMLParser::DTD_START);
    setState(56);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == XMLParser::DTD_NESTED) {
      setState(53);
      match(XMLParser::DTD_NESTED);
      setState(58);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(59);
    match(XMLParser::DTD_CLOSE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ContentContext ------------------------------------------------------------------

XMLParser::ContentContext::ContentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<XMLParser::ChardataContext *> XMLParser::ContentContext::chardata() {
  return getRuleContexts<XMLParser::ChardataContext>();
}

XMLParser::ChardataContext* XMLParser::ContentContext::chardata(size_t i) {
  return getRuleContext<XMLParser::ChardataContext>(i);
}

std::vector<tree::TerminalNode *> XMLParser::ContentContext::CDATA() {
  return getTokens(XMLParser::CDATA);
}

tree::TerminalNode* XMLParser::ContentContext::CDATA(size_t i) {
  return getToken(XMLParser::CDATA, i);
}

std::vector<XMLParser::ElementContext *> XMLParser::ContentContext::element() {
  return getRuleContexts<XMLParser::ElementContext>();
}

XMLParser::ElementContext* XMLParser::ContentContext::element(size_t i) {
  return getRuleContext<XMLParser::ElementContext>(i);
}

std::vector<XMLParser::ReferenceContext *> XMLParser::ContentContext::reference() {
  return getRuleContexts<XMLParser::ReferenceContext>();
}

XMLParser::ReferenceContext* XMLParser::ContentContext::reference(size_t i) {
  return getRuleContext<XMLParser::ReferenceContext>(i);
}

std::vector<tree::TerminalNode *> XMLParser::ContentContext::PI() {
  return getTokens(XMLParser::PI);
}

tree::TerminalNode* XMLParser::ContentContext::PI(size_t i) {
  return getToken(XMLParser::PI, i);
}

std::vector<tree::TerminalNode *> XMLParser::ContentContext::COMMENT() {
  return getTokens(XMLParser::COMMENT);
}

tree::TerminalNode* XMLParser::ContentContext::COMMENT(size_t i) {
  return getToken(XMLParser::COMMENT, i);
}


size_t XMLParser::ContentContext::getRuleIndex() const {
  return XMLParser::RuleContent;
}

void XMLParser::ContentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XMLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterContent(this);
}

void XMLParser::ContentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XMLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitContent(this);
}

XMLParser::ContentContext* XMLParser::content() {
  ContentContext *_localctx = _tracker.createInstance<ContentContext>(_ctx, getState());
  enterRule(_localctx, 6, XMLParser::RuleContent);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(63);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      setState(61);
      chardata();
      break;
    }

    case 2: {
      setState(62);
      match(XMLParser::CDATA);
      break;
    }

    }
    setState(78);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(70);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case XMLParser::OPEN: {
            setState(65);
            element();
            break;
          }

          case XMLParser::EntityRef:
          case XMLParser::CharRef: {
            setState(66);
            reference();
            break;
          }

          case XMLParser::CDATA: {
            setState(67);
            match(XMLParser::CDATA);
            break;
          }

          case XMLParser::PI: {
            setState(68);
            match(XMLParser::PI);
            break;
          }

          case XMLParser::COMMENT: {
            setState(69);
            match(XMLParser::COMMENT);
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(74);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
        case 1: {
          setState(72);
          chardata();
          break;
        }

        case 2: {
          setState(73);
          match(XMLParser::CDATA);
          break;
        }

        } 
      }
      setState(80);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElementContext ------------------------------------------------------------------

XMLParser::ElementContext::ElementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

XMLParser::ContentContext* XMLParser::ElementContext::content() {
  return getRuleContext<XMLParser::ContentContext>(0);
}

std::vector<tree::TerminalNode *> XMLParser::ElementContext::OPEN() {
  return getTokens(XMLParser::OPEN);
}

tree::TerminalNode* XMLParser::ElementContext::OPEN(size_t i) {
  return getToken(XMLParser::OPEN, i);
}

tree::TerminalNode* XMLParser::ElementContext::SLASH() {
  return getToken(XMLParser::SLASH, 0);
}

std::vector<tree::TerminalNode *> XMLParser::ElementContext::Name() {
  return getTokens(XMLParser::Name);
}

tree::TerminalNode* XMLParser::ElementContext::Name(size_t i) {
  return getToken(XMLParser::Name, i);
}

std::vector<tree::TerminalNode *> XMLParser::ElementContext::CLOSE() {
  return getTokens(XMLParser::CLOSE);
}

tree::TerminalNode* XMLParser::ElementContext::CLOSE(size_t i) {
  return getToken(XMLParser::CLOSE, i);
}

XMLParser::AttributeListContext* XMLParser::ElementContext::attributeList() {
  return getRuleContext<XMLParser::AttributeListContext>(0);
}

tree::TerminalNode* XMLParser::ElementContext::SLASH_CLOSE() {
  return getToken(XMLParser::SLASH_CLOSE, 0);
}


size_t XMLParser::ElementContext::getRuleIndex() const {
  return XMLParser::RuleElement;
}

void XMLParser::ElementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XMLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElement(this);
}

void XMLParser::ElementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XMLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElement(this);
}

XMLParser::ElementContext* XMLParser::element() {
  ElementContext *_localctx = _tracker.createInstance<ElementContext>(_ctx, getState());
  enterRule(_localctx, 8, XMLParser::RuleElement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(102);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(81);
      dynamic_cast<ElementContext *>(_localctx)->openToken = match(XMLParser::OPEN);
      setState(82);
      match(XMLParser::Name);
      setState(83);
      dynamic_cast<ElementContext *>(_localctx)->r = attributeList();
      setState(84);
      dynamic_cast<ElementContext *>(_localctx)->closeToken = match(XMLParser::CLOSE);
      _positionIndex.PushElementNode(dynamic_cast<ElementContext *>(_localctx)->openToken->getLine(), dynamic_cast<ElementContext *>(_localctx)->openToken->getCharPositionInLine(),dynamic_cast<ElementContext *>(_localctx)->r->result);
      setState(87);
      content();
      setState(88);
      dynamic_cast<ElementContext *>(_localctx)->openToken = match(XMLParser::OPEN);
      setState(89);
      match(XMLParser::SLASH);
      setState(90);
      match(XMLParser::Name);
      setState(91);
      dynamic_cast<ElementContext *>(_localctx)->closeToken = match(XMLParser::CLOSE);
      _positionIndex.SetEndPosition(dynamic_cast<ElementContext *>(_localctx)->closeToken->getLine(), dynamic_cast<ElementContext *>(_localctx)->closeToken->getCharPositionInLine()+1);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(94);
      dynamic_cast<ElementContext *>(_localctx)->openToken = match(XMLParser::OPEN);
      setState(95);
      match(XMLParser::Name);
      setState(96);
      dynamic_cast<ElementContext *>(_localctx)->r = attributeList();
      _positionIndex.PushElementNode(dynamic_cast<ElementContext *>(_localctx)->openToken->getLine(), dynamic_cast<ElementContext *>(_localctx)->openToken->getCharPositionInLine(),dynamic_cast<ElementContext *>(_localctx)->r->result);
      setState(99);
      dynamic_cast<ElementContext *>(_localctx)->slash_closeToken = match(XMLParser::SLASH_CLOSE);
      _positionIndex.SetEndPosition(dynamic_cast<ElementContext *>(_localctx)->slash_closeToken->getLine(), dynamic_cast<ElementContext *>(_localctx)->slash_closeToken->getCharPositionInLine()+2);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributeListContext ------------------------------------------------------------------

XMLParser::AttributeListContext::AttributeListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<XMLParser::AttributeContext *> XMLParser::AttributeListContext::attribute() {
  return getRuleContexts<XMLParser::AttributeContext>();
}

XMLParser::AttributeContext* XMLParser::AttributeListContext::attribute(size_t i) {
  return getRuleContext<XMLParser::AttributeContext>(i);
}


size_t XMLParser::AttributeListContext::getRuleIndex() const {
  return XMLParser::RuleAttributeList;
}

void XMLParser::AttributeListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XMLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributeList(this);
}

void XMLParser::AttributeListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XMLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributeList(this);
}

XMLParser::AttributeListContext* XMLParser::attributeList() {
  AttributeListContext *_localctx = _tracker.createInstance<AttributeListContext>(_ctx, getState());
  enterRule(_localctx, 10, XMLParser::RuleAttributeList);

      dynamic_cast<AttributeListContext *>(_localctx)->result =  std::vector<AttributeNode> {};

  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(109);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == XMLParser::Name) {
      setState(104);
      dynamic_cast<AttributeListContext *>(_localctx)->attributeContext = attribute();
      _localctx->result.emplace_back(AttributeNode(dynamic_cast<AttributeListContext *>(_localctx)->attributeContext->result,(dynamic_cast<AttributeListContext *>(_localctx)->attributeContext != nullptr ? (dynamic_cast<AttributeListContext *>(_localctx)->attributeContext->start) : nullptr)->getLine(), (dynamic_cast<AttributeListContext *>(_localctx)->attributeContext != nullptr ? (dynamic_cast<AttributeListContext *>(_localctx)->attributeContext->start) : nullptr)->getCharPositionInLine(), (dynamic_cast<AttributeListContext *>(_localctx)->attributeContext != nullptr ? (dynamic_cast<AttributeListContext *>(_localctx)->attributeContext->stop) : nullptr)->getLine(), (dynamic_cast<AttributeListContext *>(_localctx)->attributeContext != nullptr ? (dynamic_cast<AttributeListContext *>(_localctx)->attributeContext->stop) : nullptr)->getCharPositionInLine()));
      setState(111);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReferenceContext ------------------------------------------------------------------

XMLParser::ReferenceContext::ReferenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XMLParser::ReferenceContext::EntityRef() {
  return getToken(XMLParser::EntityRef, 0);
}

tree::TerminalNode* XMLParser::ReferenceContext::CharRef() {
  return getToken(XMLParser::CharRef, 0);
}


size_t XMLParser::ReferenceContext::getRuleIndex() const {
  return XMLParser::RuleReference;
}

void XMLParser::ReferenceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XMLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReference(this);
}

void XMLParser::ReferenceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XMLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReference(this);
}

XMLParser::ReferenceContext* XMLParser::reference() {
  ReferenceContext *_localctx = _tracker.createInstance<ReferenceContext>(_ctx, getState());
  enterRule(_localctx, 12, XMLParser::RuleReference);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(112);
    _la = _input->LA(1);
    if (!(_la == XMLParser::EntityRef

    || _la == XMLParser::CharRef)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributeContext ------------------------------------------------------------------

XMLParser::AttributeContext::AttributeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XMLParser::AttributeContext::Name() {
  return getToken(XMLParser::Name, 0);
}

tree::TerminalNode* XMLParser::AttributeContext::EQUALS() {
  return getToken(XMLParser::EQUALS, 0);
}

tree::TerminalNode* XMLParser::AttributeContext::STRING() {
  return getToken(XMLParser::STRING, 0);
}


size_t XMLParser::AttributeContext::getRuleIndex() const {
  return XMLParser::RuleAttribute;
}

void XMLParser::AttributeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XMLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttribute(this);
}

void XMLParser::AttributeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XMLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttribute(this);
}

XMLParser::AttributeContext* XMLParser::attribute() {
  AttributeContext *_localctx = _tracker.createInstance<AttributeContext>(_ctx, getState());
  enterRule(_localctx, 14, XMLParser::RuleAttribute);

      dynamic_cast<AttributeContext *>(_localctx)->result =  "";


  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(114);
    dynamic_cast<AttributeContext *>(_localctx)->nameToken = match(XMLParser::Name);
    dynamic_cast<AttributeContext *>(_localctx)->result =  dynamic_cast<AttributeContext *>(_localctx)->nameToken->getText();
    setState(116);
    match(XMLParser::EQUALS);
    setState(117);
    match(XMLParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ChardataContext ------------------------------------------------------------------

XMLParser::ChardataContext::ChardataContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XMLParser::ChardataContext::TEXT() {
  return getToken(XMLParser::TEXT, 0);
}

tree::TerminalNode* XMLParser::ChardataContext::SEA_WS() {
  return getToken(XMLParser::SEA_WS, 0);
}


size_t XMLParser::ChardataContext::getRuleIndex() const {
  return XMLParser::RuleChardata;
}

void XMLParser::ChardataContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XMLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterChardata(this);
}

void XMLParser::ChardataContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XMLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitChardata(this);
}

XMLParser::ChardataContext* XMLParser::chardata() {
  ChardataContext *_localctx = _tracker.createInstance<ChardataContext>(_ctx, getState());
  enterRule(_localctx, 16, XMLParser::RuleChardata);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(119);
    _la = _input->LA(1);
    if (!(_la == XMLParser::SEA_WS

    || _la == XMLParser::TEXT)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MiscContext ------------------------------------------------------------------

XMLParser::MiscContext::MiscContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XMLParser::MiscContext::COMMENT() {
  return getToken(XMLParser::COMMENT, 0);
}

tree::TerminalNode* XMLParser::MiscContext::PI() {
  return getToken(XMLParser::PI, 0);
}

tree::TerminalNode* XMLParser::MiscContext::SEA_WS() {
  return getToken(XMLParser::SEA_WS, 0);
}


size_t XMLParser::MiscContext::getRuleIndex() const {
  return XMLParser::RuleMisc;
}

void XMLParser::MiscContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XMLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMisc(this);
}

void XMLParser::MiscContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XMLParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMisc(this);
}

XMLParser::MiscContext* XMLParser::misc() {
  MiscContext *_localctx = _tracker.createInstance<MiscContext>(_ctx, getState());
  enterRule(_localctx, 18, XMLParser::RuleMisc);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(121);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << XMLParser::COMMENT)
      | (1ULL << XMLParser::SEA_WS)
      | (1ULL << XMLParser::PI))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> XMLParser::_decisionToDFA;
atn::PredictionContextCache XMLParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN XMLParser::_atn;
std::vector<uint16_t> XMLParser::_serializedATN;

std::vector<std::string> XMLParser::_ruleNames = {
  "document", "prolog", "doctypedecl", "content", "element", "attributeList", 
  "reference", "attribute", "chardata", "misc"
};

std::vector<std::string> XMLParser::_literalNames = {
  "", "", "", "'<!DOCTYPE'", "", "", "", "'<'", "", "", "'>'", "", "'/>'", 
  "'/'", "'='"
};

std::vector<std::string> XMLParser::_symbolicNames = {
  "", "COMMENT", "CDATA", "DTD_START", "EntityRef", "CharRef", "SEA_WS", 
  "OPEN", "XMLDeclOpen", "TEXT", "CLOSE", "SPECIAL_CLOSE", "SLASH_CLOSE", 
  "SLASH", "EQUALS", "STRING", "Name", "S", "PI", "DTD_NESTED", "DTD_CLOSE"
};

dfa::Vocabulary XMLParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> XMLParser::_tokenNames;

XMLParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x16, 0x7e, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0x19, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 
    0x1c, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0x20, 0xa, 0x2, 0xc, 0x2, 
    0xe, 0x2, 0x23, 0xb, 0x2, 0x5, 0x2, 0x25, 0xa, 0x2, 0x3, 0x2, 0x3, 0x2, 
    0x7, 0x2, 0x29, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x2c, 0xb, 0x2, 0x3, 0x3, 
    0x3, 0x3, 0x7, 0x3, 0x30, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x33, 0xb, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x39, 0xa, 0x4, 0xc, 
    0x4, 0xe, 0x4, 0x3c, 0xb, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 
    0x5, 0x5, 0x42, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x5, 0x5, 0x49, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x4d, 0xa, 
    0x5, 0x7, 0x5, 0x4f, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x52, 0xb, 0x5, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 
    0x6, 0x69, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x6e, 0xa, 
    0x7, 0xc, 0x7, 0xe, 0x7, 0x71, 0xb, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x2, 0x2, 0xc, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 
    0x10, 0x12, 0x14, 0x2, 0x5, 0x3, 0x2, 0x6, 0x7, 0x4, 0x2, 0x8, 0x8, 
    0xb, 0xb, 0x5, 0x2, 0x3, 0x3, 0x8, 0x8, 0x14, 0x14, 0x2, 0x84, 0x2, 
    0x16, 0x3, 0x2, 0x2, 0x2, 0x4, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x6, 0x36, 
    0x3, 0x2, 0x2, 0x2, 0x8, 0x41, 0x3, 0x2, 0x2, 0x2, 0xa, 0x68, 0x3, 0x2, 
    0x2, 0x2, 0xc, 0x6f, 0x3, 0x2, 0x2, 0x2, 0xe, 0x72, 0x3, 0x2, 0x2, 0x2, 
    0x10, 0x74, 0x3, 0x2, 0x2, 0x2, 0x12, 0x79, 0x3, 0x2, 0x2, 0x2, 0x14, 
    0x7b, 0x3, 0x2, 0x2, 0x2, 0x16, 0x1a, 0x5, 0x4, 0x3, 0x2, 0x17, 0x19, 
    0x5, 0x14, 0xb, 0x2, 0x18, 0x17, 0x3, 0x2, 0x2, 0x2, 0x19, 0x1c, 0x3, 
    0x2, 0x2, 0x2, 0x1a, 0x18, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x1b, 0x3, 0x2, 
    0x2, 0x2, 0x1b, 0x24, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x1a, 0x3, 0x2, 0x2, 
    0x2, 0x1d, 0x21, 0x5, 0x6, 0x4, 0x2, 0x1e, 0x20, 0x5, 0x14, 0xb, 0x2, 
    0x1f, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x20, 0x23, 0x3, 0x2, 0x2, 0x2, 0x21, 
    0x1f, 0x3, 0x2, 0x2, 0x2, 0x21, 0x22, 0x3, 0x2, 0x2, 0x2, 0x22, 0x25, 
    0x3, 0x2, 0x2, 0x2, 0x23, 0x21, 0x3, 0x2, 0x2, 0x2, 0x24, 0x1d, 0x3, 
    0x2, 0x2, 0x2, 0x24, 0x25, 0x3, 0x2, 0x2, 0x2, 0x25, 0x26, 0x3, 0x2, 
    0x2, 0x2, 0x26, 0x2a, 0x5, 0xa, 0x6, 0x2, 0x27, 0x29, 0x5, 0x14, 0xb, 
    0x2, 0x28, 0x27, 0x3, 0x2, 0x2, 0x2, 0x29, 0x2c, 0x3, 0x2, 0x2, 0x2, 
    0x2a, 0x28, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x2b, 
    0x3, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x31, 
    0x7, 0xa, 0x2, 0x2, 0x2e, 0x30, 0x5, 0x10, 0x9, 0x2, 0x2f, 0x2e, 0x3, 
    0x2, 0x2, 0x2, 0x30, 0x33, 0x3, 0x2, 0x2, 0x2, 0x31, 0x2f, 0x3, 0x2, 
    0x2, 0x2, 0x31, 0x32, 0x3, 0x2, 0x2, 0x2, 0x32, 0x34, 0x3, 0x2, 0x2, 
    0x2, 0x33, 0x31, 0x3, 0x2, 0x2, 0x2, 0x34, 0x35, 0x7, 0xd, 0x2, 0x2, 
    0x35, 0x5, 0x3, 0x2, 0x2, 0x2, 0x36, 0x3a, 0x7, 0x5, 0x2, 0x2, 0x37, 
    0x39, 0x7, 0x15, 0x2, 0x2, 0x38, 0x37, 0x3, 0x2, 0x2, 0x2, 0x39, 0x3c, 
    0x3, 0x2, 0x2, 0x2, 0x3a, 0x38, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x3b, 0x3, 
    0x2, 0x2, 0x2, 0x3b, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x3a, 0x3, 0x2, 
    0x2, 0x2, 0x3d, 0x3e, 0x7, 0x16, 0x2, 0x2, 0x3e, 0x7, 0x3, 0x2, 0x2, 
    0x2, 0x3f, 0x42, 0x5, 0x12, 0xa, 0x2, 0x40, 0x42, 0x7, 0x4, 0x2, 0x2, 
    0x41, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x41, 0x40, 0x3, 0x2, 0x2, 0x2, 0x41, 
    0x42, 0x3, 0x2, 0x2, 0x2, 0x42, 0x50, 0x3, 0x2, 0x2, 0x2, 0x43, 0x49, 
    0x5, 0xa, 0x6, 0x2, 0x44, 0x49, 0x5, 0xe, 0x8, 0x2, 0x45, 0x49, 0x7, 
    0x4, 0x2, 0x2, 0x46, 0x49, 0x7, 0x14, 0x2, 0x2, 0x47, 0x49, 0x7, 0x3, 
    0x2, 0x2, 0x48, 0x43, 0x3, 0x2, 0x2, 0x2, 0x48, 0x44, 0x3, 0x2, 0x2, 
    0x2, 0x48, 0x45, 0x3, 0x2, 0x2, 0x2, 0x48, 0x46, 0x3, 0x2, 0x2, 0x2, 
    0x48, 0x47, 0x3, 0x2, 0x2, 0x2, 0x49, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4a, 
    0x4d, 0x5, 0x12, 0xa, 0x2, 0x4b, 0x4d, 0x7, 0x4, 0x2, 0x2, 0x4c, 0x4a, 
    0x3, 0x2, 0x2, 0x2, 0x4c, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4d, 0x3, 
    0x2, 0x2, 0x2, 0x4d, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x48, 0x3, 0x2, 
    0x2, 0x2, 0x4f, 0x52, 0x3, 0x2, 0x2, 0x2, 0x50, 0x4e, 0x3, 0x2, 0x2, 
    0x2, 0x50, 0x51, 0x3, 0x2, 0x2, 0x2, 0x51, 0x9, 0x3, 0x2, 0x2, 0x2, 
    0x52, 0x50, 0x3, 0x2, 0x2, 0x2, 0x53, 0x54, 0x7, 0x9, 0x2, 0x2, 0x54, 
    0x55, 0x7, 0x12, 0x2, 0x2, 0x55, 0x56, 0x5, 0xc, 0x7, 0x2, 0x56, 0x57, 
    0x7, 0xc, 0x2, 0x2, 0x57, 0x58, 0x3, 0x2, 0x2, 0x2, 0x58, 0x59, 0x8, 
    0x6, 0x1, 0x2, 0x59, 0x5a, 0x5, 0x8, 0x5, 0x2, 0x5a, 0x5b, 0x7, 0x9, 
    0x2, 0x2, 0x5b, 0x5c, 0x7, 0xf, 0x2, 0x2, 0x5c, 0x5d, 0x7, 0x12, 0x2, 
    0x2, 0x5d, 0x5e, 0x7, 0xc, 0x2, 0x2, 0x5e, 0x5f, 0x8, 0x6, 0x1, 0x2, 
    0x5f, 0x69, 0x3, 0x2, 0x2, 0x2, 0x60, 0x61, 0x7, 0x9, 0x2, 0x2, 0x61, 
    0x62, 0x7, 0x12, 0x2, 0x2, 0x62, 0x63, 0x5, 0xc, 0x7, 0x2, 0x63, 0x64, 
    0x3, 0x2, 0x2, 0x2, 0x64, 0x65, 0x8, 0x6, 0x1, 0x2, 0x65, 0x66, 0x7, 
    0xe, 0x2, 0x2, 0x66, 0x67, 0x8, 0x6, 0x1, 0x2, 0x67, 0x69, 0x3, 0x2, 
    0x2, 0x2, 0x68, 0x53, 0x3, 0x2, 0x2, 0x2, 0x68, 0x60, 0x3, 0x2, 0x2, 
    0x2, 0x69, 0xb, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x6b, 0x5, 0x10, 0x9, 0x2, 
    0x6b, 0x6c, 0x8, 0x7, 0x1, 0x2, 0x6c, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x6d, 
    0x6a, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x71, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x6d, 
    0x3, 0x2, 0x2, 0x2, 0x6f, 0x70, 0x3, 0x2, 0x2, 0x2, 0x70, 0xd, 0x3, 
    0x2, 0x2, 0x2, 0x71, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x72, 0x73, 0x9, 0x2, 
    0x2, 0x2, 0x73, 0xf, 0x3, 0x2, 0x2, 0x2, 0x74, 0x75, 0x7, 0x12, 0x2, 
    0x2, 0x75, 0x76, 0x8, 0x9, 0x1, 0x2, 0x76, 0x77, 0x7, 0x10, 0x2, 0x2, 
    0x77, 0x78, 0x7, 0x11, 0x2, 0x2, 0x78, 0x11, 0x3, 0x2, 0x2, 0x2, 0x79, 
    0x7a, 0x9, 0x3, 0x2, 0x2, 0x7a, 0x13, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x7c, 
    0x9, 0x4, 0x2, 0x2, 0x7c, 0x15, 0x3, 0x2, 0x2, 0x2, 0xe, 0x1a, 0x21, 
    0x24, 0x2a, 0x31, 0x3a, 0x41, 0x48, 0x4c, 0x50, 0x68, 0x6f, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

XMLParser::Initializer XMLParser::_init;
