#include "main.h"

/**
 * print_hextra - Prints a hexdecimal value of a number
 * @no_: The number whos hexdecimal value to print
 * Return: Counter
 */
int print_hextra(unsigned long int no_)
{
	long int a;
	long int *arr;
	long int no_count = 0;
	unsigned long int tem = no_;

	while (no_ / 16 != 0)
	{
		no_ /= 16;
		no_count++;
	}
	no_count++;
	arr = malloc(no_count * sizeof(long int));

	for (a = 0; a < no_count; a++)
	{
		arr[a] = tem % 16;
		tem = tem / 16;
	}
	for (a = no_count - 1; a >= 0; a--)
	{
		if (arr[a] > 9)
			arr[a] = arr[a] + 39;
		_putchar(arr[a] + '0');
	}
	free(arr);
	return (no_count);
}
