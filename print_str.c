#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @str: The string to get the length of
 *
 * Return: The length of @str
 */
int _strlen(char *str)
{
	int str_len;

	for (str_len = 0; str[str_len] != 0; str_len++);
	return (str_len);
}

/**
 * *_strlenconst - Returns the length of a constant character
 * string
 * @str: The string to get the length of
 *
 * Return: The length of @str
 */
int _strlenconst(const char *str)
{
	int str_lenc;

	for (str_lenc = 0; str[str_lenc] != 0; str_lenc++);
	return (str_lenc);
}
