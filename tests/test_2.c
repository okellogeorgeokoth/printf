#include "../main.h"
#include "stdio.h"
#include "limits.h"


void print_x_and_y(int x, int y);

int main(void)
{
	/* Several tests for what happens when NULL and unknown specifiers are
	 * passed
	 */
	int x = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	int y = printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);

	print_x_and_y(x, y);

	x = _printf(NULL);
	y = printf(NULL);

	print_x_and_y(x, y);

	x = _printf("%");
	y = printf("%");

	print_x_and_y(x, y);

	x = _printf("%!\n");
	y = printf("%!\n");

	print_x_and_y(x, y);

	x = _printf("%K\n");
	y = printf("%K\n");

	print_x_and_y(x, y);

}

void print_x_and_y(int x, int y)
{
	printf("\nx = %d\n", x);
	printf("y = %d\n\n", y);
}