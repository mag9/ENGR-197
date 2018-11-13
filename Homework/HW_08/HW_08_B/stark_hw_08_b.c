/*
HW_08_B
Jeremy Stark
11/12/2018
A program reads in (x,y) coordinates, calculates the slope and
y-intercept of the line between coordinates, and prints out equation for the line
between the two points in slope-intercept form.
*/


#include <stdio.h>

//get2points method
//Takes in 4 pointers; x1, y1, x2, y2
void get2points(double* x1, double* y1, double* x2, double* y2)
{
  printf("Enter X1: \n");
  scanf("%lf", x1);

  printf("Enter Y1: \n");
  scanf("%lf", y1);

  printf("Enter X2: \n");
  scanf("%lf", x2);

  printf("Enter Y2: \n");
  scanf("%lf", y2);
}

//slopeIntercept function
//Takes in x1, y1, x2, y2, as well as pointers m and b.
void slopeIntercept(double x1, double y1, double x2, double y2, double* m, double* b)
{
  //Calculates the slope and slope intercept based on the given points
  *m = (y2-y1) / (x2-x1);
  *b = y1 - (*m * x1);
}

//Main method
int main(void)
{
  //Variables
  double x1, y1, x2, y2, m, b;
  char cont = 'Y';

  //While loop that allows the user to enter new points as long as cont == 'Y'
  while(cont == 'Y')
  {
    get2points(&x1, &y1, &x2, &y2);

    slopeIntercept(x1, y1, x2, y2, &m, &b);

    printf("y = %0.2lfx + %0.2lf\n", m, b);

    printf("Enter Y to enter a new pair of coordinates, N to stop\n");
    scanf(" %c", &cont);
  }

  return 0;
}
