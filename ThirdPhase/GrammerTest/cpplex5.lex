%option noyywrap

%{
//#include <iostream>
#include "cppbison.tab.h"
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    extern FILE *yyin;
    extern FILE *yyout;
    void ret_print(char *token_type);
%}



%%


if		{ printf("lex find Key_if token") ;  return (Key_if);  };
else 		{ printf("lex find Key_else token") ;  return (Key_else);  };
while 		{ printf("lex find Key_while token") ;  return (Key_while);  };
return 		{ printf("lex find Key_return token") ;  return (Key_return);  };
break    	{ printf("lex find Key_break token") ;  return (Key_break);  };
continue    	{ printf("lex find Key_continue token") ;  return (Key_continue);  };
goto    	{ printf("lex find Key_goto token") ;  return (Key_goto);  };
[.]	    	{ printf("lex find Key_dot token") ;  return (Key_dot);  };
[;]	    	{ printf("lex find Key_SEMICOL token") ;  return (Key_SEMICOL);  };
[,]	    	{ printf("lex find Key_comma token") ;  return (Key_comma);  };
[:]	    	{ printf("lex find Key_colon token") ;  return (Key_colon);  };
int	    	{ printf("lex find Key_int token") ;  return (Key_int);  };
string    	{ printf("lex find Key_string token") ;  return (Key_string);  };
char    	{ printf("lex find Key_char token") ;  return (Key_char);  };
double    	{ printf("lex find Key_double token") ;  return (Key_double);  };
void    	{ printf("lex find Key_void token") ;  return (Key_void);  };
const    	{ printf("lex find Key_const token") ;  return (Key_const);  };
struct    	{ printf("lex find Key_struct token") ;  return (Key_struct);  };
static    	{ printf("lex find Key_static token") ;  return (Key_static);  };
auto    	{ printf("lex find Key_auto token") ;  return (Key_auto);  };
typedef    	{ printf("lex find Key_typedef token") ;  return (Key_typedef);  };
union    	{ printf("lex find Key_union token") ;  return (Key_union);  };
register    	{ printf("lex find Key_register token") ;  return (Key_register);  };
extern    	{ printf("lex find Key_extern token") ;  return (Key_extern);  };
volatile    	{ printf("lex find Key_volatile token") ;  return (Key_volatile);  };

==    		{ printf("lex find Op_Equal token") ;  return (Op_Equal);  };
!=   		{ printf("lex find Op_NotEqual token") ;  return (Op_NotEqual);  };
=    		{ printf("lex find Op_Assign token") ;  return (Op_Assign);  };
[\*]    	{ printf("lex find Op_Mult token") ;  return (Op_Mult);  };
[\\]    	{ printf("lex find Op_Div token") ;  return (Op_Div);  };
[\+]    	{ printf("lex find Op_Plus token") ;  return (Op_Plus);  };
[\-]    	{ printf("lex find Op_Minus token") ;  return (Op_Minus);  };
[\<]    	{ printf("lex find Op_LessThen token") ;  return (Op_LessThen);  };
[\>]    	{ printf("lex find Op_GreaterThen token") ;  return (Op_GreaterThen);  };
(<=|=<)		{ printf("lex find Op_LessThenOrEqual token") ;  return (Op_LessThenOrEqual);  };
(=>|>=)		{ printf("lex find Op_GreaterThenOrEqual token") ;  return (Op_GreaterThenOrEqual);  };
[\&]		{ printf("lex find Up_and token") ;  return (Up_and);  };
&&		{ printf("lex find Op_and token") ;  return (Op_and);  };
[\|]		{ printf("lex find Up_or token") ;  return (Up_or);  };
(\|\|)		{ printf("lex find Op_and token") ;  return (Op_and);  };
[\~]		{ printf("lex find Up_LogicalNot token") ;  return (Up_LogicalNot);  };
[\!]		{ printf("lex find Up_not token") ;  return (Up_not);  };
[\^]		{ printf("lex find Up_xor token") ;  return (Up_xor);  };




[a-zA-Z]			{ printf("lex find char_chr token") ;  return (char_chr);  }; 
[0-9]+\.[0-9]+  		{ printf("lex find double_num token") ;  return (double_num);  };
[0-9]+          		{ printf("lex find integer_num token") ;  return (integer_num);  };
[a-zA-Z]+[0-9]* 		{ printf("lex find identifier token") ;  return (identifier);  };
(\"|\')(" "*[a-zA-Z0-9]*" "*)*(\"|\') 	{ printf("lex find string_str token") ;  return (string_str);  };


[\(]    	{ printf("lex find OpnP  token") ;  return (OpnP );  };
[\)]    	{ printf("lex find ClsP  token") ;  return (ClsP );  };
[\{]    	{ printf("lex find Open_Br token") ;  return (Open_Br);  };
[\}]    	{ printf("lex find Close_Br token") ;  return (Close_Br);  };
[\[]            { printf("lex find Open_sqBr token") ;  return (Open_sqBr);  };
[\]]		{ printf("lex find Close_sqBr token") ;  return (Close_sqBr);  };


%%	

