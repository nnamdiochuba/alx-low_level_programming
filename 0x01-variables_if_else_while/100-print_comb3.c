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

	while (i < 58 && k < 58)
	{
		i = k;
		j = l;
		while (j < 58 && l < 58)
		{
			putchar(i);
			putchar(j++);
			if (i == 56 && j == 58)
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
