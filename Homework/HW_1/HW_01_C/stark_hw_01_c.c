#include <stdio.h>

int main(void)
{
	const double PI = 3.14159;

	int radius;
	int cylHeight;
	int coneHeight;

	double volumeCone;
	double volumeCylinder;
	double volumeTotal;

	printf("Enter radius of bottle:\n");
	scanf("%d", radius);

	printf("Enter height of cylindrical section:\n");
	scanf("%d", cylHeight);

	printf("Enter the height of the conic section:\n");
	scanf("%d", coneHeight);

	volumeCylinder = PI * pow(radius, 2) * cylHeight;
	volumeCone = (1/3) * PI * pow(radius, 2) * cylHeight;

	printf("Cylinder:%0.4f", );

	volumeTotal = volumeCone + volumeCylinder;

	return(0);
}
