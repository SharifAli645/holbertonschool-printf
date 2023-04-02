#include "main.h"
#include <stddef.h>
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
	char *nl = "(null)";

	if (z == NULL)
	{
		while (*nl)
		{
			_putchar(*nl);
			nl++;
		}
		return (6);
	}
	while (*z)
	{
		_putchar(*z);
		z++;
		cnt++;
	}
	return (cnt);
}
/**
 * print_int - function that counts the digits of an integer
 * @ptr: a list
 *
 * Return: the number of digits
 **/
int print_int(va_list ptr)
{
	long int tmp = va_arg(ptr, int);
	long int tmp1 = tmp;
	int cnt = 0;

	if (tmp < 0)
	{
		cnt++;
		tmp = tmp * -1;
		_putchar('-');
	}
	while (tmp1 / 10)
	{
		cnt++;
		tmp1 = tmp1 / 10;
	}
	int_to_string(tmp);
	cnt++;
	return (cnt);
}
/**
 * int_to_string - function that prints an integer
 * @n: integer
 *
 * Return: Always void
 **/
void int_to_string(long int n)
{
	long int num = n;

	if (num / 10)
		int_to_string(num / 10);

	_putchar('0' + num % 10);
}
