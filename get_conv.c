#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

/**
 * aux_conv - gets the conversion value and executes respective code
 * @s: character to compare struct with
 * @args: list to send through to auxiliary function
 */
int aux_conv(char s, va_list args)
{
	unsigned int i = 0; /* iterates through Struct */
	/* Struct that associates a character with a function */
	printer_t ops[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_perc},
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
	return (-1);
}
