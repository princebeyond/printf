#include "main.h"

/**
 * print_octal - prints an octal number
 * @o: argument
 *
 * Return: number of characters printed
 */
int print_octal(va_list o)
{
	unsigned int num = va_arg(o, unsigned int);
	int octal_digits[10];
	int count = 0;
	int i = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		octal_digits[i] = num % 8;
		num /= 8;
		i++;
	}

	while (i > 0)
	{
		_putchar('0' + octal_digits[i - 1]);
		count++;
		i--;
	}

	return (count);
}
