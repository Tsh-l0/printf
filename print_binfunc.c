#include "main.h"

/**
 * print_binfunc - Prints the binary representation of a
 * number.
 * @val: The number whose binary to be found
 * @Return: The binary representation of @val
 */
int print_binfunc(va_list val)
{
	int flag = 0;
	int num_count = 0;
	int ib, sb = 1, bb;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int pb;

	for (ib = 0; ib < 32; ib++)
	{
		/* Calculate bit-mass */
		pb = ((sb << (31 - ib)) & num);
		if (pb >> (31 - ib))
			flag = 1;
		/* Check if flag has been set */
		if (flag)
		{
			/* Check the value of the bit-mass */
			bb = pb >> (31 - ib);
			_putchar(bb + 48);
			num_count++;
		}
	}
	/* Check if any bit has been printed */
	if (num_count == 0)
	{
		num_count++;
		_putchar('0');
	}
	return (num_count);
}
