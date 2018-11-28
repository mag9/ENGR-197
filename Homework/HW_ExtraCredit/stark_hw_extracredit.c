#include <stdio.h>

#define PI 3.1415

/*
Extra Credit
Jeremy Stark
12/04/2018
A program that calulates the cost of mowing a lawn based
on a calculated area using dimensions input by the user.
*/

/*
  calcArea function
  Input width, length, radius, house width, house length
  Outputs flower area, total area, and house area
*/
void calcArea(double width, double length, double radius, double houseW, double houseL, double* totalArea, double* flowerArea, double* houseArea)
{
  *houseArea = houseL * houseW;
  *flowerArea = PI * pow(radius, 2);
  *totalArea = (width * length) - *houseArea - *flowerArea;
}

//Main function
int main(void)
{
  //Variables
  double rate = 1.25;
  double width, length, radius, houseL, houseW, totalArea, flowerArea, houseArea, finalCost;

  //Prompts the user to enter measurements
  printf("Enter the width of the lot: \n");
  scanf("%lf", &width);

  printf("Enter the length of the lot: \n");
  scanf("%lf", &length);

  printf("Enter the radius of the flower bed: \n");
  scanf("%lf", &radius);

  printf("Enter the width of the house: \n");
  scanf("%lf", &houseW);

  printf("Enter the length of the house: \n");
  scanf("%lf", &houseL);

  //Calls the calcArea function
  calcArea(width, length, radius, houseW, houseL, &totalArea, &flowerArea, &houseArea);

  //Calculates the final cost using the given rate.
  finalCost = rate * totalArea;

  //Prints final calculated values
  printf("House Area: %0.2lf ft^2\n", houseArea);
  printf("Flower Area: %0.2lf ft^2\n", flowerArea);
  printf("Total Area: %0.2lf ft^2\n", totalArea);
  printf("Final Cost: $%0.2lf\n", finalCost);

  return 0;
}
