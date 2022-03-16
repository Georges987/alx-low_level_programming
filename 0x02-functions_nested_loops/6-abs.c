#include "main.h"

/**
 * _abs - return the absolute value of a number passed by the function
 * @alx : integer value that is used like parameters for the functions
 * Return: absolute value of alx
 *
 */

int _abs(int alx)
{
	if (alx > 0)
	{
		return (alx);
	}
	return ((-1) * alx);
}
