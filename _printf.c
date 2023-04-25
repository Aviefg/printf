#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * _printf - this prints a string in a format
 * @format: string to print (char *)
 * @...: variadic parameters (unknown)
 *
 * Return: count
 */

int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0;
	int value = 0;
	int (*n)(va_list);
	va_list args;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	while (format[i])
	{
		if (format[i] != '%')
		{
			value = write(1, &format[i], 1);
			count = count + value;
			i++;
			continue;
		}
		if (format[i] == '%')
		{
			n = check_specifier(&format[i + 1]);
			if (n != NULL)
			{
				value = n(args);
				count = count + value;
				i = i + 2;
				continue;
			}
			if (format[i + 1] == '\0')
				break;
			if (format[i + 1] != '\0')
			{
				value = write(1, &format[i + 1], 1);
				count = count + value;
				i = i + 2;
				continue;
			}
		}
	}
	return (count);
}
