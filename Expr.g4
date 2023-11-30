grammar Expr;
options { tokenVocab=ExprLexer; }

program
    : line* EOF
    ;

line
    : statement ENDL
    ;
    
statement
    : 'if' expression ENDL statement ENDL 'else' ENDL statement # IfStat
    | expression             # ExprStat
    ;
    
expression
    : op=(MUL|DIV) expression expression # MulDivExpr
    | op=(ADD|SUB) expression expression # AddSubExpr
    | op=(GT|LT|EQ|DF) expression expression # LogicExpr
    | NUM         # NumExpr
    ;

ADD:    '+';
SUB:    '-';
MUL:    '*';
DIV:    '/';
PARENL: '(';
PARENR: ')';
ASSIGN: '=';
GT: '>';
LT: '<';
EQ:  '==';
DF:   '!=';
NUM: [0-9]+ ;
ID: [a-zA-Z_][0-9a-zA-Z_]* ;
ENDL: [\n] ;
WS: [ \t\b]+ -> skip ;