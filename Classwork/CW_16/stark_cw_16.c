#include <stdio.h>

//Main method
int main(void)
{
  //Variables
  int num = 0;
  double factorial = 1;

  //Prompts user to enter value and scans it
  printf("Enter a positive number: \n");
  scanf("%d", &num);
  //Ensures that the number is positive.
  while(num < 0)
  {
    printf("The number you have entered is not positive. Please enter another: \n");
    scanf("%d", &num);
  }

  //For loop that calculates factorial of value.
  for(int i = 1; i <= num; i++)
  {
      factorial = factorial * i;
  }

  //Prints it out.
  printf("Factorial: %0.1lf\n", factorial);

  return 0;
}
