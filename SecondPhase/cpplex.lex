%{
  #include <iostream>
  using namespace std;
  extern int yylex();
%}
%option noyywrap


%%
[\t\n]         	;
if    		{ cout << "(LexToken<if_KeyWord>)" << "\n"; }
else    	{ cout << "(LexToken<else_KeyWord>)" << "\n"; }
while    	{ cout << "(LexToken<while_KeyWord>)" << "\n"; }
for    		{ cout << "(LexToken<for_KeyWord)"<< "\n" ;}


==    		{ cout << "(LexToken<Op_Equal>)" << "\n" ;}
!=   		{ cout << "(LexToken<Op_NotEqual>)"<< "\n" ;}
=    		{ cout << "(LexToken<Op_Assign>)" << "\n" ;}
[\*]    	{ cout << "(LexToken<Op_Mult>)" << "\n" ;}
[\\]    	{ cout << "(LexToken<Op_Div>)" << "\n" ;}
[\+]    	{ cout << "(LexToken<Op_Plus>)" << "\n" ;}
[\-]    	{ cout << "(LexToken<Op_Minus>)" << "\n" ;}
[\<]    	{ cout << "(LexToken<Op_LessThen>)" << "\n" ;}
[\>]    	{ cout << "(LexToken<Op_GreaterThen>)" << "\n" ;}


[0-9]+[a-zA-Z_]+ 		{ cout << "(LexToken<INVALID>,val:"<< yytext <<")"<< "\n" ;}


[0-9]+\.[0-9]+  		{ cout << "(LexToken<Floating-PointNumber>,val:"<< yytext <<")"<< "\n" ;}
[0-9]+          		{ cout << "(LexToken<integer>,val:" << yytext <<")"<<"\n";}
[a-zA-Z]+[0-9]* 		{ cout << "(LexToken<Identifier>,val:" << yytext <<")" << "\n" ;}
(\"|\')(" "*[a-zA-Z0-9]*" "*)*(\"|\') 	{ cout << "(LexToken<String>,val:" << yytext <<")" << "\n" ;}

[\(]    	{ cout << "(LexToken<OpenParenthese>)" << "\n" ;}
[\)]    	{ cout << "(LexToken<CloseParenthese>)" << "\n" ;}
[\{]    	{ cout << "(LexToken<open {>)" << "\n" ;}
[\}]    	{ cout << "(LexToken<Close } >)" << "\n" ;}

%%



int main(int, char**) {
  // lex through the input:
  while (yylex());
}
