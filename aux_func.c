#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
 * print_char - aux function to print arguments called with %c (characters)
 * @args: list imported from main function
 * Return: amount of chars printed
 */

int print_char(va_list args)
{
	int temp = va_arg(args, int); /* holds value in va_arg */

	write(1, &temp, 1);
	return (1);
}

/**
 * print_string - aux function to print arguments called with %s (strings)
 * @args: list imported from main function
 * Return: amount of chars printed
 */
int print_string(va_list args)
{
	char *temp;
	int t;

	temp = va_arg(args, char *); /* holds value in va_arg */

	if (temp == NULL)
	{
		temp = "(null)";
	}
	for (t = 0; temp[t]; t++)
	{
		write(1, &temp[t], 1);
	}
	return (t);
}
/**
 * print_perc - aux func to convert %%
 * @args: arg list which is not used in this function.
 * Return: amount of chars printed
 */
int print_perc(va_list args)
{
	(void) args;
	write(1, "%", 1);
	return (1);
}

/**
 * print_int - aux func to convert %i and %d
 * @args: arg list with argument to print
 * Return: amount of chars printed
 */
int print_int(va_list args)
{
	char *buff[30];
	int num = va_arg(args, int);
	unsigned int temp = num;
	char *ptr;

	ptr = buff[29];
	*ptr = '\0';
	while (temp != 0)
	{
		*--ptr = temp % 10 + '0';
		temp /= 10;
	}

 	printf("%s", buff); /* test to see if these even prints. (it doesnt) */

	return (0);
}
