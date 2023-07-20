#include <math.h>
#include <stdio.h>


long largest_prime_factor(long n);

/**
* main - calls the largest prime factor function and print the result
*
* Return: Always 0 (Success)
*/
int main(void)
{
	long n = largest_prime_factor(612852475143);

	printf("%ld\n", n);
	return (0);
}


/**
* largest_prime_factor - returns the largest prime factor of number(n)
*
* @n : long number
*
* Return: long int (largest prime factor)
*/
long largest_prime_factor(long n)
{
	long prime, largest;

	/* divide by the smallest prime */
	while (n % 2 == 0)
		n /= 2;

	/* devide by the odd  prime numbers */
	for (prime = 3; prime <= sqrt(n); prime += 2)
	{
		while (n % prime == 0)
		{
			n = n / prime;
			largest = prime;
		}
	}

	if (n > 2)
		largest = n;

	return (largest);
}
