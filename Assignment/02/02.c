#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define NUMBER 256
#define PLUS 257
#define STAR 258
#define LPAREN 259
#define RPAREN 260
#define END 261
#define EXPRESSION 0
#define TERM 1
#define FACTOR 2
#define ACC 999

int action[12][6] = {
    {5, 0, 0, 4, 0, 0}, {0, 6, 0, 0, 0, ACC}, {0, -2, 7, 0, -2, -2},
    {0, -4, -4, 0, -4, -4}, {5, 0, 0, 4, 0, 0}, {0, -6, -6, 0, -6, -6},
    {5, 0, 0, 4, 0, 0}, {5, 0, 0, 4, 0, 0}, {0, 6, 0, 0, 11, 0},
    {0, -1, 7, 0, -1, -1}, {0, -3, -3, 0, -3, -3}, {0, -5, -5, 0, -5, -5}
};

int go_to[12][3] = {
    {1, 2, 3}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {8, 2, 3}, {0, 0, 0},
    {0, 9, 3}, {0, 0, 10}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}
};

typedef enum KIND {
    INT = 0,
    FLT
}KIND;
typedef union VALUE {
    int i;
    double f;
}VALUE;

typedef struct RET {
    KIND kind;
    VALUE value;
}RET;

int prod_left[7] = { 0, EXPRESSION, EXPRESSION, TERM, TERM, FACTOR, FACTOR };
int prod_length[7] = { 0, 3, 1, 3, 1, 3, 1 };

int stack[1000]; int top = -1; int sym;
RET value[1000];

int yyparse();
void push(int i);
void shift(int i);
void reduce(int i);
void yyerror(const char* str);
int yylex();
void lex_error();

char yytext[32];
RET yylval;

int main()
{
    yyparse();
    if (value[top].kind == INT)
        printf("= %d\n", value[top].value.i);
    else
        printf("= %f\n", value[top].value.f);

    return 0;
}

int yyparse()
{
    int i;
    stack[++top] = 0;
    sym = yylex();

    do
    {
        i = action[stack[top]][sym - 256];
        if (i == ACC)
            printf("success!\n");
        else if (i > 0)
            shift(i);
        else if (i < 0)
            reduce(-i);
        else
            yyerror(NULL);
    } while (i != ACC);

    return 1;
}

void push(int i)
{
    stack[++top] = i;
}

void shift(int i)
{
    push(i);
    value[top] = yylval;
    sym = yylex();
}

void reduce(int i)
{
    int old_top;
    top -= prod_length[i];
    old_top = top;

    push(go_to[stack[old_top]][prod_left[i]]);

    switch (i)
    {
    case 1:
        if (value[old_top + 1].kind == FLT || value[old_top + 3].kind == FLT)
        {
	    double result = 0;
            if (value[old_top + 1].kind == FLT)
                result = value[old_top + 1].value.f;
            else
                result = (double)value[old_top + 1].value.i;
            if (value[old_top + 3].kind == FLT)
                result += value[old_top + 3].value.f;
            else
                result += (double)value[old_top + 3].value.i;
	    if(result - (int)result == 0)
	    {
		    value[top].kind = INT;
		    value[top].value.i = result;
	    }
	    else
	    {
		    value[top].kind = FLT;
		    value[top].value.f = result;
	    }
        }
        else
        {
            value[top].kind = INT;
            value[top].value.i = value[old_top + 1].value.i + value[old_top + 3].value.i;
        }
        break;
    case 2:
        value[top] = value[old_top + 1];
        break;
    case 3:
        if (value[old_top + 1].kind == FLT || value[old_top + 3].kind == FLT)
        {
            double result = 0;
            if (value[old_top + 1].kind == FLT)
                result = value[old_top + 1].value.f;
            else
                result = (double)value[old_top + 1].value.i;
            if (value[old_top + 3].kind == FLT)
                result *= value[old_top + 3].value.f;
            else
                result *= (double)value[old_top + 3].value.i;
	    if(result - (int)result == 0)
	    {
		    value[top].kind = INT;
		    value[top].value.i = result;
	    }
	    else
	    {
		    value[top].kind = FLT;
		    value[top].value.f = result;
	    }

        }
        else
        {
            value[top].kind = INT;
            value[top].value.i = value[old_top + 1].value.i * value[old_top + 3].value.i;
        }
        break;
    case 4:
        value[top] = value[old_top + 1];
        break;
    case 5:
        value[top] = value[old_top + 2];
        break;
    case 6:
        value[top] = value[old_top + 1];
        break;
    default:
        yyerror("parsing table error");
        break;
    }
}

void yyerror(const char* str)
{
    if (str == NULL)
        printf("syntax error\n");
    else
        printf("%s\n", str);
    exit(1);
}

int yylex()
{
    static char ch = ' ';
    int i = -1;
    while (ch == ' ' || ch == '\t' || ch == '\n')
        ch = getchar();
    if (isdigit(ch))
    {
        do
        {
            yytext[++i] = ch;
            ch = getchar();
        } while (isdigit(ch));
        if (ch == '.')
        {
            do
            {
                yytext[++i] = ch;
                ch = getchar();
            } while (isdigit(ch));
            yytext[i + 1] = '\0';
            yylval.kind = FLT;
            yylval.value.f = atof(yytext);
        }
        else
        {
            yytext[i + 1] = '\0';
            yylval.kind = INT;
            yylval.value.i = atoi(yytext);
        }
        return NUMBER;
    }
    else if (ch == '+')
    {
        ch = getchar();
        return PLUS;
    }
    else if (ch == '*')
    {
        ch = getchar();
        return STAR;
    }
    else if (ch == '(')
    {
        ch = getchar();
        return LPAREN;
    }
    else if (ch == ')')
    {
        ch = getchar();
        return RPAREN;
    }
    else if (ch == EOF)
        return END;
    else
        lex_error();
}

void lex_error()
{
    printf("lex error\n");
    exit(1);
}
