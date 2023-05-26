#include <stdio.h>

/**
 * main - Entry Point
 * Description: This program prints out all the lower case alphabet
 * Return: 0 Always (Success)
 */

int main(void)
{
	int i = 97;
	char c;

	while (i < 123)
	{
		c = i++;	
		putchar(c);
	}

	return (0);
}
