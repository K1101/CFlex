#include "stdio.h"
#include "cppbison.tab.h"
int main (void){
	yyparse();
	return 1;
}
void yyerror(char *s){
	//fprintf(sederr , "error :");
}
