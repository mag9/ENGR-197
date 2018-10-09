#include <stdio.h>

int main(void)
{
	int classSize;
	int classTotal;
	double classAverage;
	int classMax = 0;
	int i = 0;

	printf("How many students are in the class?\n");
	scanf("%d", &classSize);

	int class[classSize];

	printf("Please enter grades: \n");

	while (i < classSize)
	{
		scanf("%d", &class[i]);
		i++;
	}

	i = 0;
	while (i < classSize)
	{
		classTotal = classTotal + class[i];
		i++;
	}

	classAverage = (double)(classTotal / classSize);

	i = 0;
	while (i < classSize)
	{
		if (class[i] > classMax)
	    {
	       classMax = class[i];
	    }

		i++;
	}

	printf("Class Average: %0.2lf\nClass Max: %d\n", classAverage, classMax);

	return 0;
}
