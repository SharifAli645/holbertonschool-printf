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
int s_printf(const char *format, printer arr[], va_list arg, int i, int e,
		int cnt);
int print_char(va_list ptr);
int print_str(va_list ptr);
int print_int(va_list ptr);
void int_to_string(int n);
#endif
