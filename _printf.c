#include "main.h"
#include <stdarg.h>
/**
 * _printf - function that produces output according to a format
 * @format: is a character string
 *
 * Return: the number of characters printed (except the null byte)
 **/
int _printf(const char *format, ...)
{
	int i = 0;
	int x;
	char *z;
	va_list args;

	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
		i++;
		switch (format[i])
		{
			case 'c':
				x = va_arg(args, int);
				_putchar(x);
				break;
			case 's':
				z = va_arg(args, char *);
				while(*z)
				{
					_putchar(*z);
					z++;
				}
				break;
			default:
				_putchar(format[i]);
				break;
		}
		} else
		{
			_putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (0);
}
