#include <stdio.h>
#include <math.h>

/**
Triangle method
Takes in base and height as doubles.
Uses pointers to return the area and perimeter.
**/
void Triangle(double base, double height, double *area, double *perimeter)
{
  *area = (base * height) / 2;
  *perimeter = base + sqrt(pow(base, 2) + 4 * pow(height, 2));
}

/**
Rectangle method
Takes in base and height as doubles.
Uses pointers to return the area and perimeter.
**/
void Rectangle(double base, double height, double *area, double *perimeter)
{
  *area = base * height;
  *perimeter = (2 * base) + (2 * height);
}

//Main method
int main(void)
{
  //Variables
  double base, height, area, perimeter;

  //Prompt user to input base and height
  //Scans in values for base and height
  printf("Please enter a value for base: \n");
  scanf("%lf", &base);

  printf("Please enter a value for height: \n");
  scanf("%lf", &height);

  //Calls Triangle function and then prints out calculated values
  Triangle(base, height, &area, &perimeter);
  printf("Triangle Area and Perimeter: %lf , %lf\n", area, perimeter);

  //Calls out Rectangle function and then prints out calculated values
  Rectangle(base, height, &area, &perimeter);
  printf("Triangle Area and Perimeter: %lf , %lf\n", area, perimeter);

  return 0;
}
