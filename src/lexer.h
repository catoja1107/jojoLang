#ifndef LEXER_H
#define LEXER_H
#include "tk.h"

typedef struct LEXER_STRUCTURE
{
	char c;
	unsigned int i;
	char * contents;
} lexer_T;

//TBC