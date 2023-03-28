#ifndef MAIN_H
#define MAIN_H

/* Libraries */
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/* Structure */
typedef struct printer
{
	char *conv;
	void (*p)(va_list args);
} printer_t;

/* Prototypes */
int _printf(const char *format, ...);
void print_char(va_list args);
void print_string(va_list args);
void print_perc(va_list args); /* args isnt necessary */
void aux_conv(char s, va_list args); /* this is so wrong */
#endif
