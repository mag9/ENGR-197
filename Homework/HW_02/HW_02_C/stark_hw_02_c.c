/*
HW_02_C
Jeremy Stark
09/18/2018
Write a program will generate three angles between 10 and 80 degrees using the
random number generator, seeded with time.
Calculate the sin and cos of each angle.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	double angle[3];
	double sine[3];
	double cosine[3];


    srand(time(NULL));

	//For loop that fills the angle array with angle values
	for(int i = 0; i < 3; i++)
    {
        angle[i] = (80 - 10 + 1) * (rand() / (double) RAND_MAX) + 10;
    }

	//For loop that calulates the sine value of each of the angles
	for(int i = 0; i < 3; i++)
    {
        sine[i] = sin(angle[i]);
    }

	//For loop that calulates the cosine value of each of the angles
	for(int i = 0; i < 3; i++)
    {
        cosine[i] = cos(angle[i]);
    }

	//Print top of table
	printf("Angle\t\tSine\t\tCosine\n");

	//Print out all angles, sine values, and cosine values
	//Sine and cosine values are in terms of radians
	for(int i = 0; i < 3; i++)
    {
        printf("%0.1lf\t\t%0.4lf\t\t%0.4lf\n", angle[i], sine[i], cosine[i]);
    }

	return 0;
}
