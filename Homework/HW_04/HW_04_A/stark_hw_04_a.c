/*
HW_04_A
Jeremy Stark
10/09/2018
A program which will generate 3 random numbers and return the average.
*/
#include <stdio.h>
#include <stdlib.h>

double calcAverage(int num1, int num2, int num3)
{
	double average = (double)(num1 + num2 + num3) / 3;

	return average;
}

int generateNum()
{
	int num = 1 + rand()%(100 + 1 - 1);;

	return num;
}

int main(void)
{
	srand(time(NULL));

	int num1 = generateNum();
	int num2 = generateNum();
	int num3 = generateNum();
	double average = calcAverage(num1, num2, num3);

	printf("Number 1: %d\n", num1);
	printf("Number 2: %d\n", num2);
	printf("Number 3: %d\n", num3);
	printf("Average: %0.2lf\n", average);

	return 0;
}
