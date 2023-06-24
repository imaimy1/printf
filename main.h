#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int print_char(va_list a, params_t *p);
int print_string(va_list a, params_t *p);
int print_percent(va_list a, params_t *p);
int print_int(va_list a, params_t *p);

int _printf(const char *format, ...);

#endif /* MAIN_H */
