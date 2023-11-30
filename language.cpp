#include "MyVisitor.h"

int main(int argc, char const *argv[]) {
    if (argc <= 1)
        return -1;
    std::ifstream is;
    is.open(argv[1]);
        antlr4::ANTLRInputStream input(is);
    ExprLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    ExprParser parser(&tokens);
    auto tree = parser.program();
    MyVisitor eval;
    std::cout << "comienza";
    eval.visitProgram(tree);
    return 0;
}