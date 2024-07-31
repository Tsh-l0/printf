#include "main.h"

/**
 * print_char - Writes one character to the standard output
 * @c: The character to be written to print_char
 */
void print_char(char a)
{
	write(1, &a, 1);
}

/**
 * print_num - Prints an integer
 * @num: The number to be printed
 *
 * Return: The number of items printd
 */
int print_num(int num)
{
	int num_count = 0;

	if (num < 0)
	{
		print_char('-');
		num_count++;
		num = -num;
	}

	if (num / 10)
		num_count += print_num(num / 10);

	print_char(num % 10 + '0');
	num_count++;

	return (num_count);
}
