#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int _ptintf(const char *format, ...);
int (*check_specifier(const char*))(va_list);

/**
 * struct_func - struct for specifier to printing
 * @t: character to be compared
 * @f: function that handle printing
 */

typedef struct func
{
	char *t;
	int (*f)(va_list);
} func_t;

int print_char(va_list);
int print_str(va_list);
int print_cent(va_list);
int print_int(va_list);
int print_dec(va_list);

#endif
