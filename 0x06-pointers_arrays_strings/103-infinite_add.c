#include "main.h"

int _strlen(char *str);
int compare(int x, int y);
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
	int x = 0, y = 0, l1 = 0, l2 = 0, lar = 0, carry = 0, k;

	l1 = _strlen(n1);
	l2 = _strlen(n2);
	lar = compare(l1, l2);
	if (lar + 1 >= size_r)
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
		r[k] = (x + y + carry) % 10 + '0';
		carry = (x + y + carry) / 10;
	}
	if (carry == 1)
	{
		r[lar + 1] = '\0';
		if (lar + 2 > size_r)
			return (0);
		while (lar-- >= 0)
			r[lar + 1] = r[lar];
		r[0] = carry + '0';
	}
	return (r);
}


/**
 * _strlen - Return string's length
 * @str: string.
 * Return: string length
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;

	return (i);
}

/**
 * compare - compare two numbers
 * @x: Integer.
 * @y: Integer.
 * Return: the largest number
 */

int compare(int x, int y)
{
	int largest;

	if (x > y)
		largest = x;
	else
		largest = y;
	return (largest);
}
