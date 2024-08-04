#include "main.h"

/**
 *print_HEX_extra - Prints the hexdecimal value of a number
 *
 * @num: The number to be printed
 * Return: The hexdecimal value of the number
 */
int print_HEX_extra(unsigned int num)
{
	int hg;
	int *arr;
	int num_count = 0;
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		num_count++;
	}
	num_count++;
	arr = malloc(num_count * sizeof(int));

	for (hg = 0; hg < num_count; hg++)
	{
		arr[hg] = temp % 16;
		temp /= 16;
	}

	for (hg = num_count - 1; hg >= 0; hg--)
	{
		if (arr[hg] > 9)
			arr[hg] = arr[hg] + 7;
		_putchar(arr[hg] + '0');
	}
	free(arr);
	return (num_count);
}
