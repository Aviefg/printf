#include "main.h"

/**
 * print_r - prints string in rev
 * @r: string to print
 * Return: count
 */
int print_r(va_list rev)
{
	char *str;
	int i, count = 0;

	str = va_arg(rev, char *);
	if (str == NULL)
		str = ")llun(";
	for (i = 0; str[i]; i++)
		;
	for (i -= 1; i >= 0; i--)
	{
		_putchar(str[i]);
		count++;
	}
	return (count);
}
