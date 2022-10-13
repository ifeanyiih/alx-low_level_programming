#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_strings - print strings followed by new line
* @separator: string to print between strings
* @n: integer argument
* @...: optional arguments
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i;

	va_start(ap, n);
	for (i = 0; i < n; ++i)
		printf("%s%s", va_arg(ap, char *), (separator == NULL) ? "" : separator);
	_putchar('\n');
	va_end(ap);
}
