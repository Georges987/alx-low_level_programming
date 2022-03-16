#include "main.h"
#include <stdio.h>

/**
 * main - Print the 50 Fibonacci numbers starting with 1 and 2
 *
 * Return: <0) for success <1> for failure
 *
 **/
int main(void)
{
	int i;
	int Fnum = 0;
	int Snum = 1;
	int nextNum = Fnum + Snum;
	
	for (i = 0; i < 89; ++i)
	{
		if (i != 88)
			printf("%d, ", nextNum);
		Fnum = Snum;
		Snum = nextNum;
		nextNum = Fnum + Snum;
		printf("\n");		
	}
	return (0);
}
