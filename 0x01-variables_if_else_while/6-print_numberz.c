#include <stdio.h>

/**
 * main - Entry Point
 * Description: This program prints out 0 to 9
 * Return: 0 Always (Success)
 */

int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i++);
	}
	putchar('\n');
	return (0);
}
