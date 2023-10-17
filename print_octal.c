#include "main.h"

/**
 * print_octal - prints an octal number
 * @val: argument
 *
 * Return: number of characters printed
 */
int print_octal(va_list val)
{
	unsigned int num = va_arg(val, unsigned int);
	int count = 0;

	count += print_octnum(num);
	return (count);
}

