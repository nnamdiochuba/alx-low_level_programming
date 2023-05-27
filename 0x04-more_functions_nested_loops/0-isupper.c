#include <stdio.h>

/**
 * Prototype: int _isupper(char c);
 * Description: Tells if a character is uppercase or lowercase
 * Returns 1 if c is uppercase
 * Returns 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
	

