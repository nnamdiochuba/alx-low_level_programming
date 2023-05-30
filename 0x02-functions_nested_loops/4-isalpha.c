#include "main.h"
#include <ctype.h>

/**
 * _isalpha - Checks for lowercase and uppercase alphabet
 * Description: Returns 1 if a character is alhabet, 0 otherwise
 * @c: ASCII character input.
 * Return: 1 or 0 (Sucess)
 */

int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	return (0);
}
