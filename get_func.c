#include "main.h"

/**
 * get_func - a function to recognize what kind of type we print
 * @recognizer: the character that identifies the type of variable we print
 * Return: pointer to the right function we are going to use
 */

int (*get_func(const char *recognizer))(va_list)
{
	int i;

	printer printer[] = {
		{"c", print_char},
		{"s", print_string},
		{NULL, NULL}
	};

	for (i = 0; printer[i].ch[0]; i++)
	{
		if (*recognizer == printer[i].ch[0])
			return (printer[i].print);
	}

	return (0);
}
