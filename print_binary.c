/**
 * print_binary - converts an unsigned int to binary
 * @val: argument
 *
 * Return: the number of characters printed
 */
int print_binary(va_list val)
{
	unsigned int num = va_arg(val, unsigned int);
	int count = 0;
	int i;
	int bit;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	for (i = 31; i >= 0; i--)
	{
		bit = (num >> i) & 1;
		_putchar(bit + '0');
		count++;
	}

	return count;
}

