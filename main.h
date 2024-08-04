#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct format - Handler for printf
 * @ph: Type char pointer of the specfier
 * @function: Function for the conversion specifier
 *
 */
typedef struct format
{
	char *ph;
	int (*function)();
} convert;

int _printf(const char *format, ...);

int _putchar(char c);
int print_char(va_list val);
int _strlen(char *str);
int _strlenconst(const char *str);
int print_str(va_list val);
int print_mod(void);
int print_ints(va_list args);
int print_dec(va_list args);
int print_binfunc(va_list val);
int print_unsints(va_list args);
int print_octalval(va_list val);
int print_hexno(va_list val);
int print_chexno(va_list val);
int print_strv2(va_list val);
int print_HEX_extra(unsigned int num);
int print_ptr(va_list val);
int print_hextra(unsigned long int no_);
int str_rev(va_list args);
int print_rot13(va_list args);

#endif /* MAIN_H */
