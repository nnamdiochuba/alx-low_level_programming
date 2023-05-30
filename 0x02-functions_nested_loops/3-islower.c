#include "main.h"

/**
 * _islower - Checks for lowercse characters
 * Description: Returns 1 if a character is lowercase, 0 otherwise
 * @c: ASCII character input.
 * Return: 1 or 0 (Sucess)
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	return (0);
}
