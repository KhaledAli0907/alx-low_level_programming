#include "main.h"

/**
* infinite_add - Adds two numberes.
*
* @n1: first number.
* @n2: Second number.
* @r: Result.
* @size_r: buffer size.
*
* Return: 0 (if there's an error), result @r otherwise.
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, len1 = 0, len2 = 0, carry = 0, sum = 0, k = 0;

	/* Get the length of the two numbers */
	while (n1[l1] != '\0')
		l1++;

	while (n2[l2] != '\0')
		l2++;

	/* if the length of the numbers more than the size of buffer return 0 */
	if (l1 + 1 > size_r || l2 + 1 > size_r)
		return (0);

	while (i < l1 || j < l2 || carry)
	{
		sum = carry;
		if (i < l1)
			sum += n1[l1 - i - 1] - '0';
		if (j < l2)
			sum += n2[l2 - j - 1] - '0';

		carry = sum / 10;
		if (k >= size_r - 1 || (k == size_r - 2 && carry))
			return (0);
		r[k++] = sum % 10 + '0';
		i++;
		j++;
	}
	r[k] = '\0';
	return (r);
}
