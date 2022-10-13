#include <stdio.h>
#include <stdarg.h>
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
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; ++i)
	{
		printf("%d", va_arg(ap, int));
		if (!(i == n - 1))
			printf("%s", (separator == NULL) ? "" : separator);
		else
			printf("%c", '\n');
	}

	va_end(ap);
}
