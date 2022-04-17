#include "../main.h"
#include "stdio.h"
#include "limits.h"

int main(void)
{
	/* Integer printing test */
	int x = _printf("Hello, %d%i%d\n%i\n%d\n", 1, 2, 3, INT_MIN, INT_MAX);
	int y = printf("Hello, %d%i%d\n%i\n%d\n", 1, 2, 3, INT_MIN, INT_MAX);

	printf("x = %d\n", x);
	printf("y = %d\n", y);

	return (0);
}
