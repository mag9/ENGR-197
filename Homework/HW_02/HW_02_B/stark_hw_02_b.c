/*
HW_02_B
Jeremy Stark
09/18/2018
Write a program that prompts a user to enter the sides of two right triangles, a1
and b1(for triangle 1) and a2 and b3(for triangle 2). Then calculate the length of
the hypotenuse of each triangle, c1 for triangle 1 and c2 for triangle 2.
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
	double a1, b1, a2, b2, c1, c2;

	printf("Please input triangle 1, side 1: \n");
	scanf("%lf", &a1);
	printf("Please input triangle 1, side 2: \n");
	scanf("%lf", &b1);

	printf("Please input triangle 2, side 1: \n");
	scanf("%lf", &a2);
	printf("Please input triangle 2, side 2: \n");
	scanf("%lf", &b2);


	c1 = sqrt(pow(a1, 2) + pow(b1, 2));
	c2 = sqrt(pow(a2, 2) + pow(b2, 2));

	printf("Triangle 1 - a:%0.2lf, b:%0.2lf, c:%0.2lf \n", a1, b1, c1);
	printf("Triangle 2 - a:%0.2lf, b:%0.2lf, c:%0.2lf \n", a2, b2, c2);

    return(0);
}
