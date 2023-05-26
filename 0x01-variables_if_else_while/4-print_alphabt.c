#include <stdio.h>

/**
 * main - Entry Point
 * Description: This program prints out all the lower case alphabet except 
 * q and e
 * Return: 0 Always (Success)
 */

int main(void)
{
	int i = 97;
	char c;

	while (i < 123)
	{
		c = i++;
		if (i != 102 && i != 114)
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
