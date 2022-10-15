#include "main.h"

/**
 * _printf - produces output according to 
 * a format
 * @format: specifier for the string to be printed
 * Return: returns an integer
 */

int _printf(const char *format, ...)
{
	va_list arg;
	unsigned int i;
	char *p
