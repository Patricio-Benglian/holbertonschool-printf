#ifndef MAIN_H
#define MAIN_H


/* Libraries */
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
void print_perc(void);
#endif
