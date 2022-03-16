#include "main.h"

/**
 * times_table - prints time table
 *
 * Return: (void)
 *
 */

void times_table(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (((a * b) / 10) > 0)
			{
				_putchar('0' + ((a * b) / 10));
			}
			else if (b > 0)
			{
				_putchar(' ');
				_putchar('0' + ((a * b) % 10));
			}
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
