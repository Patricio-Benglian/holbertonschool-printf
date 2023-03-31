#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
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
	long int num = va_arg(args, int);
	long int n = num;
	int count;
	char save_num;
	long int exp = 1;

	count = 0;

	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
		num *= -1;
		count++;
	}

	if (n == 0)
	{
		write(1, "0", 1);
		count++;
		return (1);
	}

	while (n > 0)
	{
		n /= 10;
		exp *= 10;
		count++;
	}
	exp /= 10;

	for(; exp >= 1; exp /= 10)
	{
		save_num = ((num / exp) % 10 + '0');
		write(1, &save_num, 1);
	}

	return (count);

}
