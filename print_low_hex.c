#include "main.h"

/**
 * print_lower_hex - prints a lowercase hexadecimal number
 * @x: argument
 *
 * Return: number of characters printed
 */
int print_lower_hex(va_list x)
{
	unsigned int num = va_arg(x, unsigned int);
	char hex_digits[] = "0123456789abcdef";
	int count = 0;
	int hex[10];
	int i = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		hex[i] = num % 16;
		num /= 16;
		i++;
	}

	while (i > 0)
	{
		_putchar(hex_digits[hex[i - 1]]);
		count++;
		i--;
	}

	return (count);
}

