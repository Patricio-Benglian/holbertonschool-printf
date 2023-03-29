#include "main.h"

/**
 * _printf - prints string, reads conversion flags
 * @format: string to print
 * Return: Always 0 (Success)
 */

int _printf(const char *format, ...)
{
		/* declare variables */
	int i, test; /* iterator */

	/* initialize variadic stuff */
	va_list args; /* makes list of args */

	va_start(args, format); /* initializes it */

	/* loop */
	if (format != NULL)
	{	
		for (i = 0; format[i]; i++)
		{
			if (format[i] == '%')
			{
				/* gets conv value and then runs func */
				test += aux_conv(format[i + 1], args);
				/* iterate past the conv value after % */
				i++;
			}
			else
			{
				write(1, &format[i], 1);
				test++;
			}
		}
	}
	va_end(args);
	return (test);
}
