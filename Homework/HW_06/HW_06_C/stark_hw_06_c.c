/*
HW_06_C
Jeremy Stark
10/30/2018
A program that will calculate the Reimann Sum
of the function x^2+2x+3
*/

#include <stdio.h>
#include <math.h>

/**
  calculateSum function with 3 double inputs.
  dx - the width of each of the rectangles
  intervals - the numnber of intervals in the summation.
*/
double calculateSum(double dx, int intervals)
{
  //Variables
  double functionValue;
  double area;
  double totalArea = 0;
  double n;

  /**
  For loop that will increase up to double the value of the upper limit.
  The dx value is represented by n in the loop by calcuating it based on i.
  functionValue is then calculated based on the given function.
  Area is then calculated by multiplying the functionValue by the dx width.
  totalArea then has the newest rectangle's area added to it.
  */
  for (int i = 1; i <= intervals; i++)
  {
    n = i*dx;
    functionValue = pow(n, 2) + 2*n + 3;

    area = functionValue * dx;
    totalArea = totalArea + area;
  }

  //Returns the totalArea of the Reimann summation.
  return totalArea;
}

//Main method
int main(void)
{
  //Variables
  double lowerLimit;
  double upperLimit;
  int intervals;
  double dx;

  /**
    Promps the user to enter the lower and upper limit of the integral.
    Scans in the value of the upper and lower limit.
  */
  printf("Enter the lower limit of the integral: \n");
  scanf("%lf", &lowerLimit);

  printf("Enter the upper limit of the integral\n");
  scanf("%lf", &upperLimit);

  /**
    Data validation loop
    Will run only and while the upperLimit is less than the lowerLimit.
      The loop will tell the user that they entered improper limits and
      will then scan in new limit values for the user to enter.
  */
  while (upperLimit < lowerLimit)
  {
    printf("Sorry, the lower limit is greater then the upper limit.\n");
    printf("Enter the lower limit of the integral: \n");
    scanf("%lf", &lowerLimit);

    printf("Enter the upper limit of the integral\n");
    scanf("%lf", &upperLimit);
  }

  //Promps the user to enter the number of intervals for the reimann summation.
  printf("Enter the number of intervals desired to calulate the sum: \n");
  scanf("%d", &intervals);

  //calculates the dx (width) using the given formula.
  dx = (upperLimit - lowerLimit)/intervals;

  //Prints out the calculated reimann summation.
  printf("Reimann Sum: %lf\n", calculateSum(dx, intervals));

  return 0;
}
