#include "main.h"
/**
 * print_str - Prints a string
 *
 * @val: Arguments to be accepted
 *
 * @Return: String length
 */
int print_str(va_list val)
{
	char *str;
	int str_, str_len;

	str = va_arg(val, char *);
	if (str == NULL)
	{
		str = "(null)";
		str_len = _strlen(str);
		for (str_ = 0; str_ < str_len; str++)
			_putchar(str[str_]);
		return (str_len);
	}
	else
	{
		str_len = _strlen(str);
		for (str_ = 0; str_ < str_len; str++)
			_putchar(str[str_]);
		return (str_len);
	}
}
