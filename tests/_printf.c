#include "main.h"

/**
 * _printf - Produces an output according to a format
 * @format: a character string. The format string is composed
 * of zero or more directives.
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
	unsigned int a;
	int num_char = 0;
	char *str;
	char ch;

	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	for (a = 0; format[a] != '\0'; a++)
	{
		if (format[a] == '%')
		{
			a++;
			switch (format[a])
			{
				case 'c':
					ch = va_arg(args, int);
					write(1, &ch, 1);
					num_char++;
					break;
				case 's':
					str = va_arg(args, char *);
					if (str == NULL)
						str = "(null)";
					while (*str)
					{
						write(1, str, 1);
						str++;
						num_char++;
					}
					break;
				case '%':
					write(1, "%", 1);
					num_char++;
					break;
				default:
					write(1, "%", 1);
					write(1, &format[a], 1);
					num_char += 2;
					break;
			}
		}
		else
		{
			write(1, &format[a], 1);
			num_char++;
		}
	}
	va_end(args);
	return (num_char);
}
