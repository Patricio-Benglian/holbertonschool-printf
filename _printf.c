#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"
#include "aux_func.c"
#include "get_conv.c"

/**
 * _printf - Entry point
 *
 * Return: Always 0 (Success)
 */

int _printf(const char *format, ...)
{
	/* declare variables */
	int i; /* iterator */
	printer_t types[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_perc},
		{NULL, NULL},
	};

	/* initialize variadic stuff */
	va_list args; /* makes list of args */
	va_start(args, format); /* initializes it */
	
	/* loop */
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			get_conv(format[i + 1]);
			i += 2;
		}
		write(1, &format[i], 1);
	}

	va_end(args);
	return (0);



	/* write struct same as in calculator and print all. 
	 * {c, print_char};
	 * {s, print_string};
	 * etc etc 
	 *
	 *
	 *
	 *
	 *
	 * */
}
