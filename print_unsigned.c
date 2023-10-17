#include "main.h"

/**
 * print_unsigned - prints an unsigned integer
 * @u: argument
 *
 * Return: number of characters printed
 */
int print_unsigned(va_list u)
{
	unsigned int num = va_arg(u, unsigned int);
	int digits = 0;
	int digit;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		digit = num % 10;
		_putchar(digit + '0');
		num /= 10;
		digits++;
	}

	return (digits);

}
