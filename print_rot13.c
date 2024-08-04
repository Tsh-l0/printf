#include "main.h"

/**
 * print_rot13 - Convert string to rot13
 * @args: Printf arguments
 * Return: Counter
 */
int print_rot13(va_list args)
{
	int a, b, str_count = 0;
	int c = 0;
	char *str = va_arg(args, char*);
	char za[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char zb[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (str == NULL)
		str = "(null)";
	for (a = 0; str[a]; a++)
	{
		c = 0;
		for (b = 0; za[b] && !c; b++)
		{
			if (str[a] == za[b])
			{
				_putchar(zb[b]);
				str_count++;
				c = 1;
			}
		}
		if (!c)
		{
			_putchar(str[a]);
			str_count++;
		}
	}
	return (str_count);
}
