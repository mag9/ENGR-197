/*
HW_04_C
Jeremy Stark
10/09/2018
A program which read in the two x,y-coordinate pairs,
and determine the equation of the line that connects
the two points. The program will output the equation
of the line in slope-intercept form.
*/
#include <stdio.h>

int readX()
{
	int x;

	printf("Please Input your x value: \n");
	scanf("%d", &x);

	return x;
}

int readY()
{
	int y;

	printf("Please Input your y value: \n");
	scanf("%d", &y);

	return y;
}

double calcSlope(int x1, int x2, int y1, int y2)
{
	double slope = ((double)(y2-y1)/(double)(x2-x1));

	return slope;
}

double calcYIntercept(double slope, int x1, int y1)
{
	double intercept = (double)(y1 - slope * x1);

	return intercept;
}

int main(void)
{
	int x1 = readX();
	int y1 = readY();
	int x2 = readX();
	int y2 = readY();
	double slope = calcSlope(x1, x2, y1, y2);
	double intercept = calcYIntercept(slope, x1, y1);

	printf("Y = %0.2lfx + %0.2lf\n", slope, intercept);

	return 0;
}
