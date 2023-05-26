#include <stdio.h>

/**
 * main - Entry Point
 * Description: This program prints out 0-9 separated by commas
 * Return: 0 Always (Success)
 */

int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i++);
		if (i < 57)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
