#include "main.h"
#include <stdio.h>

/**
 * main - Print the 100 Fibonacci numbers starting with 1 and 2
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

        for (i = 0; i < 98; ++i)
        {
	       	if (i != 97)
		{
			if(nextNum < 0)
				nextNum = nextNum * (-1)
			printf("%d, ", nextNum);
		}
		Fnum = Snum;					
   		Snum = nextNum;		  		
		nextNum = Fnum + Snum;
	}
	return (0);
}
