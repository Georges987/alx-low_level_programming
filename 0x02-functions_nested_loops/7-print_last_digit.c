#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @alx : parameters for this function
 * Return: returns last digit of alx
 *
 */

int print_last_digit(int alx)
{
	if ((alx % 10) >= 0)
	{
		_putchar('0' + (alx % 10));
		return (alx % 10);
	}
	else
	{
		_putchar('0' + (-1 * (alx % 10)));
		return ((-1 * (alx % 10)));
	}
}
