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

	write(1, &temp, 1);
<<<<<<< HEAD
<<<<<<< HEAD
	return (0);
=======

	return(1);
>>>>>>> Nicoou
=======
	return (1); /* return amount of chars printed */
>>>>>>> Patricio
}

/**
 * print_string - aux function to print arguments called with %s (strings)
 * @args: list imported from main function
 */
int print_string(va_list args)
{
	char *temp;
<<<<<<< HEAD
	int t;

	temp = va_arg(args, char *); /* holds value in va_arg */

	if (temp == NULL)
	{
		temp = "(null)";
	}
	for (t = 0; temp[t]; t++)
	{
		write(1, &temp[t], 1);
=======
	int t = 0;

	temp = va_arg(args, char *); /* holds value in va_arg */

	if (temp == NULL)
		return(-1);

	while (temp[t])
	{
		write(1, &temp[t], 1);
		t++;
>>>>>>> Nicoou
	}
	return (t); /* returned amount of chars printed */
}
/**
 * print_perc - aux func to convert %%
 * @args: arg list which is not used in this function
 */
<<<<<<< HEAD
int print_perc(va_list args)
{
	(void) args;
	write(1, "%", 1);
	return (1);
}

/**
 * print_int - aux func to convert %i and %d
 * @args: arg list with argument to print
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

	printf("%s", buff);

	return (0);
=======
int print_perc(va_list args __attribute__((unused)))
{
	(write(1, "%", 1));
	return (1);
>>>>>>> Nicoou
}
