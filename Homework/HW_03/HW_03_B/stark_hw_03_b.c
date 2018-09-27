/*
HW_03_B
Jeremy Stark
09/28/2018
A program which will tell the user the color
and contents of a specific cylinder based on
the character they enter corrisponding to the
first letter of the cylinder color.
*/

#include <stdio.h>

int main(void)
{
	//Color variable
	char color;

	//Promps user to enter first of color.
	printf("Enter the first letter of the color of a cylinder: \n");
	scanf("%c", &color);

	//Switch statement that tests for different color of
	//cylinder based character entered.
	switch (color)
	{
		case 'O':
		case 'o':
			printf("An orange cylinder contains Ammonia.\n");
		break;

		case 'B':
		case 'b':
			printf("A brown cylinder contains Carbon Monoxide.\n");
		break;

		case 'Y':
		case 'y':
			printf("A yellow cylinder contains Hydrogen.\n");
		break;

		case 'G':
		case 'g':
			printf("A green cylinder contains Oxygen.\n");
		break;
	}

	return(0);
}
