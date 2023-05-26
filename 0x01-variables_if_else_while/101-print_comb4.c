#include <stdio.h>

/**
 * main - Entry Point
 * Description: This program prints out all possible 3-digit coimbinations
 * separated by commas
 * Return: 0 Always (Success)
 */

int main(void)
{
	int i = 48;
	int j = 49;
	int k = 50;
	int l = i;
	int m = j;
	int n = k;


	while (i < 58 && l < 58)
	{
		i = l;
		j = m;
		while (j < 58 && m < 58)
		{
			j = m;
			k = n;
			while (k < 58 && n < 58)
			{
				putchar(i);
				putchar(j);
				putchar(k++);
				if (!(i == 55 && j == 56 && k == 58))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		k++;
		l++;
	}
	putchar('\n');
	return (0);
}
