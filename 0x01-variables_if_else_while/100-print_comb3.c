#include <stdio.h>

/**
 * main - Entry Point
 * Description: This program prints out all possible 2-digit coimbinations
 * separated by commas
 * Return: 0 Always (Success)
 */

int main(void)
{
	int i = 48;
	int j = 49;
	int k = i;
	int l = j;

	while (i < 58)
	{
		i = k;
		while (j < 58)
		{
			j =l;
			putchar(i);
			putchar(j++);
			if (i < 57 && j < 58)
			{	
				putchar(',');
				putchar(' ');
			}
		}
		k++;
		l++;
	}
	return (0);
}
