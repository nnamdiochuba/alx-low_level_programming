#include "main.h"

/**
 * times_table - Prints the timetable from 0 to 9
 * Description: Print 9 x 9 timetable starting from 0
 * Return: 0
 */

void times_table(void)
{
	int i, j, result, rem;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;
			if (result <= 9)
			{
				_putchar(result + ' ');
				_putchar(result + '0');
			}
			else
			{
				rem = result % 10;
				result = result / 10;
				_putchar(result + '0');
				_putchar(rem + '0');
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
