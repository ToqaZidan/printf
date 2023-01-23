#include "main.h"

/**
 * check_specifier - check valid specifier & assign function to it.
 * @format: specifier type.
 *
 * Return: pointer to function (success), NULL pointer (not success)
 */

int (*check_specifier(const char *format))(va_list)
{
	int i;

	func_t my_array[6] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_cent},
		{"i", print_int},
		{"d", print_dec},
		{NULL, NULL}};

	for (i = 0; my_array[i].t != NULL; i++)
	{
		if (*(my_array[i].t) == *format)
		{
			return (my_array[i].f);
		}
	}

	return (NULL);
}
