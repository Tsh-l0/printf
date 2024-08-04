#include "main.h"

/**
 * print_char - Prints a character
 * @val - Arguments
 * Return: 1 (Success)
 */
int print_char(va_list val)
{
	char char_;

	char_ = va_arg(val, int);
	_putchar(char_);
	return (1);
}
