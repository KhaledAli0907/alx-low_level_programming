#include "main.h"

/**
* swap_int - swaps the value of two integers
*
* @a : pointer to an intger
* @b : pointer to an integer
*/

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
