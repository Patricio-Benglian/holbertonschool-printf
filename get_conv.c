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
	unsigned int i = 0;
	/* Struct that associates a character with a function */
	printer_t ops[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_perc},
		{NULL, NULL},
	};
       	
	while (ops[i].conv && s)/* Loop to find a function that matches the input character */
	{
		if  (s == *ops[i].conv)
		{	
			return ((ops[i].p)(args));
		}

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
		return write(1, "%", 1);
}
