#include "main.h"

/**
 * print_hex_upper - prints an uppercase hexadecimal number
 * @val: argument
 *
 * Return: number of characters printed
 */
int print_hex_upper(va_list val)
{
	unsigned int num = va_arg(val, unsigned int);
	int count = 0;

	count += print_hexnum_upper(num);
	return (count);
}
