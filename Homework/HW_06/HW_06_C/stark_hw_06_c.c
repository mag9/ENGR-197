/*
HW_06_C
Jeremy Stark
10/30/2018
A program that will calculate the Reimann Sum
of the function x^2+2x+3
*/

#include <stdio.h>
#include <math.h>

double calculateSum(double dx, double lowerLimit, double upperLimit)
{
  double functionValue;
  double area;
  double totalArea = 0;
  double n;

  for (int i = 1; i <= upperLimit*2; i++)
  {
    n = i*.5;
    functionValue = pow(n, 2) + 2*n + 3;

    area = functionValue * dx;
    totalArea = totalArea + area;
  }

  return totalArea;
}

int main(void)
{
  double lowerLimit;
  double upperLimit;
  int intervals;
  double dx;

  printf("Enter the lower limit of the integral: \n");
  scanf("%lf", &lowerLimit);

  printf("Enter the upper limit of the integral\n");
  scanf("%lf", &upperLimit);

  while (upperLimit < lowerLimit)
  {
    printf("Sorry, the lower limit is greater then the upper limit.\n");
    printf("Enter the lower limit of the integral: \n");
    scanf("%lf", &lowerLimit);

    printf("Enter the upper limit of the integral\n");
    scanf("%lf", &upperLimit);
  }

  printf("Enter the number of intervals desired to calulate the sum: \n");
  scanf("%d", &intervals);

  dx = (upperLimit - lowerLimit)/intervals;

  printf("%lf\n", calculateSum(dx, lowerLimit, upperLimit));

  return 0;
}
