#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

/**
 * aux_conv - gets the conversion value and executes respective code
 * @s: character to compare struct with
 * @args: list to send through to auxiliary functioni
 * Return: return value from called function or -1 on error
 */
int aux_conv(char s, va_list args)
{
<<<<<<< HEAD
	unsigned int i = 0; /* iterates through Struct */
=======
	unsigned int i = 0;
>>>>>>> Nicoou
	/* Struct that associates a character with a function */
	printer_t ops[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_perc},
<<<<<<< HEAD
		{'\0', NULL},
	};
       	
	while (ops[i].conv && s)/* Loop to find a function that matches the input character */
	{
		if  (s == *ops[i].conv)
		{	
			return ((ops[i].p)(args));
		}

<<<<<<< HEAD
=======
	/*	{"d", print_int},
		{"i", print_int,}, */
		{NULL, NULL},
	};
	if (s)
	{
>>>>>>> Patricio
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
<<<<<<< HEAD
			i++;
		}
	return (1);
=======
		i++;
	}
	/* If a function is not found that matches the input character */
	if(s != '\0')
	{
		write(1, "%", 1);
		write(1, &s, 1);
		return (2);/* return 2 char */
	}
	else /* if s == NULL*/		
	{
		return write(1, "%", 1);
	}
	exit(-1);
>>>>>>> Nicoou
=======
	}
	return (0);
>>>>>>> Patricio
}
