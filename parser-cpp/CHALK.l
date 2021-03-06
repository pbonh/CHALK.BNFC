/* This FLex file was machine-generated by the BNF converter */
%option prefix="CHALKFrontendyy"
%{
#include <string.h>
#include "Parser.H"
extern int CHALKFrontendyy_mylinenumber ;

%}

LETTER [a-zA-Z]
CAPITAL [A-Z]
SMALL [a-z]
DIGIT [0-9]
IDENT [a-zA-Z0-9'_]
%START YYINITIAL CHAR CHARESC CHAREND STRING ESCAPED

%%  /* Rules. */

<YYINITIAL>"20"      	 return _SYMB_0;
<YYINITIAL>"CBLOCK"      	 return _SYMB_1;
<YYINITIAL>"CELL"      	 return _SYMB_2;
<YYINITIAL>"CIRCLE"      	 return _SYMB_3;
<YYINITIAL>"CTRAPEZOID"      	 return _SYMB_4;
<YYINITIAL>"PAD"      	 return _SYMB_5;
<YYINITIAL>"PATH"      	 return _SYMB_6;
<YYINITIAL>"PLACEMENT"      	 return _SYMB_7;
<YYINITIAL>"POLYGON"      	 return _SYMB_8;
<YYINITIAL>"PROPERTY"      	 return _SYMB_9;
<YYINITIAL>"Repetition"      	 return _SYMB_10;
<YYINITIAL>"TEXT"      	 return _SYMB_11;
<YYINITIAL>"TRAPEZOID"      	 return _SYMB_12;
<YYINITIAL>"XELEMENT"      	 return _SYMB_13;
<YYINITIAL>"XGEOMETRY"      	 return _SYMB_14;
<YYINITIAL>"XYABSOLUTE"      	 return _SYMB_15;
<YYINITIAL>"XYRELATIVE"      	 return _SYMB_16;



<YYINITIAL>{DIGIT}+      	 CHALKFrontendyylval._int = atoi(yytext); return CHALKFRONTEND__INTEGER_;
\n  ++CHALKFrontendyy_mylinenumber ;
<YYINITIAL>[ \t\r\n\f]      	 /* ignore white space. */;
<YYINITIAL>.      	 return CHALKFRONTEND__ERROR_;
%%
void CHALKFrontendinitialize_lexer(FILE *inp) { yyrestart(inp); BEGIN YYINITIAL; }
int yywrap(void) { return 1; }

