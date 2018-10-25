/*
HW_05_A
Jeremy Stark
10/25/2018
A program that will take input for the initial velocity
and angle of a ball thrown and will then plot out the
height of the ball on a table in intervals of 0.05 seconds.
*/

//Defined G and PI
#define G 9.81
#define PI 3.14159

#include <stdio.h>
#include <math.h>

//calcHeight Function with inputs of initial velocity and angle
void calcHeight(double vel, double angle)
{
  double time = 0;
  double height = 0;

  printf("Time\tHeight\n");

  /*
    While loop that will print the curent time and height of the object,
    increment time, then calculate the new height of the object until it
    is at its lowest height above 0.

    The function does not print any heights below 0 (as instructed), so
    if the ball does not land on the ground within the 0.05s intervals
    then it will no be shown.
  */
  while(height >= 0)
  {
    printf("%0.2lf\t%0.2lf\n", time, height);
    time = time + 0.05;
    height = vel*time*sin(angle * PI/180)-0.5*G*pow(time, 2);
  }
}

//Main method
int main(void)
{
  //Initial velocity and initial angle variables.
  double initVel;
  double angle;

  /*
    The follow block of text promps the user for an initial velocity
    between 5 and 20m/s, then prompts the user for an angle between
    20 and 50 degrees.

    After each prompt, it will check to ensure that the entered value
    is within the bounds, if not - it will prompt the user to enter
    a new value until a correct one is entered.
  */
  printf("Please input an initial velocity between 5m/s and 20m/s: \n");
  scanf("%lf", &initVel);
  if (initVel < 5 || initVel > 20)
  {
    printf("Incorrect value, please enter another: \n");
    scanf("%lf", &initVel);
  }

  printf("Please input an angle between 20 and 50 degrees: \n");
  scanf("%lf", &angle);
  if (angle < 20 || angle > 50)
  {
    printf("Incorrect value, please enter another: \n");
    scanf("%lf", &angle);
  }

  //Calls the calcHeight function, passing in our inital velocity and angle.
  calcHeight(initVel, angle);

  return 0;

}
