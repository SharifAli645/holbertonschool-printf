#include "main.h"
/**
 * print_char - function that prints 1 character
 * @ptr: a list
 *
 * Return: Always 1
 **/
int print_char(va_list ptr)
{
	_putchar(va_arg(ptr, int));
	return (1);
}
/**
 * print_str - function that prints a string
 * @ptr: a list
 *
 * Return: size of the string
 **/
int print_str(va_list ptr)
{
	int cnt = 0;
	char *z = va_arg(ptr, char *);

	while (*z)
	{
		_putchar(*z);
		z++;
		cnt++;
	}
	return (cnt);
}
