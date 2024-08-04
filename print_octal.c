#include "main.h"

/**
 * print_octalval - Prints the octal value of a number
 * @val: The number whose octal value to find 
 * Return: The octal value
 */
int print_octalval(va_list val)
{
	int ab;
	int *arr;
	int num_count = 0;
	unsigned int no = va_arg(val, unsigned int);
	unsigned int tm = no;

	while (no / 8 != 0)
	{
		no /= 8;
		num_count++;
	}
	num_count++;
	arr = malloc(num_count * sizeof(int));

	for (ab = 0; ab < num_count; ab++)
	{
		arr[ab] = tm % 8;
		tm /= 8;
	}
	for (ab = num_count - 1; ab >= 0; ab--)
	{
		_putchar(arr[ab] + '0');
	}
	free(arr);
	return (num_count);
}
