/*
CW_11
Jeremy Stark
09/27/2018
A program will calculate the average of 3 (double)
numbers using a function of type double.
*/

#include <stdio.h>

//Function that calculates and returns the average of the 3 numbers.
double calcAverage(double num1, double num2, double num3)
{
	double average = (num1+ num2 + num3) / 3;

	return average;
}

//Main function
int main(void)
{
	//Variables
	double num1, num2, num3;

	//User prompts
	printf("Enter Number 1\n");
	scanf("%lf", &num1);

	printf("Enter Number 2\n");
	scanf("%lf", &num2);

	printf("Enter Number 3\n");
	scanf("%lf", &num3);

	//Prints the final output statement.
	//Calls the calcAverage function within the print statement.
	printf("The average of %0.2lf, %0.2lf, and %0.2lf is %0.2lf\n", num1, num2, num3, calcAverage(num1, num2, num3));

	return 0;
}
