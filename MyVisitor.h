#include <llvm/IR/LLVMContext.h>
#include <llvm/IR/Module.h>
#include <llvm/IR/IRBuilder.h>
#include <llvm/IR/Function.h>
#include <llvm/IR/BasicBlock.h>
#include <llvm/IR/Constants.h>
#include <llvm/IR/Type.h>
#include <llvm/ADT/APFloat.h>
#include <llvm/ADT/APInt.h>
#include <llvm/Support/raw_ostream.h>

#include <system_error>


#include <stack>
#include <memory>
#include <string>
#include <map>
#include "ExprBaseVisitor.h"
#include "ExprLexer.h"
#include "ExprParser.h"
using namespace llvm;
class MyVisitor : ExprBaseVisitor {
    //LLVM basicos
    std::unique_ptr<LLVMContext> context;
    std::unique_ptr<Module> module;
    std::unique_ptr<IRBuilder<>> builder;
    Value* one;
public:
    MyVisitor() {
        context = std::make_unique<LLVMContext>();
        module = std::make_unique<Module>("Module A", *context);
        builder = std::make_unique<IRBuilder<>>(*context);
        one = ConstantFP::get(builder->getFloatTy(), 1.0);
    }
    ~MyVisitor() {}
    std::any visitProgram(ExprParser::ProgramContext* ctx) {
        std::cout << "program\n";
        visitChildren(ctx);
        // IR
        std::error_code errorCode;
        raw_fd_stream outLL("ir.ll", errorCode);
        module->print(outLL, nullptr);
        return 0;
    }
private:
    std::any visitLine(ExprParser::LineContext* ctx) {
        std::cout << "line\n";
        visit(ctx->statement());
        return 0;
    }
    std::any visitIfStat(ExprParser::IfStatContext* ctx) {
        std::cout << "if\n";
        FunctionType* func_types = FunctionType::get(builder->getDoubleTy(), {}, false);
        Function* func = Function::Create(func_types, Function::ExternalLinkage, "__if_stat", *module);
        
        BasicBlock *bb = BasicBlock::Create(*context, "entry", func);
        BasicBlock *bbtrue = BasicBlock::Create(*context, "true", func);
        BasicBlock *bbfalse = BasicBlock::Create(*context, "false", func);
        builder->SetInsertPoint(bb);
        visit(ctx->statement(0));
        visit(ctx->statement(1));
        visit(ctx->expression());
        //Value* expr = std::any_cast<Value*>(visit(ctx->expression()));
        //Value* cond = builder->CreateFCmpUEQ(expr, one, "cond");


        return 0;
    }
    std::any visitExprStat(ExprParser::ExprStatContext* ctx) {
        std::cout << "exprstat\n";
        FunctionType* func_types = FunctionType::get(builder->getDoubleTy(), {}, false);
        Function* func = Function::Create(func_types, Function::ExternalLinkage, "__expr_stat", *module);
        BasicBlock *bb = BasicBlock::Create(*context, "entry", func);

        builder->SetInsertPoint(bb);
        Value* ret = std::any_cast<Value*>(visit(ctx->expression()));
        builder->CreateRet(ret);
        return 0;
    }
    std::any visitMulDivExpr(ExprParser::MulDivExprContext* ctx) {
        std::cout << "mul div\n";
        Value* lvalue = std::any_cast<Value*>(visit(ctx->expression(0)));
        Value* rvalue = std::any_cast<Value*>(visit(ctx->expression(1)));
        Value* result;
        if (ctx->op->getType() == ExprParser::MUL) {
            result = builder->CreateFAdd(lvalue, rvalue, "op.add");
        } else {
            result = builder->CreateFSub(lvalue, rvalue, "op.res");
        }
        return result;
    }
    std::any visitAddSubExpr(ExprParser::AddSubExprContext* ctx) {
        std::cout << "add sub\n";
        Value* lvalue = std::any_cast<Value*>(visit(ctx->expression(0)));
        Value* rvalue = std::any_cast<Value*>(visit(ctx->expression(1)));
        Value* result;
        if (ctx->op->getType() == ExprParser::ADD) {
            result = builder->CreateFAdd(lvalue, rvalue, "op.add");
        } else {
            result = builder->CreateFSub(lvalue, rvalue, "op.res");
        }
        return result;
    }
    std::any visitLogicExpr(ExprParser::LogicExprContext* ctx) {
        std::cout << "logical\n";
        Value* lvalue = std::any_cast<Value*>(visit(ctx->expression(0)));
        Value* rvalue = std::any_cast<Value*>(visit(ctx->expression(1)));
        Value* result;
        switch (ctx->op->getType())
        {
        case ExprParser::EQ:
            result = builder->CreateFCmpUEQ(lvalue, rvalue, "op.eq");
            break;
        case ExprParser::DF:
            result = builder->CreateFCmpUNE(lvalue, rvalue, "op.df");
            break;
        case ExprParser::GT:
            result = builder->CreateFCmpUGT(lvalue, rvalue, "op.gt");
            break;
        case ExprParser::LT:
            result = builder->CreateFCmpULT(lvalue, rvalue, "op.lt");
            break;
        default:
            break;
        }
        builder->CreateUIToFP(result, Type::getFloatTy(*context), "booltmp");
        return result;
    }
    std::any visitNumExpr(ExprParser::NumExprContext* ctx) {
        std::cout << "num\n";
        Value* num = ConstantFP::get(builder->getFloatTy(), std::stoi(ctx->NUM()->getText()));
        return num;
    }
};