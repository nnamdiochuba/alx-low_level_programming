#include <stdio.h>

/**
 * main - Entry Point
 * Description: This program prints out all the lower case alphabet in reverse
 * Return: 0 Always (Success)
 */

int main(void)
{
	int i = 122;
	char c;

	while (i > 96)
	{
		c = i--;
		putchar(c);
	}
	putchar('\n');
	return (0);
}
