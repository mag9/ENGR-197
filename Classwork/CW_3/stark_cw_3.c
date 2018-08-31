//Jeremy Stark

#include <stdio.h>

int main(void)
{
    double c = 3e8;
    double mass[3];
    double energy[3];

    //Get user input
    printf("Please input 3 mass values\n");

    for(int i=0; i<3; i++)
    {
      scanf("%lf", &mass[i]);
    }

    printf("%f\n", mass[2]);

    //Energy Calculation
    for(int i=0; i<3; i++)
    {
      energy[i] = (mass[i] * (c * c));
    }

    //Print out table heading
    printf("Mass \t \t Energy\n");

    //Print out mass and energy values
    for(int i=0; i<3; i++)
    {
        printf("%.2f \t \t %0.2e\n", mass[i], energy[i]);
    }

    return(0);
}
