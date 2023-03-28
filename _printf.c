#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"
#include "get_conv.c"

/**
 * _printf - prints string, reads conversion flags
 * @format: string to print
 * Return: Always 0 (Success)
 */

int _printf(const char *format, ...)
{
	/* declare variables */
	int i; /* iterator */

	/* initialize variadic stuff */
	va_list args; /* makes list of args */
	va_start(args, format); /* initializes it */
	
	/* loop */
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			i += 2;
		}
		else
			write(1, &format[i], 1);
	}

	va_end(args);
	return (0);
}
