#ifndef PRINTF_H
#define PRINTF_H

#include <stdlib.h>
#include <stdarg.h>
/**
 * struct printHandler - struct to choose the right function depending
 * on the format specifier passed to _printf()
 * @c: format specifier
 * @f: pointer to the correct printing function
 */
typedef struct printHandler
{
	char c;
	unsigned int (*f)(va_list ap);
} ph

int _printf(const char *fmt, ...); 
unsigned int (*get_print(char s))(); 
unsigned int print_string(va_list l);
unsigned int print_char(va_list l);
unsigned int _putchar(char c);
int _strcmp(const char *s1, const char *s2); 

#endif
