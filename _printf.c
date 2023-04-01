#include "main.h"
#include <stddef.h>
/**
 * s_printf - function called for -printf
 * @format: format
 * @arr: array
 * @i: counter
 * @arg: list
 * @e: counter
 * @cnt: counter of characters
 *
 * Return: number of characters
 **/
int s_printf(const char *format, printer arr[], va_list arg, int i, int e,
		int cnt)
{
	while (format[i])
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			cnt++;
		} else if (format[i] == '%' && (format[i + 1] == 'c' ||
		format[i + 1] == 's' || format[i + 1] == 'i' || format[i + 1] == 'd'))
		{
			i++;
			while (*((arr + e)->ch) != format[i])
				e++;
			cnt = cnt + (arr + e)->f(arg);
		} else
		{
			if (format[i + 1] == '%')
				_putchar(format[i++]);
			else if (format)
				_putchar(format[i]);
			cnt++;
		}
		i++;
		e = 0;
	}
	return (cnt);
}
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
		return (-1);
	va_start(arg, format);
	cnt = s_printf(format, arr, arg, i, e, cnt);
	return (cnt);
}
