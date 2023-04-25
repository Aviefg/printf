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
int _putchar(char c);
int print_str(va_list args);
int print_char(va_list args);
int print_cent(va_list args);
int print_int(va_list args);
int print_dec(va_list args);
int print_u(va_list unsign);
int print_b(va_list bin);
int print_r(va_list rev);
int print_p(va_list p);
unsigned long _pow(unsigned int base, unsigned int exponent);
int print_o(va_list oct);
int print_S(va_list S);
int print_d(va_list dig);
int print_hex(unsigned int n, unsigned int c);
int print_X(va_list X);
int print_x(va_list x);
int hex_print(char c);
int print_R(va_list R);

typedef struct print_handler
{
	const char *specifier;
	int (*function)(va_list);
} print_handler;

#endif
