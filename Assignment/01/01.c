#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

enum TOKEN {
    NONE = 0,
    PLUS,
    STAR,
    NUMBER,
    POINT,
    LPAREN,
    RPAREN,
    END
} token;

int exprIndex = -1;
int startIndex;
int endIndex;
char ch;

char inputExpression[MAX];

void get_token();
double expression();
double term();
double factor();
double digit();
void error(int i);

void main()
{
    double result = 0;

    int k = 0;
    char str[MAX];
    scanf("%[^\n]s", inputExpression);

    for (int i = 0; i < strlen(inputExpression); i++)
    {
        if (inputExpression[i] == NULL)
            break;
        if (inputExpression[i] != ' ')
            str[k++] = inputExpression[i];
    }
    str[k] = NULL;
    strcpy(inputExpression, str);

    get_token();
    result = expression();
    if (token != END)
        error(3);
    else
    {
        if (result - (int)result == 0)
            printf("\n%d", (int)result);
        else
            printf("\n%f", result);
    }
}

void get_token()
{
    ch = inputExpression[++exprIndex];
    if (ch == NULL)
        token = END;
    else if (ch == '+')
        token = PLUS;
    else if (ch == '*')
        token = STAR;
    else if (ch == '(')
        token = LPAREN;
    else if (ch == ')')
        token = RPAREN;
    else if (ch == '.')
        token = POINT;
    else if (isdigit(ch))
        token = NUMBER;
    else
        token = NONE;
}

double expression()
{
    double result = 0;

    result = term();

    while (token == PLUS)
    {
        get_token();
        result = result + term();
    }

    if (result - (int)result == 0)
        return (int)result;
    else
        return result;
}

double term()
{
    double result = 0;

    result = factor();
    while (token == STAR)
    {
        get_token();
        result = result * factor();
    }

    if (result - (int)result == 0)
        return (int)result;
    else
        return result;
}

double factor()
{
    double result = 0;

    if (token == NUMBER)
        result = digit();
    else if (token == LPAREN)
    {
        get_token();
        result = expression();
        if (token == RPAREN)
            get_token();
        else
            error(2);
    }

    if (result - (int)result == 0)
        return (int)result;
    else
        return result;
}

double digit()
{
    double result = 0;
    char ch[MAX];
    startIndex = exprIndex;

    //integer
    while (token == NUMBER)
    {
        get_token();
    }
    endIndex = exprIndex;
    
    strncpy(ch, inputExpression + startIndex, exprIndex);
    ch[exprIndex + 1] = NULL;
    result = (float)atoi(ch);

    if (token == POINT)
    {
        //float
        get_token();
        while (token == NUMBER)
        {
            get_token();
        }

        strncpy(ch, inputExpression + startIndex, exprIndex);
        ch[exprIndex + 1] = NULL;
        result = atof(ch);
    }
    
    if (result - (int)result == 0)
        return (int)result;
    else
        return result;
}

void error(int i)
{
    printf("ERROR(%d): ", i);

    switch (i)
    {
    case 1:
        printf("Factor Error\n");
        break;
    case 2:
        printf("RightParen Error\n");
        break;
    case 3:
        printf("End Error\n");
        break;
    }
    exit(1);
}
