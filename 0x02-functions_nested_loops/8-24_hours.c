#include "main.h"
/**
 * jack_bauer - Prints Jack Bauer's day
 * Description: Prints every minute of the day from 00:00 to 23:59
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	int H, h, M, m;

	for (H = 0; H < 3; H++)
	{
		for (h = 0; h <= 9; h++)
		{
			for (M = 0; M < 6; M++)
			{
				for (m = 0; m <= 9; m++)
				{
					if (H == 2 && h > 3)
						break;
					_putchar(H + '0');
					_putchar(h + '0');
					_putchar(':');
					_putchar(M + '0');
					_putchar(m + '0');
					_putchar('\n');
				}
			}
		}
	}
}
