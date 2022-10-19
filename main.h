#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);

typedef struct identifierStruct
{
char *identifier;
int (*printer)(va_list);
} identifierStruct;

#endif
