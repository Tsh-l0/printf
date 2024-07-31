#include "main.h"

/**
 * print_ints - Prints an integer
 *
 * @n: The integer that will be printed
 *
 * Return: The value of characters printed
 */
int print_ints(int ints)
{
	int num_count = 0;
	unsigned int abs_count;
	char c;

	if (ints < 0)
	{
		write(1, "-", 1);
		num_count++;
		abs_count = -ints;
	}
	else
	{
		abs_count = ints;
	}

	/* Check for numbers with multiple digits */
	if (abs_count / 10)
		num_count += print_ints(ints_count / 10);

	c = (abs_count % 10) + '0';
	write(1, &c, 1);

	return (num_count + 1);
}
