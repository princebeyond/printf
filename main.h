#ifndef MAIN_H
#define MAIN_H




#include <stdarg.h>
int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list c);
int print_string(va_list s);
int print_int(va_list i);
int print_dec(va_list d);
int print_binary(va_list b);
int print_unsigned(va_list args);
int print_octal(va_list val);
int print_hex(va_list val);
int print_hex_upper(va_list val);

/**
  * struct code_format - Struct format
  *
  * @sc: The specifiers
  * @f: The function associated
  */
typedef struct code_format
{
	char *sc;
	int (*f)(va_list);
} code_f;

#endif
