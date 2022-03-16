#include "main.h"

/**
 * print_sign - check if n is positive , negative or zero
 * @alx : function parameter
 * Return: 1 if alx is positive, -1 if negative and 0 the other cases
 *
 */

int print_sign(int alx)
{
	if (alx > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (alx < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
