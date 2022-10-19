#include "main.h"

/**
 * print_hex_base -printing base for hexadecimal numbers
 * @arg: argument list containing hexadecimal
 * @_case: checks the ccase if uppercase or lower case
 * Return: number printed
 */
int print_hex_base(va_list arg, char _case)
{
	unsigned int num = va_arg(arg, unsigned int);
	int nbrCharacters;

	if (num == 0)
		return (_putchar('0'));
	nbrCharacters = print_unsignedIntToHex(num, _case);

	return (nbrCharacters);
}
/**
 * print_hex -prints lower case hexadecimal
 * @arg: list hexs to print
 * Return: numbers printed
 */
int print_hex(va_list arg)
{
return (print_hex_base(arg, 'a'));
}
/**
 * print_HEX - prints upper case hexadecimal
 * @arg: hexadecimal to print
 * Return: numbers printed
 */
int print_HEX(va_list arg)
{
	return (print_hex_base(arg, 'A'));
}
