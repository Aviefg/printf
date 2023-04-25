#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
/**
 * struct print_handler - Struct for handling print formatting
 *
 * @specifier: Pointer to a string representing the format specifier
 * @function: Function pointer to a function that handles the format specifier
 */

int _printf(const char *format, ...);
int (*check_specifier(const char *))(va_list);
int print_str(va_list args);
int print_char(va_list args);
int print_cent(va_list args);
int print_int(va_list);
int print_dec(va_list);
typedef struct print_handler
{
	const char *specifier;
	int (*function)(va_list);
} print_handler;

#endif
