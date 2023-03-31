#include "main.h"

/**
 * print_string - is a function that prints the string
 * @ptr: va_list containind the string
 * Return: the number of bytes printed
 */

int print_string(va_list ptr)
{
	char *z = va_arg(ptr, char *);
	while (*z)
	{
		_putchar(*z);
		z++;
	}
	return (1);
}
