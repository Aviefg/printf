#include "main.h"

/**
 * print_char - prints a character to stdout
 * @args: variadic list args
 *
 * Return: count
 */

int print_char(va_list args)
{
	char c = (char)va_arg(args, int);
	int count = 0;

	if (c)
	{
		count = write(1, &c, 1);
			return (count);
	}

	return (0);
}
