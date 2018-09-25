/*
CW_09
Jeremy Stark
09/20/2018
Prompt a user to enter a tank number and number of gallons.
Using a switch statement, determine the number of gallons
that can be placed into this tank once the technician is
done filling the tank in question.
*/

#include <stdio.h>

int main(void)
{
	//Variables
	int gallons;
	int tank;

	int tankOneMax = 5000;
	int tankTwoMax = 12000;
	int tankThreeMax = 8000;

	//User prompts
	printf("Please enter the number of gallons:\n");
	scanf("%d", &gallons);

	printf("Which tank?:\n");
	scanf("%d", &tank);

	//Switch statement
	switch(tank)
	{
		case 1:
			if(gallons >= tankOneMax)
			{
				printf("Tank #1 is full.\n");
			}
			else
			{
				tankOneMax = tankOneMax - gallons;
				printf("Tank #1 can take %d before full.\n", tankOneMax);
			}
		break;

		case 2:
			if(gallons >= tankTwoMax)
			{
				printf("Tank #2 is full.\n");
			}
			else
			{
				tankTwoMax = tankTwoMax - gallons;
				printf("Tank #2 can take %d before full.\n", tankTwoMax);
			}
		break;

		case 3:
			if(gallons >= tankThreeMax)
			{
				printf("Tank #3 is full.\n");
			}
			else
			{
				tankThreeMax = tankThreeMax - gallons;
				printf("Tank #3 can take %d before full.\n", tankThreeMax);
			}
		break;

		default:
			printf("Invalid tank number. Please try the program again\n");
		break;
	}

	return(0);
}
