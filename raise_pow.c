#include "main.h"

/**
 * _pow - this finds the exponent of a number
 * @base: base number
 * @exponent: power
 * Return: answer
 */
unsigned long _pow(unsigned int base, unsigned int exponent)
{
	unsigned int i;
	unsigned long answer = base;

	for (i = 1; i < exponent; i++)
	answer *= base;

	return (answer);
}
