#include "main.h"
#include "aux_func.c"

/**
 *
 */
void (*get_conv)(char *s)
{
	int i; /* iterates through Struct */
	/* Struct that associates a character with a function */
	printer_t types[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_perc},
		{NULL, NULL},
	};

	for (i = 0; types[i].conv; i++)
	{
		if (/* compare value of S with value stored in types[i].conv  */)
			{
				types[i].p;
				return ();
			}
	}
	/* add conditional if value does not equal anything in struct */
}
