#include <stdio.h>
#include <math.h>

//Main Method
int main(void)
{
  //Variables
  double num1;
  double num2;
  double num3;
  double num4;
  double *pnum;

  //Prompts the user to enter 4 numbers
  printf("Please enter 4 numbers:\n");

  //Scans in 4 doubles
  scanf("%lf", &num1);
  scanf("%lf", &num2);
  scanf("%lf", &num3);
  scanf("%lf", &num4);

  /**
    The following 4 methods first check to see that
    the number entered by the user is a perfect square.

    It then checks if the current number is greater than
    the previous number. If it is, then it points pnum to that number,
    otherwise, it does nothing.
  **/
  if(sqrt(num1) == floor(sqrt(num1)))
  {
      pnum = &num1;
  }

  if(sqrt(num2) == floor(sqrt(num2)))
  {
    if (num1 < num2)
    {
      pnum = &num2;
    }
  }

  if(sqrt(num3) == floor(sqrt(num3)))
  {
    if (num2 < num3)
    {
      pnum = &num3;
    }
  }

  if(sqrt(num4) == floor(sqrt(num4)))
  {
    if (num3 < num4)
    {
      pnum = &num4;
    }
  }

  //Prints out the largest perfect square using the pnum pointer.
  printf("\nMax: %.1lf\n", *pnum);

  return 0;
}
