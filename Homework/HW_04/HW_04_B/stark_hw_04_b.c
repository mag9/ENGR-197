/*
HW_04_B
Jeremy Stark
10/09/2018
A program which will 4 diamond shaped paterns.
*/
#include <stdio.h>
#include <stdlib.h>

//Prints out the pattern of the top of the diamond
void topPat()
{
	printf("  * \n");
	printf(" *** \n");
	printf("*****\n");
}

//Prints out the pattern of the bottom of the diamond
void bottomPat()
{
	printf("*****\n");
	printf(" *** \n");
	printf("  * \n");
}

//Calls both the top and bottom pattern generation functions.
//This function was created for easy of use, so I can have 4 function
//calls in my main and not 8.
void genPattern()
{
	topPat();
	bottomPat();
}

//Main method
int main(void)
{
	//4 calls to the genPattern function which then calls the top and botton drawing functions at once.
	genPattern();
	genPattern();
	genPattern();
	genPattern();

	return 0;
}
