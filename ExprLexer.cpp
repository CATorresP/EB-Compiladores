
// Generated from Expr.g4 by ANTLR 4.13.1


#include "ExprLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct ExprLexerStaticData final {
  ExprLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  ExprLexerStaticData(const ExprLexerStaticData&) = delete;
  ExprLexerStaticData(ExprLexerStaticData&&) = delete;
  ExprLexerStaticData& operator=(const ExprLexerStaticData&) = delete;
  ExprLexerStaticData& operator=(ExprLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag exprlexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
ExprLexerStaticData *exprlexerLexerStaticData = nullptr;

void exprlexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (exprlexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(exprlexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<ExprLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "ADD", "SUB", "MUL", "DIV", "PARENL", "PARENR", "ASSIGN", 
      "GT", "LT", "EQ", "DF", "NUM", "ID", "ENDL", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,17,88,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,2,1,2,1,3,
  	1,3,1,4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,1,8,1,8,1,9,1,9,1,10,1,10,1,11,1,
  	11,1,11,1,12,1,12,1,12,1,13,4,13,69,8,13,11,13,12,13,70,1,14,1,14,5,14,
  	75,8,14,10,14,12,14,78,9,14,1,15,1,15,1,16,4,16,83,8,16,11,16,12,16,84,
  	1,16,1,16,0,0,17,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,
  	23,12,25,13,27,14,29,15,31,16,33,17,1,0,5,1,0,48,57,3,0,65,90,95,95,97,
  	122,4,0,48,57,65,90,95,95,97,122,1,0,10,10,2,0,8,9,32,32,90,0,1,1,0,0,
  	0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,
  	0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,
  	0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,1,
  	35,1,0,0,0,3,38,1,0,0,0,5,43,1,0,0,0,7,45,1,0,0,0,9,47,1,0,0,0,11,49,
  	1,0,0,0,13,51,1,0,0,0,15,53,1,0,0,0,17,55,1,0,0,0,19,57,1,0,0,0,21,59,
  	1,0,0,0,23,61,1,0,0,0,25,64,1,0,0,0,27,68,1,0,0,0,29,72,1,0,0,0,31,79,
  	1,0,0,0,33,82,1,0,0,0,35,36,5,105,0,0,36,37,5,102,0,0,37,2,1,0,0,0,38,
  	39,5,101,0,0,39,40,5,108,0,0,40,41,5,115,0,0,41,42,5,101,0,0,42,4,1,0,
  	0,0,43,44,5,43,0,0,44,6,1,0,0,0,45,46,5,45,0,0,46,8,1,0,0,0,47,48,5,42,
  	0,0,48,10,1,0,0,0,49,50,5,47,0,0,50,12,1,0,0,0,51,52,5,40,0,0,52,14,1,
  	0,0,0,53,54,5,41,0,0,54,16,1,0,0,0,55,56,5,61,0,0,56,18,1,0,0,0,57,58,
  	5,62,0,0,58,20,1,0,0,0,59,60,5,60,0,0,60,22,1,0,0,0,61,62,5,61,0,0,62,
  	63,5,61,0,0,63,24,1,0,0,0,64,65,5,33,0,0,65,66,5,61,0,0,66,26,1,0,0,0,
  	67,69,7,0,0,0,68,67,1,0,0,0,69,70,1,0,0,0,70,68,1,0,0,0,70,71,1,0,0,0,
  	71,28,1,0,0,0,72,76,7,1,0,0,73,75,7,2,0,0,74,73,1,0,0,0,75,78,1,0,0,0,
  	76,74,1,0,0,0,76,77,1,0,0,0,77,30,1,0,0,0,78,76,1,0,0,0,79,80,7,3,0,0,
  	80,32,1,0,0,0,81,83,7,4,0,0,82,81,1,0,0,0,83,84,1,0,0,0,84,82,1,0,0,0,
  	84,85,1,0,0,0,85,86,1,0,0,0,86,87,6,16,0,0,87,34,1,0,0,0,4,0,70,76,84,
  	1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  exprlexerLexerStaticData = staticData.release();
}

}

ExprLexer::ExprLexer(CharStream *input) : Lexer(input) {
  ExprLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *exprlexerLexerStaticData->atn, exprlexerLexerStaticData->decisionToDFA, exprlexerLexerStaticData->sharedContextCache);
}

ExprLexer::~ExprLexer() {
  delete _interpreter;
}

std::string ExprLexer::getGrammarFileName() const {
  return "Expr.g4";
}

const std::vector<std::string>& ExprLexer::getRuleNames() const {
  return exprlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& ExprLexer::getChannelNames() const {
  return exprlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& ExprLexer::getModeNames() const {
  return exprlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& ExprLexer::getVocabulary() const {
  return exprlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView ExprLexer::getSerializedATN() const {
  return exprlexerLexerStaticData->serializedATN;
}

const atn::ATN& ExprLexer::getATN() const {
  return *exprlexerLexerStaticData->atn;
}




void ExprLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  exprlexerLexerInitialize();
#else
  ::antlr4::internal::call_once(exprlexerLexerOnceFlag, exprlexerLexerInitialize);
#endif
}
