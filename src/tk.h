//token file
/** 
jojoLang Tokenizer
MIT License Copyright
catoj1107
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lexer.h"

struct TokenTextPair
{
   enum TokenType type;
   const char * text;
};

static struct TokenTextPair TokenTextPairs[] = {
   { jojo_Plus,                  "+" },
   { jojo_Minus,                 "-" },
   { jojo_Asterisk,              "*" },
   { jojo_Divide,                "/" },
   { jojo_PlusEquals,            "+=" },
   { jojo_MinusEquals,           "-=" },
   { jojo_DivideEquals,          "/=" },
   { jojo_MultiplyEquals,        "*=" },
   { jojo_Increment,             "++" },
   { jojo_Decrement,             "--" },
   { jojo_Comma,                 "," },
   { jojo_Dot,                   "." },
   { jojo_DereferenceDot,        "->" },
   { jojo_Colon,                 ":" },
   { jojo_OpenParen,             "(" },
   { jojo_ClosedParen,           ")" },
   { jojo_OpenSquareBraket,      "[" },
   { jojo_ClosedSquareBraket,    "]" },
   { jojo_OpenCurlyBracket,      "{" },
   { jojo_ClosedCurlyBracket,    "}" },
   { jojo_Semicolon,             ";" },
   { jojo_Equals,                "=" },
   { jojo_DoubleEquals,          "==" },
   { jojo_LessThan,              "<" },
   { jojo_GreaterThan,           ">" },
   { jojo_LessThanOrEqualTo,     "<=" },
   { jojo_GreaterThanOrEqualTo,  ">=" },
   { jojo_NotEqual,              "!=" },
   { jojo_BitShiftLeft,          "<<" },
   { jojo_BitShiftRight,         ">>" },
   { jojo_BitwiseNot,            "~" },
   { jojo_BitwiseAnd,            "&" },
   { jojo_BitwiseOr,             "|" },
   { jojo_LogicalNot,            "!" },
   { jojo_LogicalAnd,            "&&" },
   { jojo_LogicalOr,             "||" },
   { jojo_Struct,                "struct" },
   { jojo_Enum,                  "enum" },
   { jojo_Union,                 "union" },
   { jojo_Typedef,               "typedef" },
   { jojo_If,                    "if" },
   { jojo_For,                   "for" },
   { jojo_Do,                    "do" },
   { jojo_While,                 "while" },
   { jojo_Goto,                  "goto" },
   { jojo_Switch,                "switch" },
   { jojo_Case,                  "case" },
   { jojo_Break,                 "break" },
   { jojo_Static,                "static" },
   { jojo_Extern,                "extern" },
   { jojo_Void,                  "void" }, 
   { jojo_Const,                 "const" },
   { jojo_Return,                "return" },
   { jojo_Unknown,               NULL }
};

struct Lexer
{
   struct Token * tokens;
   size_t size;
   size_t count;
};

