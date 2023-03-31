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
	int i = 0;
	va_list ptr;
	int (*print)(va_list) = NULL;

	va_start (ptr, format);

	while (*format)
	{
		if (*format == '%' && *(format + 1) != '%')
		{
			format++;
			print = get_func(format);
			if (*(format) == '\0')
				return (-1);
			else
				i += print(ptr);
		}
		else if (*format == '%' && *(format + 1) == '%')
		{
			format++;
			_putchar('%');
			i++;
		}
		else
		{
			_putchar(*format);
			i++;
		}
		format++;
	}
	va_end(ptr);
	return (i);
}
