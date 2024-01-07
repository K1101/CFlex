%option noyywrap

%{
//#include <iostream>
#include "cppBison33.tab.h"
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    extern FILE *yyin;
    extern FILE *yyout;
    void ret_print(char *token_type);
%}



%%


if		return(Key_if);
else 		return(Key_else);
while 		return(Key_while);
return 		return(Key_return);
break    	return(Key_break);
continue    	return(Key_continue);
goto    	return(Key_goto);
[.]	    	return(Key_dot);
[;]	    	return(Key_SEMICOL);
[,]	    	return(Key_comma);
[:]	    	return(Key_colon);
int	    	return(Key_int);
string    	return(Key_string);
char    	return(Key_char);
double    	return(Key_double);
void    	return(Key_void);
const    	return(Key_const);
struct    	return(Key_struct);
static    	return(Key_static);
auto    	return(Key_auto);
typedef    	return(Key_typedef);
union    	return(Key_union);
register    	return(Key_register);
extern    	return(Key_extern);
volatile    	return(Key_volatile);

==    		return(Op_Equal);
!=   		return(Op_NotEqual);
=    		return(Op_Assign);
[\*]    	return(Op_Mult);
[\\]    	return(Op_Div);
[\+]    	return(Op_Plus);
[\-]    	return(Op_Minus);
[\<]    	return(Op_LessThen);
[\>]    	return(Op_GreaterThen);
(<=|=<)		return(Op_LessThenOrEqual);
(=>|>=)		return(Op_GreaterThenOrEqual);
[\&]		return(Up_and);
&&		return(Op_and);
[\|]		return(Up_or);
(\|\|)		return(Op_and);
[\~]		return(Up_LogicalNot);
[\!]		return(Up_not);
[\^]		return(Up_xor);




[a-zA-Z]			return(char_chr); 
[0-9]+\.[0-9]+  		return(double_num);
[0-9]+          		return(integer_num);
[a-zA-Z]+[0-9]* 		return(identifier);
(\"|\')(" "*[a-zA-Z0-9]*" "*)*(\"|\') 	return(string_str);


[\(]    	return(OpnP );
[\)]    	return(ClsP );
[\{]    	return(Open_Br);
[\}]    	return(Close_Br);
[\[]            return(Open_sqBr);
[\]]		return(Close_sqBr);


%%	

