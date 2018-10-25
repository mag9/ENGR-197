/*
HW_05_B
Jeremy Stark
10/25/2018
A program that calculate the arithmetic mean,
the geometric mean, and the harmonic mean
for a set of non-zero numbers.
*/
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
  int num[5];
  double mean;
  int min = 100;
  int max = 0;
  int numEven = 0;
  int numOdd = 0;
  int sum = 0;

  srand(time(NULL));

  //Generates and populates int array with 5 random values
  for(int i = 0; i < 5; i++)
  {
    num[i] = 0 + rand() % (100 + 1 - 0);
  }

  //Prints out the generated values;
  printf("Numbers: ");
  for(int i = 0; i < 5; i++)
  {
    printf("%d ", num[i]);
  }
  printf("\n");

  for(int i = 0; i < 5; i++)
  {
    sum = sum + num[i];

    if(num[i] < min)
    {
      min = num[i];
    }

    if(num[i] > max)
    {
      max = num[i];
    }

    if(num[i] % 2 == 0)
    {
      numEven++;
    }
    else
    {
      numOdd++;
    }
  }

  mean = ((double)sum / 5);
  printf("Mean: %0.2lf\n", mean);
  printf("Min: %0.2lf\n", min);
  printf("Max: %0.2lf\n", max);
  printf("Number of Even: %0.2lf\n", numEven);
  printf("Number of Odd: %0.2lf\n", numOdd);

  return 0;
}
