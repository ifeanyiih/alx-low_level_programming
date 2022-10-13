#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_numbers - prints numbers followed by a new line
* @separator: string to be printed between numbers
* @n: integer argument
* @...: rest of the parameters
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i;

	va_start(ap, n);

	for (i = 0; i < n; ++i)
	{
		printf("%d%s", va_arg(ap, int), (separator == NULL) ? "" : separator);
	}
	_putchar('\n');

	va_end(ap);
}
