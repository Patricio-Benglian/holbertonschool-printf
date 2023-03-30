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
		negflag = 1; /* sets a bool for later use */
	}
	else 
		temp = num;
	if (temp == 0) /* case for printing 0 */ /* PRINTS WEIRD CHAR RIGHT NOW */
	{
		*--ptr = temp; /* address pointed to by ptr equals 0 */
		write(1, ptr, 1); /* write value in ptr address */
		return (1); /* return amount of chars printed */
	}
	while (temp != 0) /* sets last digit in array then removes last digit */
	{
		*--ptr = temp % 10 + '0';
		temp /= 10;
	}
	if (negflag) /* if bool is true put '-' before numbers */
		*--ptr = '-';
	while (*ptr) /* loops until NULL value at end of array */
	{
		write(1, ptr, 1);
		ptr++;
		count++;
	}

	return (count);
}
