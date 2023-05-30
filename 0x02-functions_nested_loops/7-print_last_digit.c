#include "main.h"

/**
 * print_last_digit - Finds the last digit
 * Description: Takes an integer and returns the last digit
 * @num: Integer number
 * Return: Last digit of of input
 */

int print_last_digit(int num)
{
	int last_digit = num % 10;
	_putchar(last_digit+'0');
	return (last_digit);
}
