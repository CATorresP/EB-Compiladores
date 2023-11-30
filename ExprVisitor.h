
// Generated from Expr.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "ExprParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by ExprParser.
 */
class  ExprVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by ExprParser.
   */
    virtual std::any visitProgram(ExprParser::ProgramContext *context) = 0;

    virtual std::any visitLine(ExprParser::LineContext *context) = 0;

    virtual std::any visitIfStat(ExprParser::IfStatContext *context) = 0;

    virtual std::any visitExprStat(ExprParser::ExprStatContext *context) = 0;

    virtual std::any visitMulDivExpr(ExprParser::MulDivExprContext *context) = 0;

    virtual std::any visitAddSubExpr(ExprParser::AddSubExprContext *context) = 0;

    virtual std::any visitLogicExpr(ExprParser::LogicExprContext *context) = 0;

    virtual std::any visitNumExpr(ExprParser::NumExprContext *context) = 0;


};

