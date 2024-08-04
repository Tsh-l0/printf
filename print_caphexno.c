#include "main.h"

/**
 * print_chexno - Prints the capital hex form of a number
 * @val: The number we are looking for
 * Return: The hex value of a number
 */

int print_chexno(va_list val)
{
	int hg;
	int *arr;
	int no_count = 0;
	unsigned int no = va_arg(val, unsigned int);
	unsigned int temp_no = no;

	while (no / 16 != 0)
	{
		no /= 16;
		no_count++;
	}
	no_count++;
	arr = malloc(no_count * sizeof(int));

	for (hg = 0; hg < no_count; hg++)
	{
		arr[hg] = temp_no % 16;
		temp_no /= 16;
	}
	for (hg = no_count - 1; hg >= 0; hg--)
	{
		if (arr[hg] > 9)
			arr[hg] = arr[hg] + 7;
		_putchar(arr[hg] + '0');
	}
	free(arr);
	return (no_count);
}
