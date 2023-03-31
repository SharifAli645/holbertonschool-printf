#ifndef ONE_H
#define ONE_H
#include <stdarg.h>
typedef struct printer
{
	char *ch;
	int (*f)(va_list);
} printer;
int _printf(const char *format, ...);
int _putchar(char c);
int (*get_func(const char *recognizer))(va_lis);
int print_char(va_list ptr);
int print_string(va_list ptr);
#endif
