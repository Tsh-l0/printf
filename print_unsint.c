#include "main.h"

/**
 * print_unsints - Handles i conversion specifiers
 * @args: The values passed to be printed
 * Return: The value of the i conversion specifier
 */
int print_unsints(va_list args)
{
	unsigned int ints_ = va_arg(args, unsigned int);
	int no, last_no = ints_ % 10, digs, expon = 1;
	int a = 1;

	ints_ = ints_ / 10;
	no = ints_;

	if (last_no < 0)
	{
		_putchar('-');
		no = -no;
		ints_ = -ints_;
		last_no = -last_no;
		a++;
	}

	if (no > 0)
	{
		while (no / 10 != 0)
		{
			expon = expon * 10;
			no = no / 10;
		}
		no = ints_;
		while (expon > 0)
		{
			digs = no / expon;
			_putchar(digs + '0');
			no = no - (digs * expon);
			expon = expon / 10;
			a++;
		}
	}
	_putchar(last_no + '0');
	return (a);
}
