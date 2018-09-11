#include <stdio.h>

int main(void)
{
	const double PI = 3.14159;

	int radius;
	int cylHeight;
	int coneHeight;

	double volumeCylinder;
	double volumeCone;
	double volumeTotal;

	printf("Enter radius of bottle:\n");
	scanf("%d", &radius);

	printf("Enter height of cylindrical section:\n");
	scanf("%d", &cylHeight);

	printf("Enter the height of the conic section:\n");
	scanf("%d", &coneHeight);

	volumeCylinder = (PI * pow(radius, 2) * cylHeight);
	volumeCone = ((1.f/3) * PI * pow(radius, 2) * cylHeight);
	volumeTotal = volumeCone + volumeCylinder;

	printf("Cylinder Volume: %0.4f\n", volumeCylinder);
	printf("Cone Volume: %0.4f\n", volumeCone);
	printf("Total Volume: %0.4f\n", volumeTotal);

	volumeTotal = volumeCone + volumeCylinder;

	return(0);
}
