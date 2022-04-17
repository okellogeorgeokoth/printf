#include <stdio.h>
#include "../main.h"

int main(void)
{
	/* Tests for when string, character and %% are passed */
	int x = _printf("Hello, %%%s%c%c%c\n", "World", '!', '\n', '9');
	int y = printf("Hello, %%%s%c%c%c\n", "World", '!', '\n', '9');

	printf("x = %d\n", x);
	printf("y = %d\n", y);

	x = _printf("%c%%%c%s\n", 'H', 'W', "orld!");
	y = printf("%c%%%c%s\n", 'H', 'W', "orld!");

	printf("x = %d\n", x);
	printf("y = %d\n", y);

	_printf("rot13 string: %R\n", "Hello, World");

	return (0);
}