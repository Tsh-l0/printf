#include "main.h"

/**
 * _printf - Is a function that prints the correct function
 *
 * @format: The identifier being searched for
 * @Return: String length
 */
int _printf(const char * const format, ...)
{
	convert q[] = {
		{"%s", print_str}, {"%c", print_char}, {"%%", print_mod}, {"%i", print_ints}, {"%d", print_dec}, {"%r", str_rev}, {"%R", print_rot13}, {"%b", print_binfunc}, {"%u", print_unsints}, {"%o", print_octalval}, {"%x", print_hexno},{"%X", print_chexno}, {"%S", print_strv2}, {"%p", print_ptr}
	};

	va_list args;
	int a = 0, b, str_length = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[a] != '\0')
	{
		b = 13;
		while (b >= 0)
		{
			if (q[b].ph[0] == format[a] && q[b].ph[1] == format[a + 1])
			{
				str_length += q[b].function(args);
				a = a + 2;
				goto Here;
			}
			b--;
		}
		_putchar(format[a]);
		str_length++;
		a++;
	}
	va_end(args);
	return (str_length);
}
