/*
HW_03_A
Jeremy Stark
09/28/2018
A program which will take 3 inputs (a, b, c), print them in
quadratic format, and then show the different possible solutions
based on the quadratic formula.
*/

#include <stdio.h>

//Prints (a, b, c) in quad form.
void quadForm(int a, int b, int c)
{
	printf("%dx^2 + %dx + %d\n", a, b, c);
}

//calculates the determinate.
double calcDet(double a, double b, double c)
{
	double d;

	d = (pow(-b, 2) - (4*a*c));

	return d;
}

//First method for calculating the quadratic formula.
void calcQuadA(int a, int b, int c)
{
	int quad1 = (-b + sqrt(pow(b, 2) - 4*a*c))/(2*a);
	int quad2 = (-b - sqrt(pow(b, 2) - 4*a*c))/(2*a);

	printf("Quadratic solutions: %d and %d\n", quad1, quad2);
}

//Second method for calculating the quadratic formula.
void calcQuadB(int a, int b, int c)
{
	int solution = (-b)/(2*a);
}

//Third method for calculating the quadratic formula.
void calcQuadC()
{
	printf("The equation only has imaginary solutions.\n");
}

//Main method
int main(void)
{
	//Variables
	double a, b, c, d;

	//Prompts user to enter a, b, and c values
	printf("Enter a:\n");
	scanf("%lf", &a);

	printf("Enter b:\n");
	scanf("%lf", &b);

	printf("Enter c:\n");
	scanf("%lf", &c);

	//calls quadForm function.
	quadForm(a, b, c);

	d = calcDet(a, b, c);

	printf("main: %lf\n", d);

	//Checks value of determine to determine quadratic
	//function to use.
	if(d > 0)
	{
		calcQuadA(a, b, c);
	}
	else if(d = 0)
	{
		calcQuadB(a, b, c);
	} else if(d < 0)
	{
		calcQuadC();
	}

	return(0);
}
