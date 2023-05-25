#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: Print a sentence to the stndrd output
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
	char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	fprintf(stderr, message);
	return (1);
}
