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
	char buff[30];
	int num = va_arg(args, int), count = 0, negflag = 0;
	unsigned int temp;
	char *ptr;

	ptr = &buff[29]; /* ptr points to address of buffer */
	*ptr = '\0'; /* make last space in array NULL to mark end */

	if (num < 0) /* neg number conversion */
	{
		temp = -num;
		negflag = 1;
	}
	else 
		temp = num;
	if (temp == 0)
	{
		temp = num;
		*--ptr = temp;
		write(1, ptr, 1);
		return (1);
	}
	while (temp != 0)
	{
		*--ptr = temp % 10 + '0';
		temp /= 10;
	}
	if (negflag == 1)
		*--ptr = '-';
	while (*ptr)
	{
		write(1, ptr, 1);
		ptr++;
		count++;
	}

	return (count);
}
