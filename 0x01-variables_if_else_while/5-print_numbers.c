#include <stdio.h>

/**
 * main - Entry Point
 * Description: This program prints out 0-9
 * Return: 0 Always (Success)
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d",i++);
	}
	putchar('\n');
	return (0);
}
