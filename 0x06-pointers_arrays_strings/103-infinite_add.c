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
	int x = 0, y = 0, l1 = 0, l2 = 0, lar = 0, carry = 0, k = 0;

	while (n1[l1] != '\0')
		l1++;

	while (n2[l2] != '\0')
		l2++;
	if (l1 > l2)
		lar = l1;
	else
		lar = l2;
	if (lar + 1 > size_r)
		return (0);
	r[lar] = '\0';
	for (k = lar - 1; k >= 0; k--)
	{
		l1--;
		l2--;

		if (l1 >= 0)
			x = n1[l1] - '0';
		else
			x = 0;
		if (l2 >= 0)
			y = n2[l2] - '0';
		else
			y = 0;
		r[k] = ((x + y + carry) % 10) + '0';
		carry = (x + y + carry) / 10;
	}
	if (carry == 1)
	{
		r[lar + 1] = '\0';
		if (r[lar + 2] > size_r)
			return (0);
		while (lar-- >= 0)
			r[lar + 1] = r[lar];
		r[0] = carry + '0';
	}
	return (r);
}
