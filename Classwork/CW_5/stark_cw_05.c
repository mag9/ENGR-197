//Jeremy Stark

#include <stdio.h>
#include <math.h>

int main(void)
{
	const float PI = 3.14159;

    float side;
	float alpha;
	float hyp;

	//Side input
	printf("Please enter a length for side \"a:\"\n");
	scanf("%f", &side);

	//Angle input
	printf("Please enter an angle for \"alpha\":\n");
	scanf("%f", &alpha);

	//Converting the angle to radians
	//Trig functions in C use radians
	alpha = alpha * (PI / 180);

	//Making sure the user is entering a triangle that is possible
	while(alpha <= 0 || alpha >= 90)
	{
		printf("Angle in-valid, please enter a new angle for \"alpha\":\n");
		scanf("%f", &alpha);
	}

	//Calculating the hypotenuse
	hyp = side / cos(alpha);

	//Printing the final output
	printf("The length of side \"c\": %0.3f\n", hyp);

    return(0);
}
