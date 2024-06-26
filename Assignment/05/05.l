digit	[0-9]
letter	[a-zA-Z_]
delim	[ \t]
line	[\n]
ws	{delim}+
%{
#define YYSTYPE_IS_DECLARED 1
typedef long YYSTYPE;
#include "y.tab.h"
#include "type.h"
#include <stdlib.h>
#include <string.h>
char *makeString(char *);
int checkIdentifier(char *);
%}

%%
{ws}	{ }
{line}	{ }
auto	{ return (AUTO_SYM); }
break	{ return (BREAK_SYM); }
case 	{ return (CASE_SYM); }
continue	{ return (CONTINUE_SYM); }
default	{ return (DEFAULT_SYM); }
do	{ return (DO_SYM); }
else	{ return (ELSE_SYM); }
enum	{ return (ENUM_SYM); }
for	{ return (FOR_SYM); }
if	{ return (IF_SYM); }
return	{ return (RETURN_SYM); }
sizeof	{ return (SIZEOF_SYM); }
static	{ return (STATIC_SYM); }
struct	{ return (STRUCT_SYM); }
switch	{ return (SWITCH_SYM); }
typedef	{ return (TYPEDEF_SYM); }
union	{ return (UNION_SYM); }
while	{ return (WHILE_SYM); }
goto	{ return (GOTO_SYM); }

"\+\+"	{ return (PLUSPLUS); }
"\-\-"	{ return (MINUSMINUS); }
"\->"	{ return (ARROW); }
"<"	{ return (LSS); }
">"	{ return (GTR); }
"<="	{ return (LEQ); }
">="	{ return (GEQ); }
"=="	{ return (EQL); }
"!="	{ return (NEQ); }
"&&"	{ return (AMPAMP); }
"||"	{ return (BARBAR); }
"<<"	{ return (LSH); }
">>"	{ return (RSH); }
"\.\.\."	{ return (DOTDOTDOT); }
"\("	{ return (LP); }
"\)"	{ return (RP); }
"\["	{ return (LB); }
"\]"	{ return (RB); }
"\{"	{ return (LR); }
"\}"	{ return (RR); }
"\:"	{ return (COLON); }
"\."	{ return (PERIOD); }
"\,"	{ return (COMMA); }
"\!"	{ return (EXCL); }
"\*"	{ return (STAR); }
"\/"	{ return (SLASH); }
"\%"	{ return (PERCENT); }
"\&"	{ return (AMP); }
"\;"	{ return (SEMICOLON); }
"\+"	{ return (PLUS); }
"\-"	{ return (MINUS); }
"\="	{ return (ASSIGN); }
"\~"	{ return (NOT); }
"\^"	{ return (XOR); }
"\|"	{ return (BAR); }
"\?"	{ return (QUESTION); }

"const"	{ return (CONST_SYM); }

{digit}+	{ yylval = atoi(yytext); return (INTEGER_CONSTANT); }
{digit}+\.{digit}+	{ yylval = (long)makeString(yytext); return (FLOAT_CONSTANT); }
{letter}({letter}|{digit})* { return (checkIdentifier(yytext)); }
\"([^"\n]|\\["\n])*\" { yylval = (long)makeString(yytext); return (STRING_LITERAL); }
\'([^'\n]|\'\')\' { yylval = *(yytext + 1); return (CHARACTER_CONSTANT); }
\/\*([^*]|\*+[^*/])*\*\/ { }
"//"[^\n]* { }
%%

char *makeString(char *s)
{
	char *tmp;
	tmp = malloc(strlen(s) + 1);
	strcpy(tmp, s);

	return (tmp);
}

int checkIdentifier(char *s)
{
	char *table[] = {"int", "float", "char", "void"};
	for (int i = 0; i < 4; i++)
	{
		if(strcmp(s, table[i]) == 0)
		{
			yylval = makeString(s);
			return (TYPE_IDENTIFIER);
		}
	}
	yylval = *s;
	return (IDENTIFIER);
}
