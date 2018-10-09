/*
HW_04_B
Jeremy Stark
10/09/2018
A program which will 4 diamond shaped paterns.
*/
#include <stdio.h>
#include <stdlib.h>

void topPat()
{
	printf("  * \n");
	printf(" *** \n");
	printf("*****\n");
}

void bottomPat()
{
	printf("*****\n");
	printf(" *** \n");
	printf("  * \n");
}

void genPattern()
{
	topPat();
	bottomPat();
}

int main(void)
{
	genPattern();
	genPattern();
	genPattern();
	genPattern();

	return 0;
}
