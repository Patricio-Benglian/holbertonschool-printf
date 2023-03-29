#include "main.h"

/**
 * _printf - prints string, reads conversion flags
 * @format: string to print
 * Return: Always 0 (Success)
 */

int _printf(const char *format, ...)
{
	/* declare variables */
	int i, test, charprints = 0; /* iterator */

	/* initialize variadic stuff */
	va_list args; /* makes list of args */

	va_start(args, format); /* initializes it */

	/* loop */
	if (format != NULL)
	{	
		for (i = 0; format[i]; i++)
		{
			if (format[i] == '%')
			{	/* if no match, write the % chars */
				if (aux_conv(format[i + 1], args) == -1)
					{
						write(1, &format[i], 1);
						i++;
						write(1, &format[i], 1);
						i++;
					}
				else
				return (aux_conv(format[i + 1], args));
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
	return (i + charprints);
}
