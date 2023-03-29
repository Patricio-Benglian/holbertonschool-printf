#include "main.h"

/**
 * _printf - prints string, reads conversion flags
 * @format: string to print
 * Return: Always 0 (Success)
 */

int _printf(const char *format, ...)
{
<<<<<<< HEAD
	/* declare variables */
	int i, test; /* iterator */
=======
		/* declare variables */
	int i, test = 0; /* iterator */
>>>>>>> Nicoou

	/* initialize variadic stuff */
	va_list args; /* makes list of args */

	va_start(args, format); /* initializes it */

	/* loop */
<<<<<<< HEAD
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
=======
	if (!format)
		return (-1);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			/* gets conv value and then runs func */
			test += aux_conv(format[i + 1], args);
			/* iterate, past the conv value after % */
			i++;
		}
		else
		{
			write(1, &format[i], 1);
			test++;
>>>>>>> Nicoou
		}
	}
	va_end(args);
<<<<<<< HEAD
	return (0);
=======
	return (test);
>>>>>>> Nicoou
}
