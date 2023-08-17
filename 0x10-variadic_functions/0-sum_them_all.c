#include <stdarg.h>

/**
 * sum_them_all - sums all paramters
 *
 * @n: number of inputes
 *
 * Return: the result
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i = 0;
	va_list parlist;

	if (n == 0)
		return (0);

	/* initialize list */
	va_start(parlist, n);

	/* iterate through paramters */
	for (i = 0; i < n; i++)
		sum += va_arg(parlist, const unsigned int);
	/* free paramters list */
	va_end(parlist);
	return (sum);
}
