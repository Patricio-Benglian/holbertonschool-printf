#include "main.h"
#include "aux_func.c"

/**
 * get_conv - gets the conversion value and executes respective code
 */
void (*get_conv(char s, va_list args))
{
	int i; /* iterates through Struct */
	int
	/* Struct that associates a character with a function */
	printer_t types[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_perc},
		{NULL, NULL},
	};

	for (i = 0; types[i].conv; i++)
	{
		if (s == types[i].conv)
			{
				types[i].p(args);
				return (0);
			}
	}
	/* add conditional if value does not equal anything in struct */
}
