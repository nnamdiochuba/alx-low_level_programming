#include <stdio.h>

/**
 * main - Entry Point
 * Description: This program prints out all the Hex digits 0123456789abcdef
 * Return: 0 Always (Success)
 */

int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i++);
	}

	i = 97;
	while (i < 103)
	{
		putchar(i++);
	}

	putchar('\n');
	return (0);
}
