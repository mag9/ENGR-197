#include <stdio.h>
#include <math.h>

double soundSpeed(int temp)
{
	double speed = sqrt((5*temp+297)/247);

	return speed;
}

void printOut(int temp, double speed)
{
	printf("Speed of sound is %0.2lf at %dF\n", speed, temp);
}

int main(void)
{
	int temp;
	double speed;

	printf("Please enter temperature: \n");
	scanf("%d", &temp);

	speed = soundSpeed(temp);
	printOut(temp, speed);

	return 0;
}
