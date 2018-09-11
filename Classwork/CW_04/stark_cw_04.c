//Jeremy Stark

#include <stdio.h>

int main(void)
{
    float pi = 3.1415926;
    float rad;
    float volume;

    printf("Please enter a circle radius: \n");
    scanf("%f", &rad);

    volume = ((4/(double)3)*pi*(rad*rad*rad));

    printf("\nVolume: %f\n", volume);

    return(0);
}
