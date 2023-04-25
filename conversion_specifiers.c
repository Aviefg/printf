#include "main.h"

/**
 * check_specifier - checks for specifier
 * @format: format string
 * @count: char to be printed
 * @i: format string iterator
 * @args: va_list
 * Return: count
 */

static print_handler handlers[3] = {
	{"c", print_char},
	{"s", print_str},
	{NULL, NULL}
};

int (*check_specifier(const char *format))(va_list args)
{
	size_t i = 0;

	for (; handlers[i].specifier != NULL; i++)
	{
		if (handlers[i].specifier[0] == format[0])
			return (handlers[i].function);
	}
	return (NULL);
}
