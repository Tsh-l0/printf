#include "main.h"

/**
 * str_rev - Function that prints a string in reverse
 * @args: Arguments
 *
 * Return: String in revers
 */
int str_rev(va_list args)
{
	char *str = va_arg(args, char*);
	int a;
	int b = 0;

	if (str == NULL)
		str = "(null)";
	while (str[b] != '\0')
		b++;
	for (a = b - 1; a >= 0; a--)
		_putchar(str[a]);
	return (b);
}
