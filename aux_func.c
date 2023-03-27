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
	char *temp = va_arg(args, char *); /* holds value in va_arg */
	int t;

	/* error with how temp[t] is read. idk why */
	for (t = 0; temp[t]; t++)
		write(1, &temp[t], 1);
}
/**
 * print_perc - aux func to convert %%
 * @args: list imported from main function. not used in this case, voided
 */
void print_perc(va_list args)
{
	/* can't void args for some reason. probably easiest to
	 * just define this case in the main function.
	 * headache. */
	write(1, "%", 1);
}

/* main de prueba:
 * que pasa si:
 * printf("%s",) */
