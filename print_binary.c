#include "main.h"
#include <stddef.h>
/**
 * print_binary - print binary
 * @args: arguements
 *
 * Return: success
 */
int print_binary(va_list args)
{
	int count, mask;
	unsigned int num;

	num = va_arg(args, unsigned int);

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	count = 0;
	mask = 1U << (sizeof(unsigned int) * 8 - 1);

	while (mask > 0)
	{
		if (num & mask)
			_putchar('1');
		else
			_putchar('0');
		mask >>= 1;
		count++;
	}

	return (count);
}

