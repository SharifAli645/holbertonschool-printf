#include "main.h"

/**
 * print_char - print a char argument
 * @ptr: va_list containing the char to print as the next element
 * Return: the number of bytes printed
 */

int print_char(va_list ptr)
{
	_putchar(va_arg(ptr, int));
	return (1);
}
