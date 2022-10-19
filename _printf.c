#include "main.h"

/**
 * print_identifiers - prints special characters
 * @next: character after %
 * @arg: argument for identifier
 * Description: function that prints special characters
 * Return: number of characters printed
 */

int print_identifiers(char next, va_list arg)
{
	int functs_index;

	identifierStruct functs[] = {
		{"c", print_char},
		{"s", print_str},
		{"d", print_int},
		{"i", print_int},
		{"b", print_unsignedToBinary},
		{"u", print_unsigned},
		{"x", print_hex},
		{"X", print_HEX},
		{NULL, NULL}
	};
	for (functs_index = 0; functs[functs_index].identifier != NULL; functs_index++)
	{
		if (functs[functs_index].identifier[0] == next)
		{
			return (functs[functs_index].printer(arg));
		}
	}
	return (0);
}

/**
 *_printf - similar to printf from stdio
 *@format: character string composed to 0 or more directives
 *Description: Produces output according to format
 *Return: Returns the number of characters printed
 *(excluding null byte used to end output to strings)
 *or -1 incase of an error
 */

int _printf(const char *format, ...)
{
	unsigned int j;
	int identifierPrint = 0, characterPrinted = 0;
	va_list arg;

	va_start(arg, format);
	if (format == NULL)
		return (-1);
	for (j = 0; format[j] != '\0'; j++)
	{
		if (format[j] != '%')
		{
			_putchar(format[j]);
			characterPrinted++;
			continue;
		}
		if (format[j + 1] == '%')
		{
			_putchar('%');
			characterPrinted++;
			j++;
			continue;
		}
		if (format[j + 1] == '\0')
			return (-1);
		identifierPrint = print_identifiers(format[j + 1], arg);
		if (identifierPrint == -1 || identifierPrint != 0)
			j++;
		if (identifierPrint > 0)
			characterPrinted += identifierPrint;
		if (identifierPrint == 0)
		{
			_putchar('%');
			characterPrinted++;
		}
	}
	va_end(arg);
	return (characterPrinted);
}
