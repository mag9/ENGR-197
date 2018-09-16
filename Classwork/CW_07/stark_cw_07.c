//Jeremy Stark

#include <stdio.h>
#include <math.h>

int main(void)
{
	int a;
	int b;
	int c;
	int d;

	printf("Please enter a value for a:\n");
	scanf("%d", &a);

	printf("Please enter a value for b:\n");
	scanf("%d", &b);

	printf("Please enter a value for c:\n");
	scanf("%d", &c);

	d = pow(b, 2) - 4 * a * c;

	if (d > 0)
	{
		printf("Determinant: +%d and -%d\n", d, d);
	}
	else if (d < 0)
	{
		printf("There are no real roots\n");
	}
	else
	{
		printf("Determinant: %d\n", d);
	}

    return(0);
}
