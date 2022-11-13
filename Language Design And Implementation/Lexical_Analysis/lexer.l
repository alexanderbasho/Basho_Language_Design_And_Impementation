%{
    #include "parser.tab.h"
    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>

    int charrowToOctaBinaryHexa(char *input);
    void WriteTokenOnScreen(int Token_Identifier);
    char charrow_buffer[256];
    int errors = 0;
    void yyerror(const char* error);
%}

%option noyywrap
%option case-insensitive
%option yylineno

%x SINGLE_LINE_COMMENT 
%x MULTI_LINE_COMMENT 
%x CHARROW

ALPHANUMERIC                    [a-zA-Z0-9]
IDENTIFIER                      _{ALPHANUMERIC}*_*
WORD                            [a-zA-Z]+
BLANK                           [ \r\n\t]+
OCTACONST                       (0)|(0[0o][1-7][0-7]*)|([1-9][0-9]*)
BINARYCONST                     (0b[0-1][0-1]*)|([1-9][0-9]*)
HEXACONST                       (0x[0-9a-fA-F]+)|([1-9][0-9]*)
FLOATCONST                      ([1-9]*\.[0-9]*)|(0)?\.[0-9]+
INTEGERCONST                    [0-9]+
CHARACTERCONST                  \'[a-zA-Z0-9]\'
CHARACTERCONST2                 \'[!@#$%^&*()]'
CHARACTERCONST3                 \'\\r\'|\'\\n\'|\'\\t\'
FALSE                           [0]
TRUE                            [1]

%%
"INTEGER"                       { WriteTokenOnScreen(TOKEN_INTEGER); return TOKEN_INTEGER; }
"FLOAT"                         { WriteTokenOnScreen(TOKEN_FLOAT); return TOKEN_FLOAT; }
"CHARACTER"                     { WriteTokenOnScreen(TOKEN_CHARACTER); return TOKEN_CHARACTER; }
"VOID"                          { WriteTokenOnScreen(TOKEN_VOID); return TOKEN_VOID; }
"WHETHER"                       { WriteTokenOnScreen(TOKEN_WHETHER); return TOKEN_WHETHER; }
"DURING"                        { WriteTokenOnScreen(TOKEN_DURING); return TOKEN_DURING; }
"DO"                            { WriteTokenOnScreen(TOKEN_DO); return TOKEN_DO; }
"OTHERWISE"                     { WriteTokenOnScreen(TOKEN_OTHERWISE); return TOKEN_OTHERWISE; }
"RETURN"                        { WriteTokenOnScreen(TOKEN_RETURN); return TOKEN_RETURN; }
"HEADFUNC"                      { WriteTokenOnScreen(TOKEN_HEADFUNC); return TOKEN_HEADFUNC; }
"CLASS"                         { WriteTokenOnScreen(TOKEN_CLASS); return TOKEN_CLASS; }
"READ"                          { WriteTokenOnScreen(TOKEN_READ); return TOKEN_READ; }
"WRITE"                         { WriteTokenOnScreen(TOKEN_WRITE); return TOKEN_WRITE; }
"BOOL"                          { WriteTokenOnScreen(TOKEN_BOOL); return TOKEN_BOOL; }
{TRUE}                          { WriteTokenOnScreen(TOKEN_TRUE); return TOKEN_TRUE; }
{FALSE}                         { WriteTokenOnScreen(TOKEN_FALSE); return TOKEN_FALSE; }

"AND"                           { WriteTokenOnScreen(TOKEN_AND); return TOKEN_AND; }
"OR"                            { WriteTokenOnScreen(TOKEN_OR); return TOKEN_OR; }
"NAND"                          { WriteTokenOnScreen(TOKEN_NAND); return TOKEN_NAND; }
"NOR"                           { WriteTokenOnScreen(TOKEN_NOR); return TOKEN_NOR; }
"XOR"                           { WriteTokenOnScreen(TOKEN_XOR); return TOKEN_XOR; }
"XNOR"                          { WriteTokenOnScreen(TOKEN_XNOR); return TOKEN_XNOR; }
"MODULUS"|"MULTIPLY"|"DIVIDE"   { WriteTokenOnScreen(TOKEN_MODMULDI); return TOKEN_MODMULDI; }
"ADD"|"SUBSTRACT"	            { WriteTokenOnScreen(TOKEN_ADDSUB); return TOKEN_ADDSUB; }
"POWER"                         { WriteTokenOnScreen(TOKEN_POWER); return TOKEN_POWER; }
"("                             { WriteTokenOnScreen(TOKEN_LEFTPARENTHESIS); return TOKEN_LEFTPARENTHESIS; }
")"                             { WriteTokenOnScreen(TOKEN_RIGHTPARENTHESIS); return TOKEN_RIGHTPARENTHESIS; }
"["                             { WriteTokenOnScreen(TOKEN_LEFTBRACE); return TOKEN_LEFTBRACE; }
"]"                             { WriteTokenOnScreen(TOKEN_RIGHTBRACE); return TOKEN_RIGHTBRACE; }
"&"                             { WriteTokenOnScreen(TOKEN_AMPERSAND); return TOKEN_AMPERSAND; }
"{"                             { WriteTokenOnScreen(TOKEN_LEFTBRACKET); return TOKEN_LEFTBRACKET; }
"}"                             { WriteTokenOnScreen(TOKEN_RIGHTBRACKET); return TOKEN_RIGHTBRACKET; }
"!"                             { WriteTokenOnScreen(TOKEN_NOT); return TOKEN_NOT; }
"++"|"--"                       { WriteTokenOnScreen(TOKEN_INCRDECR); return TOKEN_INCRDECR; }
">"|">="|"<"|"<="               { WriteTokenOnScreen(TOKEN_GREATLESSEQU); return TOKEN_GREATLESSEQU; }
"=="|"!="                       { WriteTokenOnScreen(TOKEN_EQUNOT); return TOKEN_EQUNOT; }
","                             { WriteTokenOnScreen(TOKEN_COMMA); return TOKEN_COMMA;}
"="                             { WriteTokenOnScreen(TOKEN_EQUAL); return TOKEN_EQUAL; }
";"                             { WriteTokenOnScreen(TOKEN_SEMICOLON); return TOKEN_SEMICOLON; }
"CHARROW"                       { WriteTokenOnScreen(TOKEN_CHARROW); return TOKEN_CHARROW; }

{INTEGERCONST}                  { WriteTokenOnScreen(TOKEN_INTEGERCONST); yylval.intNum = charrowToOctaBinaryHexa(yytext); return TOKEN_INTEGERCONST; }    
{FLOATCONST}                    { WriteTokenOnScreen(TOKEN_FLOATCONST); yylval.floatNum = atof(yytext); return TOKEN_FLOATCONST; }   
{CHARACTERCONST}                { WriteTokenOnScreen(TOKEN_CHARACTERCONST); yylval.aCharacter = yytext[1]; return TOKEN_CHARACTERCONST; } 
{CHARACTERCONST2}               { WriteTokenOnScreen(TOKEN_CHARACTERCONST); return TOKEN_CHARACTERCONST; }
{CHARACTERCONST3}               { WriteTokenOnScreen(TOKEN_CHARACTERCONST); return TOKEN_CHARACTERCONST; }

{IDENTIFIER}                    { WriteTokenOnScreen(TOKEN_IDENTIFIER); yylval.charrowVar = strdup(yytext); return TOKEN_IDENTIFIER; }

{OCTACONST}                     { WriteTokenOnScreen(TOKEN_OCTACONST); yylval.intNum = charrowToOctaBinaryHexa(yytext); return TOKEN_OCTACONST; }
{BINARYCONST}                   { WriteTokenOnScreen(TOKEN_BINARYCONST); yylval.intNum = charrowToOctaBinaryHexa(yytext); return TOKEN_BINARYCONST; }
{HEXACONST}                     { WriteTokenOnScreen(TOKEN_HEXACONST); yylval.intNum = charrowToOctaBinaryHexa(yytext); return TOKEN_HEXACONST; }

"$$"                            { printf("Found 'SINGLE LINE COMMENT' at line %d \n", yylineno); BEGIN(SINGLE_LINE_COMMENT); }
<SINGLE_LINE_COMMENT>(\n|\n\r)  { BEGIN(INITIAL); printf(""); }
<SINGLE_LINE_COMMENT>.          { }

"#@"                            { printf("Started 'MULTI LINE COMMENT' at line %d \n", yylineno); BEGIN(MULTI_LINE_COMMENT); }
<MULTI_LINE_COMMENT>[^@]*       { }
<MULTI_LINE_COMMENT>"@"+[^*@#]* { }
<MULTI_LINE_COMMENT>"@#"        { BEGIN(INITIAL); printf(""); printf("Ended   'MULTI LINE COMMENT' at line %d \n", yylineno); }

\"                              { strcpy(charrow_buffer,""); BEGIN(CHARROW); printf("Started 'CHARROW' at line %d \n", yylineno); }
<CHARROW>\"                     { BEGIN(INITIAL); printf("The 'CHARROW' is: '%s' at line %d\nEnded 'CHARROW' at line %d \n", charrow_buffer, yylineno, yylineno); yylval.charrowVar = strdup(charrow_buffer); return TOKEN_CHARROWCONST; }
<CHARROW>(\\\n|\\\r\n)          { } // (to \\ sto deytero douleuei ws koinos paragontas)
<CHARROW>(\\.|[^"\\])           { 
                                    if (strlen(yytext) == 2)
                                    {
                                        if (strcmp(yytext,"\\r") == 0)
                                        {
                                            strcat(charrow_buffer,"\r");
                                        }
                                        else if (strcmp(yytext,"\\n") == 0)
                                        {
                                            strcat(charrow_buffer,"\n");
                                        }
                                        else if (strcmp(yytext,"\\t") == 0)
                                        {
                                            strcat(charrow_buffer,"\t");
                                        }
                                        else 
                                        {
                                            strcat(charrow_buffer, &yytext[1]);
                                        }
                                    }
                                    else 
                                    {
                                        strcat(charrow_buffer, yytext);
                                    }
                                } // an den vrw / kai vrw . tote fortwse grammata sto yytext. to deutero opoiosdipote xaraktiras mesa sto string 
<CHARROW>(\n|\r\n)              { yyerror ("New Line found in Charrow"); } // den exei kleisei
<CHARROW><<EOF>>                { yyerror ("Charrow ended without closing it -"); return 0; } 
<CHARROW>.                      { yyerror ("Found UNKNOWN character"); }

{WORD}                          { WriteTokenOnScreen(TOKEN_WORD); return TOKEN_WORD; }
{BLANK}                         { } /* blank, tab, new line: eat up whitespace */
.                               { yyerror("Found UNKNOWN TOKEN"); }
<<EOF>>                         { printf("Found END OF FILE \n");  return 0; }
%%

void WriteTokenOnScreen(int Token_Identifier)
{ 
    if (Token_Identifier == TOKEN_WHITESPACES)
    {
        printf("Found Token 'WHITESPACE/S' (%d) at line %d \n", Token_Identifier, yylineno);
    }
    else if (Token_Identifier == TOKEN_OCTACONST)
    {
        printf("Found Token '%s' (%d) at line %d, Decimal Converted Number: %d\n", yytext, Token_Identifier, yylineno,charrowToOctaBinaryHexa(yytext));
    }
    else if (Token_Identifier == TOKEN_BINARYCONST)
    {
        printf("Found Token '%s' (%d) at line %d, Decimal Converted Number: %d\n", yytext, Token_Identifier, yylineno,charrowToOctaBinaryHexa(yytext));
    }
    else if (Token_Identifier == TOKEN_HEXACONST)
    {
        printf("Found Token '%s' (%d) at line %d, Decimal Converted Number: %d\n", yytext, Token_Identifier, yylineno,charrowToOctaBinaryHexa(yytext));
    }
    else 
    {
        printf("Found Token '%s' (%d) at line %d \n", yytext, Token_Identifier, yylineno);
    }
}

//0o123 //0b123 //0x232FABFE2123
int charrowToOctaBinaryHexa(char *input)
{
    if(strncmp(input,"0o",2) == 0 || strncmp(input,"0O",2) == 0)
    {
        return (int) strtoll(&input[2],NULL,8);
    }
    else if(strncmp(input,"0b",2) == 0 || strncmp(input,"0B",2) == 0)
    {
        return (int) strtoll(&input[2],NULL,2);
    }
    else if(strncmp(input,"0x",2) == 0 || strncmp(input,"0X",2) == 0)
    {
        return (int) strtoll(&input[2],NULL,16);
    }
    else 
    {
        return (int) strtoll(&input[2],NULL,10);
    }
}

void yyerror(const char* error)
{
    errors++;
    printf("Error: %s at line %d \n", error, yylineno);
    if(errors == 50)
    {
        printf("Maximum Error Found\n");
        exit(EXIT_FAILURE);
    }
}