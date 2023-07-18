#include "main.h"

/**
* _abs - it returns the absolute value of an integer
*
* @n : Integer
*
* Return: the aboslute value (Success)
*/

int _abs(int n)
{
	if (n < 0)
		return n * -1;
	else
		return n;
}	
