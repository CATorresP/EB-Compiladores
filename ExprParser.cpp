
// Generated from Expr.g4 by ANTLR 4.13.1


#include "ExprVisitor.h"

#include "ExprParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct ExprParserStaticData final {
  ExprParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  ExprParserStaticData(const ExprParserStaticData&) = delete;
  ExprParserStaticData(ExprParserStaticData&&) = delete;
  ExprParserStaticData& operator=(const ExprParserStaticData&) = delete;
  ExprParserStaticData& operator=(ExprParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag exprParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
ExprParserStaticData *exprParserStaticData = nullptr;

void exprParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (exprParserStaticData != nullptr) {
    return;
  }
#else
  assert(exprParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<ExprParserStaticData>(
    std::vector<std::string>{
      "program", "line", "statement", "expression"
    },
    std::vector<std::string>{
      "", "'if'", "'else'", "'+'", "'-'", "'*'", "'/'", "'('", "')'", "'='", 
      "'>'", "'<'", "'=='", "'!='"
    },
    std::vector<std::string>{
      "", "", "", "ADD", "SUB", "MUL", "DIV", "PARENL", "PARENR", "ASSIGN", 
      "GT", "LT", "EQ", "DF", "NUM", "ID", "ENDL", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,17,47,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,1,0,5,0,10,8,0,10,0,12,0,13,
  	9,0,1,0,1,0,1,1,1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,3,2,30,
  	8,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,3,3,45,8,3,1,
  	3,0,0,4,0,2,4,6,0,3,1,0,5,6,1,0,3,4,1,0,10,13,47,0,11,1,0,0,0,2,16,1,
  	0,0,0,4,29,1,0,0,0,6,44,1,0,0,0,8,10,3,2,1,0,9,8,1,0,0,0,10,13,1,0,0,
  	0,11,9,1,0,0,0,11,12,1,0,0,0,12,14,1,0,0,0,13,11,1,0,0,0,14,15,5,0,0,
  	1,15,1,1,0,0,0,16,17,3,4,2,0,17,18,5,16,0,0,18,3,1,0,0,0,19,20,5,1,0,
  	0,20,21,3,6,3,0,21,22,5,16,0,0,22,23,3,4,2,0,23,24,5,16,0,0,24,25,5,2,
  	0,0,25,26,5,16,0,0,26,27,3,4,2,0,27,30,1,0,0,0,28,30,3,6,3,0,29,19,1,
  	0,0,0,29,28,1,0,0,0,30,5,1,0,0,0,31,32,7,0,0,0,32,33,3,6,3,0,33,34,3,
  	6,3,0,34,45,1,0,0,0,35,36,7,1,0,0,36,37,3,6,3,0,37,38,3,6,3,0,38,45,1,
  	0,0,0,39,40,7,2,0,0,40,41,3,6,3,0,41,42,3,6,3,0,42,45,1,0,0,0,43,45,5,
  	14,0,0,44,31,1,0,0,0,44,35,1,0,0,0,44,39,1,0,0,0,44,43,1,0,0,0,45,7,1,
  	0,0,0,3,11,29,44
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  exprParserStaticData = staticData.release();
}

}

ExprParser::ExprParser(TokenStream *input) : ExprParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

ExprParser::ExprParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  ExprParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *exprParserStaticData->atn, exprParserStaticData->decisionToDFA, exprParserStaticData->sharedContextCache, options);
}

ExprParser::~ExprParser() {
  delete _interpreter;
}

const atn::ATN& ExprParser::getATN() const {
  return *exprParserStaticData->atn;
}

std::string ExprParser::getGrammarFileName() const {
  return "Expr.g4";
}

const std::vector<std::string>& ExprParser::getRuleNames() const {
  return exprParserStaticData->ruleNames;
}

const dfa::Vocabulary& ExprParser::getVocabulary() const {
  return exprParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView ExprParser::getSerializedATN() const {
  return exprParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

ExprParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::ProgramContext::EOF() {
  return getToken(ExprParser::EOF, 0);
}

std::vector<ExprParser::LineContext *> ExprParser::ProgramContext::line() {
  return getRuleContexts<ExprParser::LineContext>();
}

ExprParser::LineContext* ExprParser::ProgramContext::line(size_t i) {
  return getRuleContext<ExprParser::LineContext>(i);
}


size_t ExprParser::ProgramContext::getRuleIndex() const {
  return ExprParser::RuleProgram;
}


std::any ExprParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::ProgramContext* ExprParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, ExprParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(11);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 31866) != 0)) {
      setState(8);
      line();
      setState(13);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(14);
    match(ExprParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LineContext ------------------------------------------------------------------

ExprParser::LineContext::LineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::StatementContext* ExprParser::LineContext::statement() {
  return getRuleContext<ExprParser::StatementContext>(0);
}

tree::TerminalNode* ExprParser::LineContext::ENDL() {
  return getToken(ExprParser::ENDL, 0);
}


size_t ExprParser::LineContext::getRuleIndex() const {
  return ExprParser::RuleLine;
}


std::any ExprParser::LineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitLine(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::LineContext* ExprParser::line() {
  LineContext *_localctx = _tracker.createInstance<LineContext>(_ctx, getState());
  enterRule(_localctx, 2, ExprParser::RuleLine);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(16);
    statement();
    setState(17);
    match(ExprParser::ENDL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

ExprParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExprParser::StatementContext::getRuleIndex() const {
  return ExprParser::RuleStatement;
}

void ExprParser::StatementContext::copyFrom(StatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ExprStatContext ------------------------------------------------------------------

ExprParser::ExpressionContext* ExprParser::ExprStatContext::expression() {
  return getRuleContext<ExprParser::ExpressionContext>(0);
}

ExprParser::ExprStatContext::ExprStatContext(StatementContext *ctx) { copyFrom(ctx); }


std::any ExprParser::ExprStatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitExprStat(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IfStatContext ------------------------------------------------------------------

ExprParser::ExpressionContext* ExprParser::IfStatContext::expression() {
  return getRuleContext<ExprParser::ExpressionContext>(0);
}

std::vector<tree::TerminalNode *> ExprParser::IfStatContext::ENDL() {
  return getTokens(ExprParser::ENDL);
}

tree::TerminalNode* ExprParser::IfStatContext::ENDL(size_t i) {
  return getToken(ExprParser::ENDL, i);
}

std::vector<ExprParser::StatementContext *> ExprParser::IfStatContext::statement() {
  return getRuleContexts<ExprParser::StatementContext>();
}

ExprParser::StatementContext* ExprParser::IfStatContext::statement(size_t i) {
  return getRuleContext<ExprParser::StatementContext>(i);
}

ExprParser::IfStatContext::IfStatContext(StatementContext *ctx) { copyFrom(ctx); }


std::any ExprParser::IfStatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitIfStat(this);
  else
    return visitor->visitChildren(this);
}
ExprParser::StatementContext* ExprParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 4, ExprParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(29);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::T__0: {
        _localctx = _tracker.createInstance<ExprParser::IfStatContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(19);
        match(ExprParser::T__0);
        setState(20);
        expression();
        setState(21);
        match(ExprParser::ENDL);
        setState(22);
        statement();
        setState(23);
        match(ExprParser::ENDL);
        setState(24);
        match(ExprParser::T__1);
        setState(25);
        match(ExprParser::ENDL);
        setState(26);
        statement();
        break;
      }

      case ExprParser::ADD:
      case ExprParser::SUB:
      case ExprParser::MUL:
      case ExprParser::DIV:
      case ExprParser::GT:
      case ExprParser::LT:
      case ExprParser::EQ:
      case ExprParser::DF:
      case ExprParser::NUM: {
        _localctx = _tracker.createInstance<ExprParser::ExprStatContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(28);
        expression();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

ExprParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExprParser::ExpressionContext::getRuleIndex() const {
  return ExprParser::RuleExpression;
}

void ExprParser::ExpressionContext::copyFrom(ExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- MulDivExprContext ------------------------------------------------------------------

std::vector<ExprParser::ExpressionContext *> ExprParser::MulDivExprContext::expression() {
  return getRuleContexts<ExprParser::ExpressionContext>();
}

ExprParser::ExpressionContext* ExprParser::MulDivExprContext::expression(size_t i) {
  return getRuleContext<ExprParser::ExpressionContext>(i);
}

tree::TerminalNode* ExprParser::MulDivExprContext::MUL() {
  return getToken(ExprParser::MUL, 0);
}

tree::TerminalNode* ExprParser::MulDivExprContext::DIV() {
  return getToken(ExprParser::DIV, 0);
}

ExprParser::MulDivExprContext::MulDivExprContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any ExprParser::MulDivExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitMulDivExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LogicExprContext ------------------------------------------------------------------

std::vector<ExprParser::ExpressionContext *> ExprParser::LogicExprContext::expression() {
  return getRuleContexts<ExprParser::ExpressionContext>();
}

ExprParser::ExpressionContext* ExprParser::LogicExprContext::expression(size_t i) {
  return getRuleContext<ExprParser::ExpressionContext>(i);
}

tree::TerminalNode* ExprParser::LogicExprContext::GT() {
  return getToken(ExprParser::GT, 0);
}

tree::TerminalNode* ExprParser::LogicExprContext::LT() {
  return getToken(ExprParser::LT, 0);
}

tree::TerminalNode* ExprParser::LogicExprContext::EQ() {
  return getToken(ExprParser::EQ, 0);
}

tree::TerminalNode* ExprParser::LogicExprContext::DF() {
  return getToken(ExprParser::DF, 0);
}

ExprParser::LogicExprContext::LogicExprContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any ExprParser::LogicExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitLogicExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumExprContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::NumExprContext::NUM() {
  return getToken(ExprParser::NUM, 0);
}

ExprParser::NumExprContext::NumExprContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any ExprParser::NumExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitNumExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddSubExprContext ------------------------------------------------------------------

std::vector<ExprParser::ExpressionContext *> ExprParser::AddSubExprContext::expression() {
  return getRuleContexts<ExprParser::ExpressionContext>();
}

ExprParser::ExpressionContext* ExprParser::AddSubExprContext::expression(size_t i) {
  return getRuleContext<ExprParser::ExpressionContext>(i);
}

tree::TerminalNode* ExprParser::AddSubExprContext::ADD() {
  return getToken(ExprParser::ADD, 0);
}

tree::TerminalNode* ExprParser::AddSubExprContext::SUB() {
  return getToken(ExprParser::SUB, 0);
}

ExprParser::AddSubExprContext::AddSubExprContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any ExprParser::AddSubExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitAddSubExpr(this);
  else
    return visitor->visitChildren(this);
}
ExprParser::ExpressionContext* ExprParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 6, ExprParser::RuleExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(44);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::MUL:
      case ExprParser::DIV: {
        _localctx = _tracker.createInstance<ExprParser::MulDivExprContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(31);
        antlrcpp::downCast<MulDivExprContext *>(_localctx)->op = _input->LT(1);
        _la = _input->LA(1);
        if (!(_la == ExprParser::MUL

        || _la == ExprParser::DIV)) {
          antlrcpp::downCast<MulDivExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(32);
        expression();
        setState(33);
        expression();
        break;
      }

      case ExprParser::ADD:
      case ExprParser::SUB: {
        _localctx = _tracker.createInstance<ExprParser::AddSubExprContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(35);
        antlrcpp::downCast<AddSubExprContext *>(_localctx)->op = _input->LT(1);
        _la = _input->LA(1);
        if (!(_la == ExprParser::ADD

        || _la == ExprParser::SUB)) {
          antlrcpp::downCast<AddSubExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(36);
        expression();
        setState(37);
        expression();
        break;
      }

      case ExprParser::GT:
      case ExprParser::LT:
      case ExprParser::EQ:
      case ExprParser::DF: {
        _localctx = _tracker.createInstance<ExprParser::LogicExprContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(39);
        antlrcpp::downCast<LogicExprContext *>(_localctx)->op = _input->LT(1);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 15360) != 0))) {
          antlrcpp::downCast<LogicExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(40);
        expression();
        setState(41);
        expression();
        break;
      }

      case ExprParser::NUM: {
        _localctx = _tracker.createInstance<ExprParser::NumExprContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(43);
        match(ExprParser::NUM);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void ExprParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  exprParserInitialize();
#else
  ::antlr4::internal::call_once(exprParserOnceFlag, exprParserInitialize);
#endif
}
