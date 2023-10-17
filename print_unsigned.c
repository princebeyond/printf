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
	int digits = 0;

	if (num == 0)
	{
		_putchar('0');
		return 1;
	}

	while (num > 0)
	{
		digit = num % 10;
		_putchar(digit + '0');
		num /= 10;
		digits++;
	}

    return digits;

}
