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

%token Op_Assign Op_Minus Op_Mult Op_Div Op_LessThenOrEqual Op_Equal Op_NotEqual Op_GreaterThen		Op_LessThen Op_GreaterThenOrEqual Op_Plus Op_and Op_Or 

%token Close_Br Close_sqBr Open_sqBr Open_Br ClsP OpnP 

%token Key_string Key_const Key_struct  Key_double Key_int Key_char Key_void Key_typedef Key_static Key_union Key_auto Key_register Key_extern Key_volatile  

%token char_chr double_num integer_num identifier string_str
%%
program 	:   {
			printf("*** RUN ***\n");
			printf("Terminate parser with Ctrl_D\n");
		}	   
	|program commond
	;

commond : func
	;

func 	: declaration_specifier_crt direct_declarator declaration_crt compound_statement 
	;

declaration_specifier_crt :
	| declaration_specifier_crt declaration_specifier 
	;

declaration_specifier_atlist : declaration_specifier
	|declaration_specifier_atlist declaration_specifier
	;

declaration_specifier : storage_class_specifier
        | type_specifier
        | type_qualifier
	;

storage_class_specifier : Key_auto
        | Key_register
        | Key_static
        | Key_extern
        | Key_typedef
	;

type_specifier : Key_void
        | Key_char
        | Key_int
        | Key_double
        | struct_or_union_specifier
	;

struct_or_union_specifier : struct_or_union identifier
		Open_Br struct_declaration_atlist Close_Br
        | struct_or_union Open_Br struct_declaration_atlist Close_Br
        | struct_or_union identifier
	;

struct_or_union : Key_struct
        | Key_union
	;


struct_declaration_atlist : struct_declaration
	| struct_declaration_atlist struct_declaration
	;

struct_declaration : specifier_qualifier_crt struct_declarator_list;

specifier_qualifier_atlist: specifier_qualifier
	|specifier_qualifier_atlist specifier_qualifier
	;

specifier_qualifier_crt :
	|specifier_qualifier_crt specifier_qualifier
	;

specifier_qualifier : type_specifier
        | type_qualifier
	;


struct_declarator_list : struct_declarator
        | struct_declarator_list Key_comma struct_declarator
	;

struct_declarator : direct_declarator
        | direct_declarator Key_colon constant_expression
        | Key_colon constant_expression
	;


type_qualifier : Key_const
        | Key_volatile
	;

direct_declarator : identifier
        | OpnP direct_declarator ClsP
        | direct_declarator Open_sqBr constant_expression_optional Close_sqBr
        | direct_declarator OpnP parameter_type_list ClsP
        | direct_declarator OpnP identifier_crt ClsP
	;

constant_expression_optional :
	| constant_expression
	;

constant_expression : logical_or_expression ;

logical_or_expression :logical_and_expression
        | logical_or_expression Op_Or logical_and_expression
	;

logical_and_expression : inclusive_or_expression
        | logical_and_expression Op_and inclusive_or_expression
	;

inclusive_or_expression : exclusive_or_expression
	| inclusive_or_expression Up_or exclusive_or_expression
	;

exclusive_or_expression  : and_expression
	| exclusive_or_expression Up_xor and_expression
	;

and_expression : equality_expression
	| and_expression Up_and equality_expression
	;

equality_expression : relational_expression
        | equality_expression Op_Equal relational_expression
        | equality_expression Op_NotEqual relational_expression
	;

relational_expression : additive_expression
        | relational_expression Op_GreaterThen        additive_expression
        | relational_expression Op_LessThen           additive_expression
        | relational_expression Op_GreaterThenOrEqual additive_expression
        | relational_expression Op_LessThenOrEqual    additive_expression
	;


additive_expression : multiplicative_expression
        | additive_expression Op_Plus   multiplicative_expression
        | additive_expression Op_Minus  multiplicative_expression
	;

multiplicative_expression : cast_expression
        | multiplicative_expression Op_Mult cast_expression
        | multiplicative_expression Op_Div  cast_expression
	;

cast_expression : unary_expression
        | OpnP type_name ClsP cast_expression
	;

unary_expression : postfix_expression
        | unary_operator cast_expression
	;

postfix_expression : primary_expression
        | postfix_expression Open_sqBr expression Close_sqBr
        | postfix_expression OpnP assignment_expression_crt ClsP
        | postfix_expression Key_dot identifier

primary_expression : identifier
        | constant
        | string_str 
        | OpnP expression ClsP
	;

constant : integer_num 
        | double_num
	| char_chr 
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

assignment_expression : logical_or_expression
        | unary_expression Op_Assign assignment_expression
	;

unary_operator : Up_and
        | Op_Mult
        | Op_Plus
        | Op_Minus
        | Up_LogicalNot
        | Up_not
	;

type_name : specifier_qualifier_atlist direct_abstract_declarator_optional

parameter_type_list_optional :
	| parameter_type_list
	;

parameter_type_list : parameter_list
	| parameter_type_list parameter_list
	;

parameter_list : parameter_declaration
        | parameter_list Key_comma parameter_declaration
	;

parameter_declaration : declaration_specifier_atlist direct_declarator
        | declaration_specifier_atlist direct_abstract_declarator
	| declaration_specifier_atlist
	;

direct_abstract_declarator_optional :
	| direct_abstract_declarator
	;

direct_abstract_declarator : OpnP direct_abstract_declarator ClsP
        | direct_abstract_declarator_optional Open_sqBr constant_expression_optional Close_sqBr
        | direct_abstract_declarator_optional OpnP parameter_type_list_optional ClsP
	;


declaration_crt :
	| declaration_crt declaration
	;


declaration : declaration_specifier_atlist init_declarator_crt Key_SEMICOL ;

init_declarator_crt :
	| init_declarator_crt init_declarator
	;

init_declarator : direct_declarator
        | direct_declarator Op_Assign initializer
	;

initializer : assignment_expression
        | Open_Br initializer_list Close_Br
        | Open_Br initializer_list Key_comma Close_Br
	;

initializer_list : initializer
        | initializer_list Key_comma initializer
	;

compound_statement : Open_Br declaration_crt statement_crt Close_Br ;

statement_crt :
	| statement_crt statement
	;

statement : expression_statement
        | compound_statement
        | if_statement {printf("ooh my good lord i found if token to redoct !");}
        | while_statement
        | jump_statement
	;

expression_statement : expression_optional Key_SEMICOL ;

if_statement : Key_if //OpnP expression ClsP statement
	     {printf("inter in if without else statement !!");}
       	| Key_if OpnP expression ClsP statement Key_else statement
	;

while_statement : Key_while OpnP expression ClsP statement ;

jump_statement : Key_goto identifier Key_SEMICOL
        | Key_continue Key_SEMICOL
        | Key_break Key_SEMICOL
        | Key_return expression_optional Key_SEMICOL
	;

identifier_crt :
	| identifier_crt identifier
	;
%%
#include "lex.yy.h"
/*
int main (int argc, char *argv[]){

    // parsing
    int flag;
    yyin = fopen(argv[1], "r");
    flag = yyparse();
    fclose(yyin);

    return flag;
}
*/
