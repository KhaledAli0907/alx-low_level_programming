#include <stdio.h>
#include <stddef.h>

int main(void)
{
	return (printf("%p\n", NULL), 0);
}
