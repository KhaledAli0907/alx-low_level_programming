#include "main.h"

/**
 * _pow_recursion - raise @x to the power of @y
 *
 * @x: Integer
 * @y: Positive int
 *
 * Retrun: the resulting value, -1 if ther's error
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x,  y - 1));
}
