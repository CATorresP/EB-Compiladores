
// Generated from Expr.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "ExprVisitor.h"


/**
 * This class provides an empty implementation of ExprVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  ExprBaseVisitor : public ExprVisitor {
public:

  virtual std::any visitProgram(ExprParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLine(ExprParser::LineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfStat(ExprParser::IfStatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExprStat(ExprParser::ExprStatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMulDivExpr(ExprParser::MulDivExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAddSubExpr(ExprParser::AddSubExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicExpr(ExprParser::LogicExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumExpr(ExprParser::NumExprContext *ctx) override {
    return visitChildren(ctx);
  }


};

