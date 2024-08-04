#include "main.h"

/**
 * print_hexno - Prints the hexgecimal form of a number
 * @val: The number whose hecgecimal number to look for 
 * Return: Hexgecimal number
 */
int print_hexno(va_list val)
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
			arr[hg] = arr[hg] + 39;
		_putchar(arr[hg] + '0');
	}
	free(arr);
	return (no_count);
}
