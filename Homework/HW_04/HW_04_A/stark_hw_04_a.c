/*
HW_04_A
Jeremy Stark
10/09/2018
A program which will generate 3 random numbers and return the average.
*/
#include <stdio.h>
#include <stdlib.h>

//Calculates and returns the average of the 3 random numbers generated.
double calcAverage(int num1, int num2, int num3)
{
	double average = (double)(num1 + num2 + num3) / 3;

	return average;
}

//Generates a random number between 1 and 100 and returns it as an int.
int generateNum()
{
	int num = 1 + rand()%(100 + 1 - 1);;

	return num;
}

//Main Method
int main(void)
{
	//Seeds random in relation to time
	srand(time(NULL));

	//Variables
	int num1 = generateNum();
	int num2 = generateNum();
	int num3 = generateNum();
	double average = calcAverage(num1, num2, num3);

	//Print statements
	printf("Number 1: %d\n", num1);
	printf("Number 2: %d\n", num2);
	printf("Number 3: %d\n", num3);
	printf("Average: %0.2lf\n", average);

	return 0;
}
