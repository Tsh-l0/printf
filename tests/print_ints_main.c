#include "main.h"
#include <stdio.h>

int main(void)
{
    int count;

    count = _printf("Positive number: %d\n", 12345);
    printf("Printed %d characters.\n", count);

    count = _printf("Negative number: %d\n", -6789);
    printf("Printed %d characters.\n", count);

    count = _printf("Zero: %d\n", 0);
    printf("Printed %d characters.\n", count);

    count = _printf("Numbers: %d, %d, %d\n", 42, -42, 0);
    printf("Printed %d characters.\n", count);

    return 0;
}

