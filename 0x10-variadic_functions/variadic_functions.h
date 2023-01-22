#ifndef variadic_functions_h
#define variadic_functions_h
#include <stdarg.h>
#include <stdio.h>

/*
 * struct check - paramenters to check against
 * @c: type
 * @f: the function to send it to
 */
typedef struct check
{
	char *chk;
	void (*f)(va_list list);
} check_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);

#endif
