#include "main.h"
#include <stddef.h>
/**
 * _printf - function that produces output according to a format
 * @format: format
 *
 * Return: the number of printed characters
 **/
int _printf(const char *format, ...)
{
	printer arr[] = {
		{"c", print_char},
		{"s", print_str},
		{"i", print_int},
		{"d", print_int},
		{NULL, NULL}
	};
	int i = 0;
	int e = 0;
	int cnt = 0;
	va_list arg;

	if (format == NULL)
		return (0);
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
