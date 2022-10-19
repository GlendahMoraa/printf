#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _putchar(char c);
int print_char(va_list arg);
int print_str(va_list arg);
int _printf(const char *format, ...);
int print_int(va_list arg);
int print_unsignedToBinary(va_list arg);
int print_unsigned(va_list arg);
void print_binary(unsigned int n, unsigned int *printed);
int print_hex_base(va_list arg, char _case);
int print_hex(va_list arg);
int print_HEX(va_list arg);
int prinlint(va_list arguments, char *buf, unsigned int ibuf);

/**
 * struct identifierStruct- picks structure to printout
 * @indentifier: type
 * @printer: printing function
 */

typedef struct identifierStruct
{
char *indentifier;
int (*printer)(va_list);
} identifierStruct;

#endif
