#include "main.h"
#include <stdio.h>

int main(void)
{
	char *str;

	str = "My School";
	rev_string(str);
	printf("string: %s\n", str);
	return (0);
}
