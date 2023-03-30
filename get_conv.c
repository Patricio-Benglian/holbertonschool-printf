#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

/**
 * aux_conv - gets the conversion value and executes respective code
 * @s: character to compare struct with
 * @args: list to send through to auxiliary functioni
 * Return: return value from called function or 0 on error
 */
int aux_conv(char s, va_list args)
{
	unsigned int i = 0; /* iterates through Struct */
	/* Struct that associates a character with a function */
	printer_t ops[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_perc},
	/*	{"d", print_int},
		{"i", print_int,}, */
		{NULL, NULL},
	};
	while (i < 3)
	{
		/* looks for a match between char and values in struct */
		if (s == *ops[i].conv)
		{
		/* calls to print relevant function */
			return (ops[i].p(args));
		}
		i++;
	}
	if (s)
	{
		write(1, "%", 1);
		write(1, &s, 1);
		return (2);
	}
	return (0);
}
