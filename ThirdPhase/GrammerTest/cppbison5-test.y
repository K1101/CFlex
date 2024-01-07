%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
#include "lex.yy.h"
    extern FILE *yyin;
    extern int yylex();
%}


%token Key_return Key_break Key_continue Key_else Key_while Key_if Key_goto Key_dot Key_SEMICOL Key_comma Key_colon

%token Up_not Up_LogicalNot Up_and Up_xor Up_or

%token Op_Assign Op_Minus Op_Mult Op_Div Op_LessThenOrEqual Op_Equal Op_NotEqual Op_GreaterThen         Op_LessThen Op_GreaterThenOrEqual Op_Plus Op_and Op_Or

%token Close_Br Close_sqBr Open_sqBr Open_Br ClsP OpnP

%token Key_string Key_const Key_struct  Key_double Key_int Key_char Key_void Key_typedef Key_static Key_union Key_auto Key_register Key_extern Key_volatile

%token char_chr double_num integer_num identifier string_str
%%
program         :   {
                        printf("*** RUN ***\n");
                        printf("Terminate parser with Ctrl_D\n");
                }          
        |program commond
        ;

commond : func
        ;

func    : if_statement 
        ;

expression_optional :
        | expression
        ;

expression : assignment_expression
        | expression Key_comma assignment_expression
        ;

assignment_expression_crt :
        | assignment_expression_crt assignment_expression
        ;

assignment_expression :
        | identifier Op_Assign identifier
        ;

unary_operator : Up_and
        | Op_Mult
        | Op_Plus
        | Op_Minus
        | Up_LogicalNot
        | Up_not
        ;
/*
declaration_crt :
        | declaration_crt declaration
        ;
*/
//declaration : declaration_specifier_atlist init_declarator_crt Key_SEMICOL ;

//statement-----------------------------------------------------------
//compound_statement : Open_Br declaration_crt statement_crt Close_Br ;

expression_statement : expression_optional Key_SEMICOL ;

jump_statement : Key_goto identifier Key_SEMICOL
        | Key_continue Key_SEMICOL
        | Key_break Key_SEMICOL
        | Key_return expression_optional Key_SEMICOL
        ;

statement : expression_statement
//        | compound_statement
        | if_statement {printf("ooh my good lord i found if token to redoct !");}
        | while_statement
        | jump_statement
        ;


if_statement : Key_if OpnP expression ClsP statement {printf("inter in if without else statement !!");}
        ;
while_statement : Key_while OpnP expression ClsP statement ;


