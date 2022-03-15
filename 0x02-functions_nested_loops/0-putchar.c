#include <stdio.h>
#include "main.h"

/**
 * * main - causes an infinite loop
 * * Return: 0
 * */

int main(void)
{
	char* str="_putchar\n";
	while(*str)
	{
		_putchar(str);
	}
	_putchar('\n');
	return (0);
}
