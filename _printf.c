#include <stddef.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printf - function that produces output according to a format
 * @format: is a character string
 *
 * Return: the number of characters printed (except the null byte)
 **/
int _printf(const char *format, ...)
{
	printer arr[] = {
		{"c", print_char},
		{"s", print_str},
		{NULL, NULL}
	};
	int i = 0;
	int e = 0;
	int cnt = 0;
	va_list arg;

	va_start(arg, format);
	while (format[i])
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			cnt++;
			i++;
		} else if (format[i] == '%')
		{
			i++;
		        while (*((arr + e)->ch) != format[i] && (arr[e].ch) != NULL)
			        e++;
			if (arr[e].ch != NULL)
			{
				cnt = cnt + (arr + e)->f(arg);
				i++;
			}
		}
		e = 0;
	}
	return (cnt);
}
