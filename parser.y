%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_IDS 100
char* id_list[MAX_IDS];
int id_count = 0;

void print_production(const char *production_name) {
    printf("%s", production_name);
}

extern void insert_symbol(const char* lexeme, const char* type);
extern void print_symbol_table();

void yyerror(const char *s);
int yylex(void);
%}

%union {
    int ival;
    char* sval;
}
%nonassoc LOWER_THAN_ELSE
%nonassoc ELSE

%left OR
%left AND
%left PLUS MINUS
%left MULT DIV MOD
%right NOT
%token <sval> ID STRING
%token <ival> INT

%token PROGRAM VAR BEGIN_KEYWORD END IF THEN ELSE WHILE DO FOR TO
%token PROCEDURE FUNCTION FORWARD TYPE ARRAY RECORD
%token OF NOT DIV MOD AND OR
%token PLUS MINUS MULT EQUAL LESS LESSEQUAL GREATER GREATEREQUAL NOTEQUAL DOT COMMA COLON SEMICOLON DOTDOT LPAREN RPAREN LBRACKET RBRACKET ASSIGN

%start Program

%%

Program:
    PROGRAM ID SEMICOLON TypeDefinitions VariableDeclarations SubprogramDeclarations CompoundStatement DOT 
    { 
        insert_symbol($2, "program");
        print_production("Program\n"); 
    }
    ;

TypeDefinitions:
    /* empty */ 
    | TYPE TypeDefinition SEMICOLON
    { print_production("Type Definitions\n"); }
    | TypeDefinitions TypeDefinition SEMICOLON 
    ;

TypeDefinition:
    ID ASSIGN Type
    { insert_symbol($1, "type"); print_production("Type definition\n"); }
    ;

VariableDeclarations:
    /* empty */ 
    | VAR VariableDeclaration SEMICOLON 
    { print_production("Variable Declarations\n"); }
    | VariableDeclarations VariableDeclaration SEMICOLON 
    ;

VariableDeclaration:
    IdentifierList COLON Type 
    { 
        for (int i = 0; i < id_count; i++) {
            insert_symbol(id_list[i], "variable");
            free(id_list[i]);
        }
        id_count = 0;
        print_production("Variable Declaration\n"); 
    }
    ;

IdentifierList:
    ID
    {
        if (id_count < MAX_IDS)
            id_list[id_count++] = strdup($1);
    }
    | IdentifierList COMMA ID
    {
        if (id_count < MAX_IDS)
            id_list[id_count++] = strdup($3);
    }
    ;

Type:
    ID 
    | ARRAY LBRACKET Constant DOTDOT Constant RBRACKET OF Type 
    { print_production("Array type\n"); }
    | RECORD FieldList END 
    { print_production("Record type\n"); }
    ;

FieldList:
    /* empty */
    | IdentifierList COLON Type 
    | FieldList SEMICOLON IdentifierList COLON Type 
    ;

Constant:
    INT 
    | MINUS INT 
    ;

SubprogramDeclarations:
    /* empty */
    | SubprogramDeclaration SEMICOLON 
    | SubprogramDeclarations SubprogramDeclaration SEMICOLON 
    ;

SubprogramDeclaration:
    ProcedureDeclaration 
    | FunctionDeclaration 
    ;

ProcedureDeclaration:
    PROCEDURE ID LPAREN FormalParameterList RPAREN SEMICOLON ProcedureBody 
    { 
        insert_symbol($2, "procedure");
        print_production("Procedure declaration\n"); 
    }
    ;

ProcedureBody:
    Block 
    | FORWARD 
    ;

FunctionDeclaration:
    FUNCTION ID LPAREN FormalParameterList RPAREN COLON ResultType SEMICOLON FunctionBody 
    { 
        insert_symbol($2, "function");
        print_production("Function declaration\n"); 
    }
    ;

FunctionBody:
    Block 
    | FORWARD 
    ;

ResultType:
    ID 
    ;

FormalParameterList:
    /* empty */
    | IdentifierList COLON Type 
    { 
        for (int i = 0; i < id_count; i++) {
            insert_symbol(id_list[i], "parameter");
            free(id_list[i]);
          }
        id_count = 0;
    }
    | FormalParameterList SEMICOLON IdentifierList COLON Type 
    { 
        for (int i = 0; i < id_count; i++) {
            insert_symbol(id_list[i], "parameter");
            free(id_list[i]);
        }
        id_count = 0;
    }
    ;

Block:
    VariableDeclarations CompoundStatement 
    { print_production("Block\n"); }
    ;

CompoundStatement:
    BEGIN_KEYWORD StatementSequence END 
    { print_production("Compound statement\n"); }
    ;

StatementSequence:
    Statement 
    | StatementSequence SEMICOLON Statement 
    ;

Statement:
    SimpleStatement 
    | StructuredStatement 
    ;

SimpleStatement:
    /* empty */ 
    | AssignmentStatement 
    | ProcedureStatement 
    ;

AssignmentStatement:
    Variable ASSIGN Expression 
    { print_production("Assignment statement\n"); }
    ;

ProcedureStatement:
    ID LPAREN ActualParameterList RPAREN 
    { print_production("Procedure call\n"); }
    ;

StructuredStatement:
    CompoundStatement 
    | IfStatement 
    | WhileStatement 
    | ForStatement 
    ;

IfStatement:
    IF Expression THEN Statement %prec  LOWER_THAN_ELSE
  | IF Expression THEN Statement ELSE Statement 
    { print_production("If statement\n"); }
    ;

WhileStatement:
    WHILE Expression DO Statement 
    { print_production("While statement\n"); }
    ;

ForStatement:
    FOR ID ASSIGN Expression TO Expression DO Statement
    { print_production("For statement\n"); }
    ;

Expression:
    SimpleExpression 
    | SimpleExpression RelationalOp SimpleExpression 
    { print_production("Expression with relation\n"); }
    ;

RelationalOp:
    LESS 
    | LESSEQUAL 
    | GREATER 
    | GREATEREQUAL 
    | NOTEQUAL 
    | EQUAL 
    ;

SimpleExpression:
    Term 
    | SimpleExpression AddOp Term 
    { print_production("Simple expression\n"); }
    ;

AddOp:
    PLUS 
    | MINUS 
    | OR 
    ;

Term:
    Factor 
    | Term MulOp Factor 
    { print_production("Term with operation \n"); }
    ;

MulOp:
    MULT 
    | DIV 
    | MOD 
    | AND 
    ;

Factor:
    INT 
    | STRING 
    | Variable 
    | FunctionReference 
    | NOT Factor 
    | LPAREN Expression RPAREN 
    ;

FunctionReference:
    ID LPAREN ActualParameterList RPAREN
    { print_production("Function reference \n"); }
    ;

Variable:
    ID ComponentSelection 
    ;

ComponentSelection:
    /* empty */
    | DOT ID 
    | LBRACKET Expression RBRACKET 
    ;

ActualParameterList:
    /* empty */
    | Expression 
    | Expression COMMA ActualParameterList 
    ;

%%

void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}

int main() {
    printf("Starting YACC Parser...\n");
    yyparse();
    print_symbol_table();
    return 0;
}  