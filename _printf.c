#include "main.h"
#include <stddef.h>
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
	int counter = 0;
	char *z;
	va_list args;

	if (format == NULL)
		return (-1);
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
					counter++;
					break;
				case 's':
					z = va_arg(args, char *);
					while (*z)
					{
						_putchar(*z);
						z++;
						counter++;
					}
					break;
				default:
					_putchar(format[i]);
					counter++;
					break;
			}
		} else
		{
			_putchar(format[i]);
			counter++;
		}
		i++;
	}
	_putchar(10);
	va_end(args);
	return (counter);
}
