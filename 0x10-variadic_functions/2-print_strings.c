#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

/**
 * print_strings - prints strings
 *
 * @separator: sep
 * @n: number of paramters
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list pars;
	unsigned int i = 0;
	char *sep = NULL, *par = NULL;

	if (separator == NULL || *separator == 0)
		sep = "";
	else
		sep = (char *) separator;

	va_start(pars, n);
	if (n > 0)
		printf("%s", va_arg(pars, char *));

	for (i = 1; i < n; i++)
	{
		par = va_arg(pars, char *);
		if (!par)
			par = "(nil)";

		printf("%s%s", sep, par);
	}
	printf("\n");
	va_end(pars);
}
