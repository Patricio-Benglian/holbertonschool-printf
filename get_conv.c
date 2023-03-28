#include "main.h"
#include "aux_func.c"

/**
 * get_conv - gets the conversion value and executes respective code
 */
char (*get_conv)(s)(va_list args)
{
	int i; /* iterates through Struct */
	/* Struct that associates a character with a function */
	printer_t ops[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_perc},
		{NULL, NULL},
	};

	for (i = 0; ops[i].conv; i++)
	{
		if (s == ops[i].conv)
			{
				/* returns call to print_x function */
				return (ops[i].p(args));
			}
		i++;
	}
	exit (100);
	/* add conditional if value does not equal anything in struct */
}
