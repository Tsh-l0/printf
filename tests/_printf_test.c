#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    printf("Length:[%d, %d]\n", len, len2);

    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');

    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");

    _printf("Percent:[%%]\n");
    printf("Percent:[%%]\n");

    len = _printf("Length of previous sentence: %d\n", len);
    len2 = printf("Length of previous sentence: %d\n", len2);
    printf("Length of both:[%d, %d]\n", len, len2);

    return (0);
}

