#include "main.h"

/**
 * _islower - check if character is lower case
 *
 * alx : parameters for the functions
 *
 * Return: 1 if alx is lower case 0 otherwise
 *
 */

int _islower(int alx)
{
	if (alx >= 97 && alx <= 122)
	{
		return (1);
	}
	else
		return (0);
}
