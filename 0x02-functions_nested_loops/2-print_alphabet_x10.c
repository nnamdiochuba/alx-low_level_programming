#include "main.h"

/**
 * print_alphabet_x10 - Prints lowercse alphabet 10 times
 * Description: Prints lowerase alphabet
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i;
	int k;

		for (k = 0; k < 10; k++)
		{
			i = 97;

			while (i < 123)
			{
				_putchar(i);
				i++;
			}
			_putchar('\n');

		}
}
