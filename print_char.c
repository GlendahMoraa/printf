#include "main.h"

/**
 * print_char - a function that prints a char
 * @c: character that is to be printed
 * Return: always return 1 for success
 */

int print_char(va_list c)
{
	char characters = (char)va_arg(c, int);

	_putchar(characters);
	return (1);
}

/**
 * print_string - a function that prints a string
 * @str: a string that is to be printed
 *
 * Return: returns a number of chars printed on the stdio
 */

int print_string(va_list str)
{
	int count;
	char *s = va_arg(str, char *);

	if (s == NULL)
		s = "(null)";
	for (count = 0; s[count]; count++)
	{
		_putchar(s[count]);
	}
	return (count);
}

/**
 * print_hex - The function prints a character's ascii value in uppercase hex
 * @c: a character to be printed
 *
 * Return: returns the number of characters printed should always be 2
 */
static int print_hex(char c)
{
	int i;
	char letters = 'A' - ':';
	char l[2];

	l[0] = c / 16;
	l[1] = c % 16;
	for (i = 0; i < 2; i++)
	{
		if (l[i] >= 10)
			_putchar('0' + letters + l[i]);
		else
			_putchar('0' + l[i]);
	}
	return (i);
}

/**
 * print_S_N - prints a string and nonprintable character ascii values
 * @S: string to print
 *
 * Return: number of chars printed
 */
int print_S_N(va_list S)
{
	unsigned int j;
	int i = 0;
	char *str = va_arg(S, char *);

	if (str == NULL)
		str = "(null)";
	for (j = 0; str[j]; j++)
	{
		if (str[j] < 32 || str[j] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			i += 2;
			i += hex_print(str[j]);
		}
		else
		{
			_putchar(str[j]);
			i++;
		}
	}
	return (i);
}

/**
 * print_reverse -a function that prints astring in reverse
 * @r: a string to be print in reverse
 *
 * Return: returns the number of characters printed from the string
 */

int print_reverse(va_list r)
{
	char *str;
	int j, i = 0;

	str = va_arg(r, char *);
	if (str == NULL)
		str = ")llun(";
	for (j = 0; str[j]; j++)
		;
	for (j -= 1; j >= 0; j--)
	{
		_putchar(str[j]);
		i++;
	}
	return (i);
}
