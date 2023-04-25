#include "main.h"

/**
 * print_cent - prints % to stdout
 * @args: variadic list
 *
 * Return: 1
 */

int print_cent(va_list args)
{
	(void)args;

	write(1, "%", 1);

	return (1);
}
