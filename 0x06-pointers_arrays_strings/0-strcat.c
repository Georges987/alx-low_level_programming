#include "main.h"
#include <stdio.h>

/**
 * strcat - function thact concatenate too string
 *
 * @dest: destination string
 * @src: source string 
 *
 * Return: a pointer to dest
 *
 */

char *_strcat(char *dest, char *src)
{
	int tail_dest = 0;
	int tail_src = 0;

	while (*(dest + tail_dest) != '\0')
	{
		tail_dest++;
	}

	while(tail_src >= 0)
	{
		*(dest + tail_dest) = *(src + tail_src);
		if(*(src + tail_src) == '\0')
			break;

		tail_dest++;
		tail_src++;
	}

	return (dest);
}

