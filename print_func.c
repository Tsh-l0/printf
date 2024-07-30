#include "main.h"

/**
 * _printf - A function that produces output according to a format
 * @format: Formats string values containing chars and specifiers
 * Return: The number of chars
 */
int _printf(const char *format, ...)
{
	va_list args;
	int b = 0, char_count = 0;
	char char_c;
	const char *s;

	if (!format)
		return (-1);

	va_start(args, format);
	while (format[b])
	{
		if (format[b] == '%')
		{
			b++;
			if (format[b] == 'c')
			{
				char_c = (char) va_arg(args, int);
				write(1, &char_c, 1); 
				char_count++;
			}
			else if (format[b] == 's')
			{
				s = va_arg(args, char *);
				if (!s) s = "(null)";
				while (*s) write(1, s++, 1), char_count++;
			}
			else if (format[b] == '%')
				write(1, "%", 1), char_count++;
		}
		else
			write(1, &format[b], 1), char_count++;
		b++;
	}
	va_end(args);
	return (char_count);
}
