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
<<<<<<< HEAD
	int i, test; /* iterator */
=======
		/* declare variables */
	int i, test = 0; /* iterator */
>>>>>>> Nicoou
=======
	int i, count = 0; /* iterator */
>>>>>>> Patricio

	/* initialize variadic stuff */
	va_list args; /* makes list of args */

	va_start(args, format); /* initializes it */

	/* if format doesnt exist, error */
	if (format == NULL)
		return (-1);
	/* loop */
<<<<<<< HEAD
<<<<<<< HEAD
	if (format != NULL)
	{	
		for (i = 0; format[i]; i++)
=======
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
>>>>>>> Patricio
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
		else 
		{
			write(1, &format[i], 1);
			count++;
		}
	}
	va_end(args);
<<<<<<< HEAD
<<<<<<< HEAD
	return (0);
=======
	return (test);
>>>>>>> Nicoou
=======
	return (count);
>>>>>>> Patricio
}
