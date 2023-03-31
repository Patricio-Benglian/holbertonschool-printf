#ifndef MAIN_H
#define MAIN_H

/* Libraries */
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

/* Structure */
/**
 * struct printer - struct which stores characters and their function
 * @conv: conversion value to compare
 * @p: pointer to function
 */
typedef struct printer
{
	char *conv;
	int (*p)(va_list args);
} printer_t;

/* Prototypes */
int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_perc(va_list args);
int print_int(va_list args);
int aux_conv(char s, va_list args);
#endif
