#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printf - Entry point
 *
 * Return: Always 0 (Success)
 */
int _printf(const char *format, ...)
{

	/* declare variables */
	int i; /* iterator */

	/* init variadic stuff */
	va_list args;
	va_start(args, format);
	
	/* loop */
	for (i = 0; format[i]; i++)
	{
		write(1, &format[i], 1);
	}

	va_end(args);
	return (0);
}
