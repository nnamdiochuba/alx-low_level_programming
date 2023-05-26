#include <stdio.h>

/**
 * main - Entry Point
 * Description: This program prints out all the lower case and upper case
 * alphabet
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

	i = 65;
	while (i < 91)
        {
                c = i++;
                putchar(c);
        }

	putchar('\n');
	return (0);
}
