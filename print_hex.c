#include "main.h"

/**
 * print_hexadecimal_base - a function that printing base for hex numbers
 * @arg: argument list containing hexadecimal numbers
 * @_case: checks the case if its uppercase or lowercase
 * Return: retrns the number to be printed
 */

int print_hexadecimal_base(va_list arg, char _case)
{
	unsigned int n = va_arg(arg, unsigned int);
	int nChar;

	if (n == 0)
		return (_putchar('0'));
	nChar = print_unsignedIntToHex(n, _case);

	return (nChar);
}

/**
 * print_hex_lower - a function that prints lowercase hex numbers
 * @arg: a list of hexadecimals to be printed
 * Return: numbers printed
 */

int print_hex_lower(va_list arg)
{
return (print_hexadecimal_base(arg, 'a'));
}

/**
 * print_hex_upper - a function that prints uppercase hexa number
 * @arg: hexadecimal numbers to be printed
 * Return: returns the numbers to be printed
 */

int print_hex_upper(va_list arg)
{
	return (print_hexadecimal_base(arg, 'A'));
}
