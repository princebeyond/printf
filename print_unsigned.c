#include "main.h"

/**
 * print_unsigned - prints an unsigned integer
 * @val: argument
 *
 * Return: number of characters printed
 */
int print_unsigned(va_list val)
{
	unsigned int num = va_arg(val, unsigned int);
	int count = 0;

	count += print_unum(num);
	return (count);
}

