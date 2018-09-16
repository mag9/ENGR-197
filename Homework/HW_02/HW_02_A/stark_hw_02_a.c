/*
HW_02_A
Jeremy Stark
09/18/2018
Write a program that will use the random number generator, seeded with time, to
generate 5 integer values between 10 and 50. Print all 5 numbers and their
average(the numbers are all ints….should the average be a int as well?)
*/

#include <stdio.h>

int main(void)
{
	int num[5];
	int total = 0;
	double average;

    srand(time(NULL));

	//For loop that fills the array with numbers
	for(int i = 0; i < 5; i++)
    {
        num[i] = 1 + rand()%(50 + 1 - 10);
    }

	//For loop that calculates the total of the numbers
	for (int i = 0; i < 5; i++)
	{
		total = total + num[i];
	}

	//For loop that prints out all the numbers.
	for (int i = 0; i < 5; i++)
	{
		printf("%d) %d\n", i+1, num[i]);
	}

	//Calculates the average of all the numbers.
	average = (double)total / 5;

	//Prints the average of all the numbers.
	printf("\nAverage: %0.2f\n", average);

    return(0);
}
