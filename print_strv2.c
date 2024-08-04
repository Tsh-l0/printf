#include "main.h"

/**
 * print_strv2 - 
 *
 *
 */
int print_strv2(va_list val)
{
	char *str;
	int st, str_length = 0;
	int str_val;

	str = va_arg(val, char *);
	if (str == NULL)
		str = "(null)";

	for (st = 0; str[st] != '\0'; st++)
	{
		if (str[st] < 32 || str[st] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			str_length = str_length + 2;
			str_val = str[st];
			if (str_val < 16)
			{
				_putchar('0');
				str_length++;
			}
			str_length = str_length + print_HEX_extra((unsigned int)str_val);
		}
		else
		{
			_putchar(str[st]);
			str_length++;
		}
	}
	return (str_length);
}
