#include "main.h"

/**
 * main - Print text
 *
 * Return: 0 for success
 *
 */

int main(void)
{
	char *alx = "_putchar";

	while (*alx)
	{
		_putchar(*alx);
		alx++;
	}
	_putchar('\n');
	return (0);
}
