#include <stdio.h>

int main(void)
{
    int initVel;
    int accel;
    int time;
    int distance;

    printf("Please enter your initial Velocity, acceleration, and time - in that order.\n");
    scanf("%d", &initVel);
    scanf("%d", &accel);
    scanf("%d", &time);
    
    //Distance calculation
    distance = 0.5 * accel * (time*time) + initVel * time;

    printf("%d", distance);

    return(0);
}
