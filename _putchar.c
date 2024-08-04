#include "main.h"

/**
 * _putchar - Writes the character C to stdout
 * @c: The character to print
 *
 * Return: 1 (Success), -1 on error. errno is set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
