#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

/**
 * get_conv - gets the conversion value and executes respective code
 * @s: character to compare struct with
 * @args: list to send through to auxiliary function
 */
void aux_conv(char s, va_list args)
{
	int i; /* iterates through Struct */
	/* Struct that associates a character with a function */
	printer_t ops[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_perc},
		{NULL, NULL},
	};

	for (i = 0; *ops[i].conv; i++)
	{
		if (s == *ops[i].conv)
			{
				/* returns call to print_x function */
				ops[i].p(args);
			}
		i++;
	}
	exit(100);
	/* add conditional if value does not equal anything in struct */
}
