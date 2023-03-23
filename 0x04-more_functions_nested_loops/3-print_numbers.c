#include "main.h"

/**
* print_numbers - print num 0 - 9
*
*Return: void
*/

int _putchar(int x);

void print_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)

	{
	_putchar(x + '0');
	}
	_putchar ('\n');
}
