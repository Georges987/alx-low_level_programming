#include "main.h"

/**
 * print_times_table - prints time table 
 * @n: parameter
 * Return: (void)
 *
 */
void print_times_table(int n)
{
	int x, y;
	int product = x * y;
	int products[500], digits[500];
	int i = sizeof(digits) / sizeof(digits[0]);

	if (n <= 15 && n >= 0)
	{
		for (y = 0; y <= n; y++)
		{
			for (x = 0; x <= n; x++)
			{
				while (product)
				{
					products[i + 1] = product / 10;
					product /= 10;
				}
			        for(i = (sizeof(digits) / sizeof(digits[0]));i >= 0;i--)
				{
					_putchar('0' + digits[i]);
					_putchar(',');	
				}
			}
			_putchar('\n');
		}
	}
}
