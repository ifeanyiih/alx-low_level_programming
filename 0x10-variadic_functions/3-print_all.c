#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_all - prints anything
* @format: a list of types of arguments passed to a
* function
* @...: rest of parameters
*/
void print_all(const char * const format, ...)
{
	int i;
	char *separator, *s;
	va_list ap;

	if (!(format == NULL))
	{
		va_start(ap, format);
		separator = ", ";
		i = 0;
		while (*(format + i))
		{
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(ap, int));
				break;
				case 'i':
					printf("%d", va_arg(ap, int));
				break;
				case 'f':
					printf("%f", va_arg(ap, double));
				break;
				case 's':
					s = va_arg(ap, char *);
					printf("%s", (s == NULL) ? "(nil)" : s);
				break;
			}
			if (!(format[i + 1] == '\0') &&
			(format[i] == 'c' || format[i] == 'i' ||
		 	format[i] == 'f' || format[i] == 's'))
				printf("%s", separator);
			if (format[i + 1] == '\0')
			{
				printf("%c", '\n');
				va_end(ap);
			}
			++i;
		}
	}
}
