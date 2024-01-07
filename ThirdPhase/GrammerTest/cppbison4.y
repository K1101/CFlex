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
commond		:	Key_if{ printf("getting if token");} 
		|	Key_while{printf("bbbbbbbbbbison i found while ");}
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
