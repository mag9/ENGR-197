/*
CW_12
Jeremy Stark
10/02/2018
A program will calculate the speed of
sound in air at a specific temperature.
*/

#include <stdio.h>
#include <math.h>

//Function that takes in temperature (in F), calculates the speed, and returns as a double.
double soundSpeed(int temp)
{
	double speed = sqrt((5*temp+297)/247);

	return speed;
}

//Function that takes in Temp (in F), calculated speed, and prints out the final input including the two.
void printOut(int temp, double speed)
{
	printf("Speed of sound is %0.2lf at %dF\n", speed, temp);
}

//Main function
int main(void)
{
	//Temp and speed variable
	int temp;
	double speed;

	//Prompts user to enter temperature and scans it into variable, "temp".
	printf("Please enter temperature: \n");
	scanf("%d", &temp);

	//Calls speed function to set value of speed variable.
	speed = soundSpeed(temp);

	//Calls printOut taking in temp and speed variable to print out formatted output.
	printOut(temp, speed);

	return 0;
}
