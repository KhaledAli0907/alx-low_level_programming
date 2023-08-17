#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_all - print any data type
 *
 * @format: list of data types prefix
 */
void print_all(const char * const format, ...)
{
	int i = 0, n = 0;
	va_list params;
	char *sep = ", ", *str;

	va_start(params, format);
	while (format[i] && format)
		i++;

	while (format[n] && format)
	{
		if (n == (i - 1))
			sep = "";
		/* handle diffrent conditions */
		switch (format[n])
		{
			/* if data type is char */
			case 'c':
				printf("%c%s", va_arg(params, int), sep);
				break;
			/* int */
			case 'i':
				printf("%i%s", va_arg(params, int), sep);
				break;
			/* float */
			case 'f':
				printf("%f%s", va_arg(params, double), sep);
				break;
			/* string */
			case 's':
				str = va_arg(params, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", str, sep);
				break;
		}
		n++;
	}
	/* print new line and free the list */
	printf("\n");
	va_end(params);
}
