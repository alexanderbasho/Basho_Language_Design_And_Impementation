%{
    
    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    #include <stdbool.h>

    
	extern FILE *yyin;
    extern int yylex();

%}

%error-verbose

%union
{
    int intNum;
	float floatNum;
	char aCharacter;
	char *charrowVar;
    _Bool trueVar;
    _Bool falseVar;
}

%token <intNum>      TOKEN_INTEGERCONST          "INTEGERCONST"
%token <floatNum>    TOKEN_FLOATCONST            "FLOATCONST"
%token <aCharacter>  TOKEN_CHARACTERCONST        "CHARACTERCONST"
%token <charrowVar>  TOKEN_CHARROWCONST          "CHARROWCONST"
%token <charrowVar>  TOKEN_IDENTIFIER            "IDENTIFIER"
%token <intNum>      TOKEN_OCTACONST             "OCTACONST"
%token <intNum>      TOKEN_BINARYCONST           "BINARYCONST"
%token <intNum>      TOKEN_HEXACONST             "HEXACONST"
%token <trueVar>     TOKEN_TRUE                  "TRUE"
%token <falseVar>    TOKEN_FALSE                 "FALSE"

%token <charrowVar>  TOKEN_INTEGER               "INTEGER"
%token <charrowVar>  TOKEN_FLOAT                 "FLOAT"
%token <charrowVar>  TOKEN_CHARACTER             "CHARACTER"
%token <charrowVar>  TOKEN_CHARROW               "CHARROW"
%token <charrowVar>  TOKEN_BOOL                  "BOOL"
%token <charrowVar>  TOKEN_VOID                  "VOID"
%token <charrowVar>  TOKEN_WHETHER               "WHETHER"
%token <charrowVar>  TOKEN_DURING                "DURING"
%token <charrowVar>  TOKEN_DO                    "DO"
%token <charrowVar>  TOKEN_OTHERWISE             "OTHERWISE"
%token <charrowVar>  TOKEN_RETURN                "RETURN"
%token <charrowVar>  TOKEN_HEADFUNC              "HEADFUNC"
%token <charrowVar>  TOKEN_CLASS                 "CLASS"
%token <charrowVar>  TOKEN_READ                  "READ"
%token <charrowVar>  TOKEN_WRITE                 "WRITE"
%token <charrowVar>  TOKEN_WHITESPACES           "WHITESPACES"
%token <charrowVar>  TOKEN_WORD                  "WORD"
%token <charrowVar>  TOKEN_AND                   "AND"
%token <charrowVar>  TOKEN_OR                    "OR"
%token <charrowVar>  TOKEN_NAND                  "NAND"
%token <charrowVar>  TOKEN_NOR                   "NOR"
%token <charrowVar>  TOKEN_XOR                   "XOR"
%token <charrowVar>  TOKEN_XNOR                  "XNOR"
%token <charrowVar>  TOKEN_MODMULDI              "MODULUS | MULTIPLY | DIVIDE"
%token <charrowVar>  TOKEN_ADDSUB                "ADD | SUBSTRACT"
%token <charrowVar>  TOKEN_POWER                 "POWER"
%token <charrowVar>  TOKEN_EQUNOT                "== | !="
%token <charrowVar>  TOKEN_GREATLESSEQU          "> | >= | < | <=" 
%token <charrowVar>  TOKEN_NOT                   "!"
%token <charrowVar>  TOKEN_INCRDECR              "++ | --"
%token <charrowVar>  TOKEN_LEFTPARENTHESIS       "("
%token <charrowVar>  TOKEN_RIGHTPARENTHESIS      ")"
%token <charrowVar>  TOKEN_SEMICOLON             ";"
%token <charrowVar>  TOKEN_COMMA                 ","
%token <charrowVar>  TOKEN_EQUAL                 "="
%token <charrowVar>  TOKEN_LEFTBRACE             "["
%token <charrowVar>  TOKEN_RIGHTBRACE            "]"
%token <charrowVar>  TOKEN_LEFTBRACKET           "{"
%token <charrowVar>  TOKEN_RIGHTBRACKET          "}"
%token <charrowVar>  TOKEN_AMPERSAND             "&"
%token               TOKEN_EOF 0	             "EOF"

%right               TOKEN_EQUAL
%right               TOKEN_GREATLESSEQU

%left                TOKEN_AND
%left                TOKEN_OR
%left                TOKEN_NOR
%left                TOKEN_XNOR
%left                TOKEN_NAND
%left                TOKEN_XOR
%left                TOKEN_ADDSUB
%left                TOKEN_MODMULDI
%left                TOKEN_POWER
%left                TOKEN_EQUNOT
%left                TOKEN_COMMA
%left                TOKEN_LEFTPARENTHESIS 
%left                TOKEN_RIGHTPARENTHESIS 
%left                TOKEN_LEFTBRACE 
%left                TOKEN_RIGHTBRACE
%left                TOKEN_INCRDECR
%left                TOKEN_NOT
%left                NEGATIVE

%nonassoc            OTHERWISE_DANGLING
%nonassoc            TOKEN_OTHERWISE     

%type <charrowVar>   Headfunc
%type <charrowVar>   GlobalDeclarations
%type <charrowVar>   GlobalDeclaration
%type <charrowVar>   VariableTypename
%type <charrowVar>   StandardVariableType
%type <charrowVar>   Dimensions
%type <charrowVar>   Dimension
%type <charrowVar>   Initializer
%type <charrowVar>   InitializerValue
%type <charrowVar>   Expression
%type <charrowVar>   Variable
%type <charrowVar>   GeneralExpression
%type <charrowVar>   Assignment
%type <charrowVar>   ListOfExpression
%type <charrowVar>   ExpressionList
%type <charrowVar>   InitializerValues
%type <charrowVar>   VariableDefinitions
%type <charrowVar>   VariableDefinition
%type <charrowVar>   ShortFunctionDeclaration
%type <charrowVar>   ShortFunctionHeaderParameters
%type <charrowVar>   StartFunctionHeader
%type <charrowVar>   ParameterTypes
%type <charrowVar>   ListOfDimensionsPass 
%type <charrowVar>   FunctionHeaderWithNoParameters
%type <charrowVar>   GlobalVariableDeclaration
%type <charrowVar>   VariableDefinitionInitializers
%type <charrowVar>   VariableDefinitionInitializer
%type <charrowVar>   FunctionDeclaration
%type <charrowVar>   FullFunctionDeclaration
%type <charrowVar>   FunctionHeader
%type <charrowVar>   ListOfParameters
%type <charrowVar>   VariableDefinitionPass
%type <charrowVar>   StatementsDeclaration
%type <charrowVar>   Declarations
%type <charrowVar>   Statements
%type <charrowVar>   Statement
%type <charrowVar>   ExpressionStatement
%type <charrowVar>   WhetherStatement
%type <charrowVar>   WhetherOtherwise
%type <charrowVar>   DuringStatement
%type <charrowVar>   WriteStatement
%type <charrowVar>   ReadStatement
%type <charrowVar>   ExpressionsOptimizer
%type <charrowVar>   ReturnStatement
%type <charrowVar>   CompStatement
%type <charrowVar>   HeadfuncFunction
%type <charrowVar>   HeadfuncHeader

%start BitGate 

%%

BitGate                         :   TOKEN_CLASS TOKEN_IDENTIFIER TOKEN_LEFTBRACKET Headfunc TOKEN_RIGHTBRACKET
                                    | error TOKEN_IDENTIFIER TOKEN_LEFTBRACKET Headfunc TOKEN_RIGHTBRACKET                                           { yyerror("Syntax Error in Class Declaration ['Class' Error]"); yyerrok; }
                                    | TOKEN_CLASS error TOKEN_LEFTBRACKET Headfunc TOKEN_RIGHTBRACKET                                                { yyerror("Syntax Error in Class Declaration [Identifier Error]"); yyerrok; }
                                    | TOKEN_CLASS TOKEN_IDENTIFIER error Headfunc TOKEN_RIGHTBRACKET                                                 { yyerror("Syntax Error in Class Declaration [Left Bracket Error]"); yyerrok; }
                                    | TOKEN_CLASS TOKEN_IDENTIFIER TOKEN_LEFTBRACKET error TOKEN_RIGHTBRACKET                                        { yyerror("Syntax Error in Class Declaration [Headfunc Error]"); yyerrok; }
                                    | TOKEN_CLASS TOKEN_IDENTIFIER TOKEN_LEFTBRACKET Headfunc error                                                  { yyerror("Syntax Error in Class Declaration [Right Bracket Error]"); yyerrok; }
Headfunc                        :	GlobalDeclarations HeadfuncFunction
                                    | error HeadfuncFunction                                                                                         { yyerror("Syntax Error in Headfunc [HeadfuncFunction Error]"); yyerrok; }
                                    | GlobalDeclarations error                                                                                       { yyerror("Syntax Error in Headfunc [GlobalDeclarations Error]"); yyerrok; }
GlobalDeclarations              :	GlobalDeclarations GlobalDeclaration
				                    | %empty
                                    | error                                                                                                          { yyerror("Syntax Error in GlobalDeclarations [empty Error]"); yyerrok; }
                                    | error GlobalDeclaration                                                                                        { yyerror("Syntax Error in GlobalDeclarations [GlobalDeclarations Error]"); yyerrok; }
                                    | GlobalDeclarations error                                                                                       { yyerror("Syntax Error in GlobalDeclarations [GlobalDeclaration Error]"); yyerrok; }
GlobalDeclaration               :	GlobalVariableDeclaration
				                    | FunctionDeclaration
                                    | error                                                                                                          { yyerror("Syntax Error in GlobalDeclaration [GlobalVariableDeclaration/FunctionDeclaration Error]"); yyerrok; }
VariableTypename                :	StandardVariableType
				                    | TOKEN_IDENTIFIER
                                    | error                                                                                                          { yyerror("Syntax Error in VariableTypename [StandardVariableType/Identifier Error]"); yyerrok; }
StandardVariableType            :	TOKEN_CHARACTER
                                    | TOKEN_INTEGER
                                    | TOKEN_FLOAT
                                    | TOKEN_VOID
                                    | TOKEN_BOOL
                                    | TOKEN_CHARROW
                                    | error                                                                                                          { yyerror("Syntax Error in StandardVariableType [StandardVariableType Error]"); yyerrok; }
Dimensions                      :	Dimensions Dimension
                                    | error Dimension                                                                                                { yyerror("Syntax Error in Dimensions [Dimensions Error]"); yyerrok; }
                                    | Dimensions error                                                                                               { yyerror("Syntax Error in Dimensions [Dimension Error]"); yyerrok; }
Dimension                       :	TOKEN_LEFTBRACE TOKEN_INTEGERCONST TOKEN_RIGHTBRACE
				                    | TOKEN_LEFTBRACE TOKEN_RIGHTBRACE
                                    | error TOKEN_INTEGERCONST TOKEN_RIGHTBRACE                                                                      { yyerror("Syntax Error in Dimension [Left Brace Error]"); yyerrok; }
                                    | TOKEN_LEFTBRACE error TOKEN_RIGHTBRACE                                                                         { yyerror("Syntax Error in Dimension [IntegerConst Error]"); yyerrok; }
                                    | TOKEN_LEFTBRACE TOKEN_INTEGERCONST error                                                                       { yyerror("Syntax Error in Dimension [Right Brace Error]"); yyerrok; }
                                    | error TOKEN_RIGHTBRACE                                                                                         { yyerror("Syntax Error in Dimension [Left Brace Error]"); yyerrok; }
                                    | TOKEN_LEFTBRACE error                                                                                          { yyerror("Syntax Error in Dimension [Right Brace Error]"); yyerrok; }
Initializer                     :	TOKEN_EQUAL InitializerValue
				                    | %empty
                                    | error                                                                                                          { yyerror("Syntax Error in Initializer [empty Error]"); yyerrok; }
                                    | error InitializerValue                                                                                         { yyerror("Syntax Error in Initializer [Equal Error]"); yyerrok; } 
                                    | TOKEN_EQUAL error                                                                                              { yyerror("Syntax Error in Initializer [InitializerValue Error]"); yyerrok; }  
InitializerValue                :	Expression
				                    | TOKEN_LEFTBRACE InitializerValues TOKEN_RIGHTBRACE
                                    | error                                                                                                          { yyerror("Syntax Error in InitializerValue [Expression Error]"); yyerrok; }
                                    | error InitializerValues TOKEN_RIGHTBRACE                                                                       { yyerror("Syntax Error in InitializerValue [Left Brace Error]"); yyerrok; }
                                    | TOKEN_LEFTBRACE error TOKEN_RIGHTBRACE                                                                         { yyerror("Syntax Error in InitializerValue [InitializerValues Error]"); yyerrok; }
                                    | TOKEN_LEFTBRACE InitializerValues error                                                                        { yyerror("Syntax Error in InitializerValue [Right Brace Error]"); yyerrok; }
Expression                      :	Expression TOKEN_ADDSUB Expression
                                    | Expression TOKEN_AND Expression
                                    | Expression TOKEN_OR Expression
                                    | Expression TOKEN_NOR Expression
                                    | Expression TOKEN_XOR Expression
                                    | Expression TOKEN_XNOR Expression
                                    | Expression TOKEN_NAND Expression
                                    | Expression TOKEN_POWER Expression
                                    | Expression TOKEN_MODMULDI Expression
                                    | Expression TOKEN_GREATLESSEQU Expression
                                    | Expression TOKEN_EQUNOT Expression
                                    | TOKEN_NOT Expression
                                    | TOKEN_ADDSUB Expression %prec NEGATIVE
                                    | TOKEN_INCRDECR Expression
                                    | Variable TOKEN_INCRDECR
                                    | Variable 
                                    | Variable TOKEN_LEFTPARENTHESIS ListOfExpression TOKEN_RIGHTPARENTHESIS 
                                    | VariableTypeConst
                                    | TOKEN_LEFTPARENTHESIS GeneralExpression TOKEN_RIGHTPARENTHESIS 
                                    | TOKEN_LEFTPARENTHESIS StandardVariableType TOKEN_RIGHTPARENTHESIS 
                                    | ExpressionList
                                    | TOKEN_AMPERSAND VariableTypename
                                    
                                    | error TOKEN_ADDSUB Expression                                                                                   { yyerror("Syntax Error in Expression [Expression Error]"); yyerrok; }
                                    | Expression error Expression                                                                                     { yyerror("Syntax Error in Expression [Logic Gate/GreatLess/EquNot/Power/ModMulDi Error]"); yyerrok; }
                                    | Expression TOKEN_ADDSUB error                                                                                   { yyerror("Syntax Error in Expression [Expression Error]"); yyerrok; }  
                                    | error TOKEN_AND Expression                                                                                      { yyerror("Syntax Error in Expression [Expression Error]"); yyerrok; }
                                    | Expression TOKEN_AND error                                                                                      { yyerror("Syntax Error in Expression [Expression Error]"); yyerrok; }
                                    | error TOKEN_OR Expression                                                                                       { yyerror("Syntax Error in Expression [Expression Error]"); yyerrok; }
                                    | Expression TOKEN_OR error                                                                                       { yyerror("Syntax Error in Expression [Expression Error]"); yyerrok; } 
                                    | error TOKEN_NOR Expression                                                                                      { yyerror("Syntax Error in Expression [Expression Error]"); yyerrok; }
                                    | Expression TOKEN_NOR error                                                                                      { yyerror("Syntax Error in Expression [Expression Error]"); yyerrok; } 
                                    | error TOKEN_XOR Expression                                                                                      { yyerror("Syntax Error in Expression [Expression Error]"); yyerrok; }
                                    | Expression TOKEN_XOR error                                                                                      { yyerror("Syntax Error in Expression [Expression Error]"); yyerrok; }  
                                    | error TOKEN_XNOR Expression                                                                                     { yyerror("Syntax Error in Expression [Expression Error]"); yyerrok; }
                                    | Expression TOKEN_XNOR error                                                                                     { yyerror("Syntax Error in Expression [Expression Error]"); yyerrok; }  
                                    | error TOKEN_NAND Expression                                                                                     { yyerror("Syntax Error in Expression [Expression Error]"); yyerrok; }
                                    | Expression TOKEN_NAND error                                                                                     { yyerror("Syntax Error in Expression [Expression Error]"); yyerrok; }  
                                    | error TOKEN_POWER Expression                                                                                    { yyerror("Syntax Error in Expression [Expression Error]"); yyerrok; }
                                    | Expression TOKEN_POWER error                                                                                    { yyerror("Syntax Error in Expression [Expression Error]"); yyerrok; }
                                    | error TOKEN_MODMULDI Expression                                                                                 { yyerror("Syntax Error in Expression [Expression Error]"); yyerrok; }
                                    | Expression TOKEN_MODMULDI error                                                                                 { yyerror("Syntax Error in Expression [Expression Error]"); yyerrok; } 
                                    | error TOKEN_GREATLESSEQU Expression                                                                             { yyerror("Syntax Error in Expression [Expression Error]"); yyerrok; }
                                    | Expression TOKEN_GREATLESSEQU error                                                                             { yyerror("Syntax Error in Expression [Expression Error]"); yyerrok; }
                                    | error TOKEN_EQUNOT Expression                                                                                   { yyerror("Syntax Error in Expression [Expression Error]"); yyerrok; }
                                    | Expression TOKEN_EQUNOT error                                                                                   { yyerror("Syntax Error in Expression [Expression Error]"); yyerrok; }  
                                    | error Expression                                                                                                { yyerror("Syntax Error in Expression ['Not' Error]"); yyerrok; }
                                    | TOKEN_NOT error                                                                                                 { yyerror("Syntax Error in Expression [Expression Error]"); yyerrok; }
                                    | error Expression                                                                                                { yyerror("Syntax Error in Expression [Increase/Decrease Error]"); yyerrok; }
                                    | TOKEN_INCRDECR error                                                                                            { yyerror("Syntax Error in Expression [Expression Error]"); yyerrok; }
                                    | Variable error                                                                                                  { yyerror("Syntax Error in Expression [Increase/Decrease Error]"); yyerrok; }
                                    | error TOKEN_INCRDECR                                                                                            { yyerror("Syntax Error in Expression [Variable Error]"); yyerrok; }
                                    | error                                                                                                           { yyerror("Syntax Error in Expression [Variable/VariableTypeConst/ExpressionList Error]"); yyerrok; }
                                    | error TOKEN_LEFTPARENTHESIS ListOfExpression TOKEN_RIGHTPARENTHESIS                                             { yyerror("Syntax Error in Expression [Variable Error]"); yyerrok; }
                                    | Variable error ListOfExpression TOKEN_RIGHTPARENTHESIS                                                          { yyerror("Syntax Error in Expression [Left Parenthesis Error]"); yyerrok; }
                                    | Variable TOKEN_LEFTPARENTHESIS error TOKEN_RIGHTPARENTHESIS                                                     { yyerror("Syntax Error in Expression [ListOfExpression Error]"); yyerrok; }
                                    | Variable TOKEN_LEFTPARENTHESIS ListOfExpression error                                                           { yyerror("Syntax Error in Expression [Right Parenthesis Error]"); yyerrok; }
                                    | error GeneralExpression TOKEN_RIGHTPARENTHESIS                                                                  { yyerror("Syntax Error in Expression [Left Parenthesis Error]"); yyerrok; }
                                    | TOKEN_LEFTPARENTHESIS error TOKEN_RIGHTPARENTHESIS                                                              { yyerror("Syntax Error in Expression [GeneralExpression/StandardVariableType Error]"); yyerrok; }
                                    | TOKEN_LEFTPARENTHESIS GeneralExpression error                                                                   { yyerror("Syntax Error in Expression [Right Parenthesis Error]"); yyerrok; }                   
                                    | error Expression %prec NEGATIVE                                                                                 { yyerror("Syntax Error in Expression [Add/Substract Error]"); yyerrok; }
                                    | TOKEN_ADDSUB error %prec NEGATIVE                                                                               { yyerror("Syntax Error in Expression [Expression Error]"); yyerrok; }
                                    | TOKEN_ADDSUB Expression %prec error                                                                             { yyerror("Syntax Error in Expression [Negative Error]"); yyerrok; }                                       
Variable                        :	Variable TOKEN_LEFTBRACE GeneralExpression TOKEN_RIGHTBRACE                                                  
				                    | TOKEN_IDENTIFIER 
                                    | VariableTypename TOKEN_IDENTIFIER
                                    | error                                                                                                           { yyerror("Syntax Error in Variable [Identifier Error]"); yyerrok; }
                                    | error TOKEN_IDENTIFIER                                                                                          { yyerror("Syntax Error in Variable [VariableTypename Error]"); yyerrok; }
                                    | VariableTypename error                                                                                          { yyerror("Syntax Error in Variable [Identifier Error]"); yyerrok; }
                                    | error TOKEN_LEFTBRACE GeneralExpression TOKEN_RIGHTBRACE                                                        { yyerror("Syntax Error in Variable [Variable Error]"); yyerrok; }
                                    | Variable error GeneralExpression TOKEN_RIGHTBRACE                                                               { yyerror("Syntax Error in Variable [Left Brace Error]"); yyerrok; }
                                    | Variable TOKEN_LEFTBRACE error TOKEN_RIGHTBRACE                                                                 { yyerror("Syntax Error in Variable [GeneralExpression Error]"); yyerrok; }
                                    | Variable TOKEN_LEFTBRACE GeneralExpression error                                                                { yyerror("Syntax Error in Variable [Right Brace Error]"); yyerrok; }
GeneralExpression               :	GeneralExpression TOKEN_COMMA GeneralExpression
				                    | Assignment
                                    | error                                                                                                           { yyerror("Syntax Error in GeneralExpression [Assignment Error]"); yyerrok; }
                                    | error TOKEN_COMMA GeneralExpression                                                                             { yyerror("Syntax Error in GeneralExpression [GeneralExpression Error]"); yyerrok; }
                                    | GeneralExpression error GeneralExpression                                                                       { yyerror("Syntax Error in GeneralExpression [Comma Error]"); yyerrok; }
                                    | GeneralExpression TOKEN_COMMA error                                                                             { yyerror("Syntax Error in GeneralExpression [GeneralExpression Error]"); yyerrok; }
Assignment                      :	Variable TOKEN_EQUAL Assignment
				                    | Expression
                                    | error                                                                                                           { yyerror("Syntax Error in Assignment [Expression Error]"); yyerrok; }
                                    | error TOKEN_EQUAL Assignment                                                                                    { yyerror("Syntax Error in Assignment [Variable Error]"); yyerrok; }
                                    | Variable error Assignment                                                                                       { yyerror("Syntax Error in Assignment [Equal Error]"); yyerrok; }
                                    | Variable TOKEN_EQUAL error                                                                                      { yyerror("Syntax Error in Assignment [Assignment Error]"); yyerrok; }
ListOfExpression                :	GeneralExpression
				                    | %empty
                                    | error                                                                                                           { yyerror("Syntax Error in ListOfExpression [GeneralExpression/empty Error]"); yyerrok; }
VariableTypeConst               :	TOKEN_CHARACTERCONST
                                    | TOKEN_INTEGERCONST
                                    | TOKEN_FLOATCONST
                                    | TOKEN_CHARROWCONST
                                    | TOKEN_OCTACONST
                                    | TOKEN_BINARYCONST
                                    | TOKEN_HEXACONST
                                    | TOKEN_TRUE
                                    | TOKEN_FALSE
                                    | error                                                                                                            { yyerror("Syntax Error in VariableTypeConst [TypeConst Value Error]"); yyerrok; }  
ExpressionList                  :	TOKEN_LEFTBRACE ListOfExpression TOKEN_RIGHTBRACE
                                    | error ListOfExpression TOKEN_RIGHTBRACE                                                                          { yyerror("Syntax Error in ExpressionList [Left Brace Error]"); yyerrok; }
                                    | TOKEN_LEFTBRACE error TOKEN_RIGHTBRACE                                                                           { yyerror("Syntax Error in ExpressionList [ListOfExpression Error]"); yyerrok; }
                                    | TOKEN_LEFTBRACE ListOfExpression error                                                                           { yyerror("Syntax Error in ExpressionList [Right Brace Error]"); yyerrok; }
InitializerValues               :	InitializerValues TOKEN_COMMA InitializerValue
				                    | InitializerValue
                                    | error                                                                                                            { yyerror("Syntax Error in InitializerValues [InitializerValue Error]"); yyerrok; }
                                    | error TOKEN_COMMA InitializerValue                                                                               { yyerror("Syntax Error in InitializerValues"); yyerrok; }
                                    | InitializerValues error InitializerValue                                                                         { yyerror("Syntax Error in InitializerValues [Comma Error]"); yyerrok; }
                                    | InitializerValues TOKEN_COMMA error                                                                              { yyerror("Syntax Error in InitializerValues [InitializerValue Error]"); yyerrok; }
VariableDefinitions             :	VariableDefinitions TOKEN_COMMA VariableDefinition
				                    | VariableDefinition
                                    | error TOKEN_COMMA VariableDefinition                                                                             { yyerror("Syntax Error in VariableDefinitions"); yyerrok; }
                                    | VariableDefinitions error VariableDefinition                                                                     { yyerror("Syntax Error in VariableDefinitions [Comma Error]"); yyerrok; }
                                    | VariableDefinitions TOKEN_COMMA error                                                                            { yyerror("Syntax Error in VariableDefinitions [VariableDefinition Error]"); yyerrok; }
                                    | error                                                                                                            { yyerror("Syntax Error in VariableDefinitions [VariableDefinition Error]"); yyerrok; }
VariableDefinition              :	TOKEN_IDENTIFIER Dimensions
                                    | error Dimensions                                                                                                 { yyerror("Syntax Error in VariableDefinition [Identifier Error]"); yyerrok; }
                                    | TOKEN_IDENTIFIER error                                                                                           { yyerror("Syntax Error in VariableDefinition [Dimensions Error]"); yyerrok; }
ShortFunctionDeclaration        :	ShortFunctionHeaderParameters TOKEN_SEMICOLON
				                    | FunctionHeaderWithNoParameters TOKEN_SEMICOLON
                                    | error TOKEN_SEMICOLON                                                                                            { yyerror("Syntax Error in ShortFunctionDeclaration"); yyerrok; }
                                    | FunctionHeaderWithNoParameters error                                                                             { yyerror("Syntax Error in ShortFunctionDeclaration [Semicolon Error]"); yyerrok; } 
                                    | ShortFunctionHeaderParameters error                                                                              { yyerror("Syntax Error in ShortFunctionDeclaration [Semicolon Error]"); yyerrok; }
ShortFunctionHeaderParameters   :	StartFunctionHeader TOKEN_LEFTPARENTHESIS ParameterTypes TOKEN_RIGHTPARENTHESIS 
                                    | error TOKEN_LEFTPARENTHESIS ParameterTypes TOKEN_RIGHTPARENTHESIS                                                { yyerror("Syntax Error in ShortFunctionHeaderParameters [StartFunctionHeader Error]"); yyerrok; }
                                    | StartFunctionHeader error ParameterTypes TOKEN_RIGHTPARENTHESIS                                                  { yyerror("Syntax Error in ShortFunctionHeaderParameters [Left Parenthesis Error]"); yyerrok; }
                                    | StartFunctionHeader TOKEN_LEFTPARENTHESIS error TOKEN_RIGHTPARENTHESIS                                           { yyerror("Syntax Error in ShortFunctionHeaderParameters [ParameterTypes Error]"); yyerrok; }
                                    | StartFunctionHeader TOKEN_LEFTPARENTHESIS ParameterTypes error                                                   { yyerror("Syntax Error in ShortFunctionHeaderParameters [Right Parenthesis Error]"); yyerrok; }
StartFunctionHeader             : 	VariableTypename TOKEN_IDENTIFIER
                                    | TOKEN_VOID TOKEN_IDENTIFIER
                                    | error TOKEN_IDENTIFIER                                                                                           { yyerror("Syntax Error in StartFunctionHeader [VariableTypename Error]"); yyerrok; }
                                    | VariableTypename error                                                                                           { yyerror("Syntax Error in StartFunctionHeader [Identifier Error]"); yyerrok; }
ParameterTypes                  :	ParameterTypes TOKEN_COMMA VariableTypename ListOfDimensionsPass
				                    | VariableTypename ListOfDimensionsPass
                                    | error TOKEN_COMMA VariableTypename ListOfDimensionsPass                                                          { yyerror("Syntax Error in ParameterTypes [ParameterTypes Error]"); yyerrok; }
                                    | ParameterTypes error VariableTypename ListOfDimensionsPass                                                       { yyerror("Syntax Error in ParameterTypes [Comma Error]"); yyerrok; }  
                                    | ParameterTypes TOKEN_COMMA error ListOfDimensionsPass                                                            { yyerror("Syntax Error in ParameterTypes [VariableTypename Error]"); yyerrok; }
                                    | ParameterTypes TOKEN_COMMA VariableTypename error                                                                { yyerror("Syntax Error in ParameterTypes [ListOfDimensionsPass Error]"); yyerrok; }
                                    | error ListOfDimensionsPass                                                                                       { yyerror("Syntax Error in ParameterTypes [VariableTypename Error]"); yyerrok; }
                                    | VariableTypename error                                                                                           { yyerror("Syntax Error in ParameterTypes [ListOfDimensionsPass Error]"); yyerrok; }
ListOfDimensionsPass            :	TOKEN_AMPERSAND
				                    | Dimensions
                                    | error                                                                                                            { yyerror("Syntax Error in ListOfDimensionsPass [Ampersand/Dimensions Error]"); yyerrok; }  
FunctionHeaderWithNoParameters  :   StartFunctionHeader TOKEN_LEFTPARENTHESIS TOKEN_RIGHTPARENTHESIS
                                    | error TOKEN_LEFTPARENTHESIS TOKEN_RIGHTPARENTHESIS                                                               { yyerror("Syntax Error in FunctionHeaderWithNoParameters [StartFunctionHeader Error]"); yyerrok; }
                                    | StartFunctionHeader error TOKEN_RIGHTPARENTHESIS                                                                 { yyerror("Syntax Error in FunctionHeaderWithNoParameters [Left Parenthesis Error]"); yyerrok; }
                                    | StartFunctionHeader TOKEN_LEFTPARENTHESIS error                                                                  { yyerror("Syntax Error in FunctionHeaderWithNoParameters [Right Parenthesis Error]"); yyerrok; }
GlobalVariableDeclaration       :   VariableTypename VariableDefinitionInitializers TOKEN_SEMICOLON
                                    | error VariableDefinitionInitializers TOKEN_SEMICOLON                                                             { yyerror("Syntax Error in GlobalVariableDeclaration [VariableTypename Error]"); yyerrok; }
                                    | VariableTypename error TOKEN_SEMICOLON                                                                           { yyerror("Syntax Error in GlobalVariableDeclaration [VariableDefinitionInitializers Error]"); yyerrok; }
                                    | VariableTypename VariableDefinitionInitializers error                                                            { yyerror("Syntax Error in GlobalVariableDeclaration [Semicolon Error]"); yyerrok; }                                           
VariableDefinitionInitializers  :	VariableDefinitionInitializers TOKEN_COMMA VariableDefinitionInitializer
				                    | VariableDefinitionInitializer
                                    | error                                                                                                            { yyerror("Syntax Error in VariableDefinitionInitializers [VariableDefinitionInitializer Error]"); yyerrok; }                                                                                             
                                    | error TOKEN_COMMA VariableDefinitionInitializer                                                                  { yyerror("Syntax Error in VariableDefinitionInitializers"); yyerrok; }
                                    | VariableDefinitionInitializers error VariableDefinitionInitializer                                               { yyerror("Syntax Error in VariableDefinitionInitializers [Comma Error]"); yyerrok; }
                                    | VariableDefinitionInitializers TOKEN_COMMA error                                                                 { yyerror("Syntax Error in VariableDefinitionInitializers [VariableDefinitionInitializer Error]"); yyerrok; }
VariableDefinitionInitializer   :	VariableDefinition Initializer
                                    | error Initializer                                                                                                { yyerror("Syntax Error in VariableDefinitionInitializer [VariableDefinition Error]"); yyerrok; }
                                    | VariableDefinition error                                                                                         { yyerror("Syntax Error in VariableDefinitionInitializer [Initializer Error]"); yyerrok; }
FunctionDeclaration             :	ShortFunctionDeclaration
				                    | FullFunctionDeclaration
                                    | error                                                                                                            { yyerror("Syntax Error in FunctionDeclaration [ShortFunctionDeclaration/FullFunctionDeclaration Error]"); yyerrok; }    
FullFunctionDeclaration         :	FunctionHeader TOKEN_LEFTBRACE StatementsDeclaration TOKEN_RIGHTBRACE
				                    | FunctionHeaderWithNoParameters TOKEN_LEFTBRACE StatementsDeclaration TOKEN_RIGHTBRACE
                                    | error TOKEN_LEFTBRACE StatementsDeclaration TOKEN_RIGHTBRACE                                                     { yyerror("Syntax Error in FullFunctionDeclaration [FunctionHeader/FunctionHeaderWithNoParameters Error]"); yyerrok; }
                                    | FunctionHeaderWithNoParameters error StatementsDeclaration TOKEN_RIGHTBRACE                                      { yyerror("Syntax Error in FullFunctionDeclaration [Left Brace Error]"); yyerrok; }
                                    | FunctionHeaderWithNoParameters TOKEN_LEFTBRACE error TOKEN_RIGHTBRACE                                            { yyerror("Syntax Error in FullFunctionDeclaration [StatementsDeclaration Error]"); yyerrok; }
                                    | FunctionHeaderWithNoParameters TOKEN_LEFTBRACE StatementsDeclaration error                                       { yyerror("Syntax Error in FullFunctionDeclaration [Right Brace Error]"); yyerrok; }
                                    | FunctionHeader error StatementsDeclaration TOKEN_RIGHTBRACE                                                      { yyerror("Syntax Error in FullFunctionDeclaration [Left Brace Error]"); yyerrok; }
                                    | FunctionHeader TOKEN_LEFTBRACE error TOKEN_RIGHTBRACE                                                            { yyerror("Syntax Error in FullFunctionDeclaration [StatementsDeclaration Error]"); yyerrok; }
                                    | FunctionHeader TOKEN_LEFTBRACE StatementsDeclaration error                                                       { yyerror("Syntax Error in FullFunctionDeclaration [Right Brace Error]"); yyerrok; }
FunctionHeader                  :	StartFunctionHeader TOKEN_LEFTPARENTHESIS ListOfParameters TOKEN_RIGHTPARENTHESIS
                                    | error TOKEN_LEFTPARENTHESIS ListOfParameters TOKEN_RIGHTPARENTHESIS                                              { yyerror("Syntax Error in FunctionHeader [StartFunctionHeader Error]"); yyerrok; }
                                    | StartFunctionHeader error ListOfParameters TOKEN_RIGHTPARENTHESIS                                                { yyerror("Syntax Error in FunctionHeader [Left Parenthesis Error]"); yyerrok; }
                                    | StartFunctionHeader TOKEN_LEFTPARENTHESIS error TOKEN_RIGHTPARENTHESIS                                           { yyerror("Syntax Error in FunctionHeader [ListOfParameters Error]"); yyerrok; }
                                    | StartFunctionHeader TOKEN_LEFTPARENTHESIS ListOfParameters error                                                 { yyerror("Syntax Error in FunctionHeader [Right Parenthesis Error]"); yyerrok; }
ListOfParameters                :	ListOfParameters TOKEN_COMMA VariableTypename VariableDefinitionPass
				                    | VariableTypename VariableDefinitionPass
                                    | error TOKEN_COMMA VariableTypename VariableDefinitionPass                                                        { yyerror("Syntax Error in ListOfParameters"); yyerrok; }
                                    | ListOfParameters error VariableTypename VariableDefinitionPass                                                   { yyerror("Syntax Error in ListOfParameters [Comma Error]"); yyerrok; }
                                    | ListOfParameters TOKEN_COMMA error VariableDefinitionPass                                                        { yyerror("Syntax Error in ListOfParameters [VariableTypename Error]"); yyerrok; }
                                    | ListOfParameters TOKEN_COMMA VariableTypename error                                                              { yyerror("Syntax Error in ListOfParameters [VariableDefinitionPass Error]"); yyerrok; }
                                    | error VariableDefinitionPass                                                                                     { yyerror("Syntax Error in ListOfParameters [VariableTypename Error]"); yyerrok; }
                                    | VariableTypename error                                                                                           { yyerror("Syntax Error in ListOfParameters [VariableDefinitionPass Error]"); yyerrok; }
VariableDefinitionPass          :	VariableDefinition
				                    | TOKEN_AMPERSAND TOKEN_IDENTIFIER
                                    | error                                                                                                            { yyerror("Syntax Error in VariableDefinitionPass [VariableDefinition Error]"); yyerrok; }
                                    | error TOKEN_IDENTIFIER                                                                                           { yyerror("Syntax Error in VariableDefinitionPass [Ampersand Error]"); yyerrok; }
                                    | TOKEN_AMPERSAND error                                                                                            { yyerror("Syntax Error in VariableDefinitionPass [Identifier Error]"); yyerrok; }
StatementsDeclaration           :	Declarations Statements
                                    | Declarations 
                                    | Statements
                                    | %empty
                                    | error Statements                                                                                                 { yyerror("Syntax Error in StatementsDeclaration [Declarations Error]"); yyerrok; }
                                    | Declarations error                                                                                               { yyerror("Syntax Error in StatementsDeclaration [Statements Error]"); yyerrok; }
                                    | error                                                                                                            { yyerror("Syntax Error in StatementsDeclaration"); yyerrok; }
Declarations                    :	Declarations VariableTypename VariableDefinitions TOKEN_SEMICOLON
				                    | VariableTypename VariableDefinitions TOKEN_SEMICOLON                                                    
                                    | error VariableTypename VariableDefinitions TOKEN_SEMICOLON                                                       { yyerror("Syntax Error in Declarations [Declarations Error]"); yyerrok; }
                                    | Declarations error VariableDefinitions TOKEN_SEMICOLON                                                           { yyerror("Syntax Error in Declarations [VariableTypename Error]"); yyerrok; }
                                    | Declarations VariableTypename error TOKEN_SEMICOLON                                                              { yyerror("Syntax Error in Declarations [VariableDefinitions Error]"); yyerrok; }
                                    | Declarations VariableTypename VariableDefinitions error                                                          { yyerror("Syntax Error in Declarations [Semicolon Error]"); yyerrok; }
                                    | error VariableDefinitions TOKEN_SEMICOLON                                                                        { yyerror("Syntax Error in Declarations [VariableTypename Error]"); yyerrok; }
                                    | VariableTypename error TOKEN_SEMICOLON                                                                           { yyerror("Syntax Error in Declarations [VariableDefinitions Error]"); yyerrok; }
                                    | VariableTypename VariableDefinitions error                                                                       { yyerror("Syntax Error in Declarations [Semicolon Error]"); yyerrok; }
Statements                      :	Statements Statement
				                    | Statement
                                    | error Statement                                                                                                  { yyerror("Syntax Error in Statements Declaration [Statements Error]"); yyerrok; }
                                    | Statements error                                                                                                 { yyerror("Syntax Error in Statements Declaration [Statement Error]"); yyerrok; }
                                    | error                                                                                                            { yyerror("Syntax Error in Statements Declaration [Statement Error]"); yyerrok; }
Statement                       :	ExpressionStatement
                                    | WhetherStatement
                                    | DuringStatement
                                    | ReturnStatement
                                    | CompStatement
                                    | WriteStatement
                                    | ReadStatement
                                    | TOKEN_SEMICOLON
                                    | error                                                                                                            { yyerror("Syntax Error in Statement Declaration"); yyerrok; }
ExpressionStatement             :	GeneralExpression TOKEN_SEMICOLON
                                    | error TOKEN_SEMICOLON                                                                                            { yyerror("Syntax Error in Expression Statement Declaration [GeneralExpression Error]"); yyerrok; }
                                    | GeneralExpression error                                                                                          { yyerror("Syntax Error in Expression Statement Declaration [Semicolon Error]"); yyerrok; }
WhetherStatement                :	TOKEN_WHETHER TOKEN_LEFTPARENTHESIS GeneralExpression TOKEN_RIGHTPARENTHESIS TOKEN_DO Statement WhetherOtherwise
                                    | error TOKEN_LEFTPARENTHESIS GeneralExpression TOKEN_RIGHTPARENTHESIS TOKEN_DO Statement WhetherOtherwise         { yyerror("Syntax Error in WhetherStatement Declaration ['Whether' Error]"); yyerrok; }
                                    | TOKEN_WHETHER error GeneralExpression TOKEN_RIGHTPARENTHESIS TOKEN_DO Statement WhetherOtherwise                 { yyerror("Syntax Error in WhetherStatement Declaration [Left Parenthesis Error]"); yyerrok; }
                                    | TOKEN_WHETHER TOKEN_LEFTPARENTHESIS error TOKEN_RIGHTPARENTHESIS TOKEN_DO Statement WhetherOtherwise             { yyerror("Syntax Error in WhetherStatement Declaration [GeneralExpression Error]"); yyerrok; }
                                    | TOKEN_WHETHER TOKEN_LEFTPARENTHESIS GeneralExpression error TOKEN_DO Statement WhetherOtherwise                  { yyerror("Syntax Error in WhetherStatement Declaration [Right Parenthesis Error"); yyerrok; }
                                    | TOKEN_WHETHER TOKEN_LEFTPARENTHESIS GeneralExpression TOKEN_RIGHTPARENTHESIS error Statement WhetherOtherwise    { yyerror("Syntax Error in WhetherStatement Declaration ['Do' Error]"); yyerrok; }
                                    | TOKEN_WHETHER TOKEN_LEFTPARENTHESIS GeneralExpression TOKEN_RIGHTPARENTHESIS TOKEN_DO error WhetherOtherwise     { yyerror("Syntax Error in WhetherStatement Declaration [Statement Error]"); yyerrok; }
                                    | TOKEN_WHETHER TOKEN_LEFTPARENTHESIS GeneralExpression TOKEN_RIGHTPARENTHESIS TOKEN_DO Statement error            { yyerror("Syntax Error in WhetherStatement Declaration [Otherwise Statement Error]"); yyerrok; }
WhetherOtherwise                :	TOKEN_OTHERWISE TOKEN_DO Statement                                                                  
                                    | error TOKEN_DO Statement                                                                                         { yyerror("Syntax Error in OtherwiseStatement Declaration ['Otherwise' Error]"); yyerrok; }
                                    | TOKEN_OTHERWISE error Statement                                                                                  { yyerror("Syntax Error in OtherwiseStatement Declaration ['Do' Error]"); yyerrok; }
                                    | TOKEN_OTHERWISE TOKEN_DO error                                                                                   { yyerror("Syntax Error in OtherwiseStatement Declaration [Statement Error]"); yyerrok; }
				                    | %empty %prec OTHERWISE_DANGLING
                                    | error %prec OTHERWISE_DANGLING                                                                                   { yyerror("Syntax Error in OtherwiseStatement Declaration [Otherwise Dangling Error]"); yyerrok; }
                                    | %empty %prec error                                                                                               { yyerror("Syntax Error in OtherwiseStatement Declaration [Otherwise Dangling Error]"); yyerrok; }
DuringStatement                 : 	TOKEN_DURING TOKEN_LEFTPARENTHESIS GeneralExpression TOKEN_RIGHTPARENTHESIS TOKEN_DO Statement
                                    | error TOKEN_LEFTPARENTHESIS GeneralExpression TOKEN_RIGHTPARENTHESIS TOKEN_DO Statement                          { yyerror("Syntax Error in DuringStatement Declaration ['During' Error]"); yyerrok; }                   
                                    | TOKEN_DURING error GeneralExpression TOKEN_RIGHTPARENTHESIS TOKEN_DO Statement                                   { yyerror("Syntax Error in DuringStatement Declaration [Left Parenthesis Error]"); yyerrok; }
                                    | TOKEN_DURING TOKEN_LEFTPARENTHESIS error TOKEN_RIGHTPARENTHESIS TOKEN_DO Statement                               { yyerror("Syntax Error in DuringStatement Declaration [GeneralExpression Error]"); yyerrok; }
                                    | TOKEN_DURING TOKEN_LEFTPARENTHESIS GeneralExpression error TOKEN_DO Statement                                    { yyerror("Syntax Error in DuringStatement Declaration [Right Parenthesis Error]"); yyerrok; }
                                    | TOKEN_DURING TOKEN_LEFTPARENTHESIS GeneralExpression TOKEN_RIGHTPARENTHESIS error Statement                      { yyerror("Syntax Error in DuringStatement Declaration ['Do' Error]"); yyerrok; }
                                    | TOKEN_DURING TOKEN_LEFTPARENTHESIS GeneralExpression TOKEN_RIGHTPARENTHESIS TOKEN_DO error                       { yyerror("Syntax Error in DuringStatement Declaration [Statement Error]"); yyerrok; }
WriteStatement                  :   TOKEN_WRITE TOKEN_LEFTPARENTHESIS GeneralExpression TOKEN_RIGHTPARENTHESIS TOKEN_SEMICOLON
                                    | error TOKEN_LEFTPARENTHESIS GeneralExpression TOKEN_RIGHTPARENTHESIS TOKEN_SEMICOLON                             { yyerror("Syntax Error in WriteStatement Declaration ['Write' Error]"); yyerrok; }
                                    | TOKEN_WRITE error GeneralExpression TOKEN_RIGHTPARENTHESIS TOKEN_SEMICOLON                                       { yyerror("Syntax Error in WriteStatement Declaration [Left Parenthesis Error]"); yyerrok; }
                                    | TOKEN_WRITE TOKEN_LEFTPARENTHESIS error TOKEN_RIGHTPARENTHESIS TOKEN_SEMICOLON                                   { yyerror("Syntax Error in WriteStatement Declaration [GeneralExpression Error]"); yyerrok; }
                                    | TOKEN_WRITE TOKEN_LEFTPARENTHESIS GeneralExpression error TOKEN_SEMICOLON                                        { yyerror("Syntax Error in WriteStatement Declaration [Right Parenthesis Error]"); yyerrok; }
                                    | TOKEN_WRITE TOKEN_LEFTPARENTHESIS GeneralExpression TOKEN_RIGHTPARENTHESIS error                                 { yyerror("Syntax Error in WriteStatement Declaration [Semicolon Error]"); yyerrok; }
ReadStatement                   :   TOKEN_READ TOKEN_LEFTPARENTHESIS GeneralExpression TOKEN_RIGHTPARENTHESIS TOKEN_SEMICOLON
                                    | error TOKEN_LEFTPARENTHESIS GeneralExpression TOKEN_RIGHTPARENTHESIS TOKEN_SEMICOLON                             { yyerror("Syntax Error in ReadStatement Declaration ['Read' Error]"); yyerrok; }
                                    | TOKEN_READ error GeneralExpression TOKEN_RIGHTPARENTHESIS TOKEN_SEMICOLON                                        { yyerror("Syntax Error in ReadStatement Declaration [Left Parenthesis Error]"); yyerrok; }
                                    | TOKEN_READ TOKEN_LEFTPARENTHESIS error TOKEN_RIGHTPARENTHESIS TOKEN_SEMICOLON                                    { yyerror("Syntax Error in ReadStatement Declaration [GeneralExpression Error]"); yyerrok; }
                                    | TOKEN_READ TOKEN_LEFTPARENTHESIS GeneralExpression error TOKEN_SEMICOLON                                         { yyerror("Syntax Error in ReadStatement Declaration [Right Parenthesis Error]"); yyerrok; }
                                    | TOKEN_READ TOKEN_LEFTPARENTHESIS GeneralExpression TOKEN_RIGHTPARENTHESIS error                                  { yyerror("Syntax Error in ReadStatement Declaration [Semicolon Error]"); yyerrok; }
ExpressionsOptimizer            :	GeneralExpression 
                                    | %empty
                                    | error                                                                                                            { yyerror("Syntax Error in ExpressionsOptimizer Declaration"); yyerrok; }
ReturnStatement                 :	TOKEN_RETURN ExpressionsOptimizer TOKEN_SEMICOLON
                                    | error ExpressionsOptimizer TOKEN_SEMICOLON                                                                       { yyerror("Syntax Error in ReturnStatement Declaration ['Return' Error]"); yyerrok; }
                                    | TOKEN_RETURN error TOKEN_SEMICOLON                                                                               { yyerror("Syntax Error in ReturnStatement Declaration [Error in Expression after Return]"); yyerrok; }
                                    | TOKEN_RETURN ExpressionsOptimizer error                                                                          { yyerror("Syntax Error in ReturnStatement Declaration [Semicolon Error]"); yyerrok; }
CompStatement                   :	TOKEN_LEFTBRACE StatementsDeclaration TOKEN_RIGHTBRACE
                                    | error StatementsDeclaration TOKEN_RIGHTBRACE                                                                     { yyerror("Syntax Error in CompStatement Declaration [Left Brace Error]"); yyerrok; }
                                    | TOKEN_LEFTBRACE error TOKEN_RIGHTBRACE                                                                           { yyerror("Syntax Error in CompStatement Declaration [Declerations Statements Error]"); yyerrok; }
                                    | TOKEN_LEFTBRACE StatementsDeclaration error                                                                      { yyerror("Syntax Error in CompStatement Declaration [Right Brace Error]"); yyerrok; }
HeadfuncFunction                :	HeadfuncHeader TOKEN_LEFTBRACKET StatementsDeclaration TOKEN_RIGHTBRACKET
                                    | error TOKEN_LEFTBRACKET StatementsDeclaration TOKEN_RIGHTBRACKET                                                 { yyerror("Syntax Error in HeadfuncFunction Declaration"); yyerrok; }
                                    | HeadfuncHeader error StatementsDeclaration TOKEN_RIGHTBRACKET                                                    { yyerror("Syntax Error in HeadfuncFunction Declaration [Left Bracket Error]"); yyerrok; }
                                    | HeadfuncHeader TOKEN_LEFTBRACKET error TOKEN_RIGHTBRACKET                                                        { yyerror("Syntax Error in HeadfuncFunction Declaration [Declerations Statements Error]"); yyerrok; }
                                    | HeadfuncHeader TOKEN_LEFTBRACKET StatementsDeclaration error                                                     { yyerror("Syntax Error in HeadfuncFunction Declaration [Right Bracket Error]"); yyerrok; }
HeadfuncHeader                  :	TOKEN_INTEGER TOKEN_HEADFUNC TOKEN_LEFTPARENTHESIS TOKEN_RIGHTPARENTHESIS 
                                    | error TOKEN_HEADFUNC TOKEN_LEFTPARENTHESIS TOKEN_RIGHTPARENTHESIS                                                { yyerror("Syntax Error in HeadfuncHeader Declaration [Headfunc Integer Declaration Error]"); yyerrok; }
                                    | TOKEN_INTEGER error TOKEN_LEFTPARENTHESIS TOKEN_RIGHTPARENTHESIS                                                 { yyerror("Syntax Error in HeadfuncHeader Declaration ['Headfunc' Function Name Error]"); yyerrok; }
                                    | TOKEN_INTEGER TOKEN_HEADFUNC error TOKEN_RIGHTPARENTHESIS                                                        { yyerror("Syntax Error in HeadfuncHeader Declaration [Left Parenthesis Error]"); yyerrok; }
                                    | TOKEN_INTEGER TOKEN_HEADFUNC TOKEN_LEFTPARENTHESIS error                                                         { yyerror("Syntax Error in HeadfuncHeader Declaration [Right Parenthesis Error]"); yyerrok; }
%%

int main(int argc, char *argv[])
{
    int token; 
    if(argc > 1)
    {
        yyin = fopen(argv[1],"r");
        if(yyin == NULL)
        {
                perror ("Can't Open The File\n");
                return -1;
        }
    }     

yyparse();
fclose(yyin);

return 0;
}