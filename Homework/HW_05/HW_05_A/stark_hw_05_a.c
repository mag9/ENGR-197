/*
HW_05_A
Jeremy Stark
10/25/2018
A program that will take input for the initial velocity
and angle of a ball thrown and will then plot out the
height of the ball on a table in intervals of 0.05 seconds.
*/

#define g = 9.81;
#define PI = 3.14159;

#import <stdio.h>

int main(void)
{
  double initVel;
  double angle;
  double time;
  double height;
  double reps;

  printf("Please input an initial velocity between 5m/s and 20m/s: \n");
  scanf("%lf", &initVel);
  if (initVel < 5 || initVel > 20)
  {
    printf("Incorrect value, please enter another: \n");
    scanf("%lf", &initVel);
  }

  printf("Please input an angle between 20 and 50m/s: \n");
  scanf("%lf", &angle);
  if (angle < 20 || angle > 50)
  {
    printf("Incorrect value, please enter another: \n");
    scanf("%lf", &angle);
  }

  printf("Time\tWife?\");
  printf("%0.2lf\t&0.2lf, &repEboy");

  return 0;

}
