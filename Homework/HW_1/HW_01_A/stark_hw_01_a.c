/*
HW_01_A
Jeremy Stark
09/13/2018
Prompts the user to enter four integers and reads the four values with
separate scanf statements. Write statements to find the cube of each value. Print the values and
their cubes in a labeled table aligned as in the example shown below.
*/

#include <stdio.h>

int main(void)
{
	int values[4];
	int cubed[4];

    printf("Please enter 4 integers:\n");

	//Input
	for (int i = 0; i < 4; i++)
	{
		scanf("%d", &values[i]);
	}

	//Cube calculation
	for(int i = 0; i < 4; i++)
	{
		cubed[i] = pow(values[i], 3);
	}

	//Output table header
	printf("Number \t Cube\n");

	//Output table values
	for (int i = 0; i < 4; i++)
	{
		printf("%d \t %d\n", values[i], cubed[i]);
	}

    return(0);
}
