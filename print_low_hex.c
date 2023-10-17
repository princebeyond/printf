#include "main.h"

/**
 * print_hex - prints a lowercase hexadecimal number
 * @val: argument
 *
 * Return: number of characters printed
 */
int print_hex(va_list val)
{
	unsigned int num = va_arg(val, unsigned int);
	int count = 0;

	count += print_hexnum(num);
	return (count);
}
