#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
 * print_char - aux function to print arguments called with %c (characters)
 * @args: list imported from main function
 */

void print_char(va_list args)
{
	int temp = va_arg(args, int); /* holds value in va_arg */

	write(1, &temp, 1);
}

/**
 * print_string - aux function to print arguments called with %s (strings)
 * @args: list imported from main function
 */
void print_string(va_list args)
{
	char *temp;
	int t;

	temp = va_arg(args, char *); /* holds value in va_arg */

	if (temp == NULL)
		return;
	for (t = 0; temp[t]; t++)
	{
		write(1, &temp[t], 1);
	}
}
/**
 * print_perc - aux func to convert %%
 */
void print_perc(void)
{
	write(1, "%", 1);
}
