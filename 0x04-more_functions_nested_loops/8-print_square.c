#include "main.h"

/**
 * print_square - prints out a square
 * @tal: the square length
 * Return: (void)
 *
 */

void print_square(int tal)
{
	int i;
	int j;

	if (tal <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 0; j < tal; j++)
		{
			for (i = 0; i < tal; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
