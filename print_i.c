#include "main.h"

/**
 * print_int - prints a given integer from a variadic list
 * @args: variadic list
 *
 * Return: count
 */

int print_int(va_list args)
{
	int i = 0;
	int count = 0;
	int n;
	int my_arr[10];
	char x[1];
	n = va_arg(args, int);

	while (n != 0)
	{
		my_arr[i] = (n % 10);
			n = n / 10;
		if (n == 0)
			break;
		else
			i++;
	}

	for (i; i >= 0; i--)
	{
		x[0] = ('0' + my_arr[i]);
		count += write(1, x, 1);
	}

	return (count);
}
