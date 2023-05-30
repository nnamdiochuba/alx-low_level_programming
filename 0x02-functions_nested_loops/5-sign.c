#include "main.h"

/**
 * print_sign - Prints the sign of an integer
 * Description: Returns 1 if positive, 0 is zero, and -1 if negative
 * @n: Number input.
 * Return: 1 if greater than 0
 * 	0 if zero
 * 	-1 if less than 0
 */

int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (0);
}
