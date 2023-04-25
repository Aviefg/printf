#include "main.h"

/**
 * print_str - this prints a variadic string to stdout
 * @args: variadic list
 *
 * Return: count on Success
 * on failure -1
 */

int print_str(va_list args)
{
	int c = 0;
	int i;
	char *my_string;

	my_string = va_arg(args, char *);
	if (my_string == NULL)
		return (-1);

	while (my_string[i])
	{
		c = write(1, &my_string[i], 1);
		i = i + 1;
	}

	return (c);
}
