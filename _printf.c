#include "main.h"

/**
 * _printf - prints string, reads conversion flags
 * @format: string to print
 * Return: print length
 */

int _printf(const char *format, ...)
{
	/* declare variables */
	int i, count = 0; /* iterator */

	/* initialize variadic stuff */
	va_list args; /* makes list of args */

	va_start(args, format); /* initializes it */

	/* if format doesnt exist, error */
	if (format == NULL)
		return (-1);
	/* loop */
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			/* gets conv value and then runs func */
			if (!format[i])
			{
			va_end(args);
			return (-1);
			}
			else
			{
				count += aux_conv(format[i], args);
			}
		}
		else
		{
			write(1, &format[i], 1);
			count++;
		}
	}
	va_end(args);
	return (count);
}
