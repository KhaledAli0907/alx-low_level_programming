#include <stdio.h>
#include "main.h"

int main(void)
{
	char *str;
	int len;

	str = "My first strlen!";
	len = _strlen(str);
	printf("len=%d\n", len);
	return (0);
}
