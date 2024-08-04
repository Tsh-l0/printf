#include "main.h"

/**
 * print_ptr - Prints the hexdecimal value of a number
 * @val: The number to be printed
 * Return: The hexdecimal value of a number
 */
int print_ptr(va_list val)
{
	void *ptr;
	char *str = "(nil)";
	long int a;
	int b;
	int c;

	ptr = va_arg(val, void*);
	if (ptr == NULL)
	{
		for (c = 0; str[c] != '\0'; c++)
		{
			_putchar(str[c]);
		}
		return (c);
	}

	a = (unsigned long int)ptr;
	_putchar('0');
	_putchar('x');
	b = print_hextra(a);
	return (b + 2);
}
