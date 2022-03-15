#include "main.h"

/**
 * _isalpha - check if character is alphabetic or not
 * 
 * alx : integer value
 * 
 * Return: 1 if alx is alphabetic and 0 in the other case
 *
 */

int _isalpha(int alx)
{
	if (alx >= 65 && alx <= 122)
	{
		return (1);
	}
	else
		return (0);
}
