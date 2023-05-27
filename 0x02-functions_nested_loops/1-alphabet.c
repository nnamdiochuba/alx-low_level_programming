#include "main.h"

/**
 * print_alphabet- Prints lowercse alphabet
 * Description: Prints lowerase alphabet
 * Return: void
 */

void print_alphabet(void)
{
	int i = 97;

	while (i < 123)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
