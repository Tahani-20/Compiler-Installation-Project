%{
#include "parser.tab.h"

#define SYMBOLS_SIZE 500
typedef struct {
    char* name;
    char* type;
} Symbol;

Symbol symbol_table[SYMBOLS_SIZE];
int symbol_count = 0;
void insert_symbol(const char* lexeme, const char* type) {
    for (int i = 0; i < symbol_count; ++i) {
        if (strcmp(symbol_table[i].name, lexeme) == 0)
            return;  
    }
    symbol_table[symbol_count].name = strdup(lexeme);
    symbol_table[symbol_count].type = strdup(type);
    symbol_count++;
}
void print_symbol_table() {
    printf("\nName                 Type                 \n");
    printf("-------------------- -------------------- \n");
    for (int i = 0; i < symbol_count; ++i) {
        printf("%-20s %-20s\n", symbol_table[i].name, symbol_table[i].type);
    }
}

int yywrap(void) { return 1; }
%}

DIGIT    [0-9]
LETTER   [a-zA-Z]
ID       {LETTER}({LETTER}|{DIGIT}|_)*
INT      {DIGIT}+
STR      \"[^"]*\"
COMMENT  "{"[^}]*"}"

%%

[ \t\r\n]+     {}

{COMMENT}      {}

"program"            { return PROGRAM; }
"var"                { return VAR; }
"begin"              { return BEGIN_KEYWORD; }
"end"                { return END; }
"if"                 { return IF; }
"then"               { return THEN; }
"else"               { return ELSE; }
"and"                { return AND; }
"do"                 { return DO; }
"for"                { return FOR; }
"div"                { return DIV; }
"forward"            { return FORWARD; }
"function"           { return FUNCTION; }
"array"              { return ARRAY; }
"mod"                { return MOD; }
"not"                { return NOT; }
"of"                 { return OF; }
"or"                 { return OR; }
"procedure"          { return PROCEDURE; }
"record"             { return RECORD; }
"to"                 { return TO; }
"type"               { return TYPE; }
"while"              { return WHILE; }

\"[^\"]*\" {
    yylval.sval = strdup(yytext);
    return STRING;
}

[0-9]+ {
    yylval.ival = atoi(yytext);
    return INT;
}

[a-zA-Z_][a-zA-Z0-9_]* {
    yylval.sval = strdup(yytext);
    return ID;
}

":="                 { return ASSIGN; }
"<="                 { return LESSEQUAL; }
">="                 { return GREATEREQUAL; }
"<>"                 { return NOTEQUAL; }
".."                 { return DOTDOT; }
"+"                  { return PLUS; }
"-"                  { return MINUS; }
"*"                  { return MULT; }
"="                  { return EQUAL; }
"<"                  { return LESS; }
">"                  { return GREATER; }
":"                  { return COLON; }
";"                  { return SEMICOLON; }
","                  { return COMMA; }
"("                  { return LPAREN; }
")"                  { return RPAREN; }
"["                  { return LBRACKET; }
"]"                  { return RBRACKET; }
"."                  { return DOT; }

.                    {}

%%