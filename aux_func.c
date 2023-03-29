
#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
 * print_char - aux function to print arguments called with %c (characters)
 * @args: list imported from main function
 */

int print_char(va_list args)
{
	char temp = va_arg(args, int); /* holds value in va_arg */

	return write(1, &temp, 1);
}

/**
 * print_string - aux function to print arguments called with %s (strings)
 * @args: list imported from main function
 */
int print_string(va_list args)
{
	char *temp;
	int t = 0;

	temp = va_arg(args, char *); /* holds value in va_arg */

	if (temp == NULL)
		temp = "(null)";

	while (temp[t])
	{
		write(1, &temp[t], 1);
		t++;
	}
	return (t);
}
/**
 * print_perc - aux func to convert %%
 */
int print_perc(va_list args __attribute__((unused)))
{
	return (write(1, "%", 1));
}
