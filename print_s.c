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
	int i;
	int count = 0;
	char *str;

	str = va_arg(args, char *);
		if (str == NULL)
			return (-1);

		while (str[i])
		{
			count = write(1, &str[i], 1);
			i = i + 1;
		}

		return (count);
}
