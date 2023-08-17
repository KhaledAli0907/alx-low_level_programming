#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

/**
 * print_numbers - prints numbers followed by new line
 *
 * @separator: the separator between numbers
 * @n: number of parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pars;
	char *sep = NULL;
	unsigned int i = 0;

	if (separator == NULL)
		sep = "";
	else
		sep = (char *) separator;

	/* initialize list */
	va_start(pars, n);

	if (n > 0)
		printf("%d", va_arg(pars, int));
	for (i = 1; i < n; i++)
		printf("%s%d", sep, va_arg(pars, int));
	printf("\n");
	va_end(pars);
}
