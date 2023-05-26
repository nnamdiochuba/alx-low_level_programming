#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - Entry point
 * Description: This code tells if a random number is positive or negative
 * Return: 0 Always (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
		printf("%d is positive", n);
	else if (n = 0)
		printf("%d is zero", n);
	else
		printf("%d is positive", n);
	return (0);
}
