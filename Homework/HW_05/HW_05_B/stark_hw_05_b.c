/*
HW_05_A
Jeremy Stark
10/25/2018
A program that calculate the arithmetic mean,
the geometric mean, and the harmonic mean
for a set of non-zero numbers.
*/
#define SENTINAL -99

#include <stdio.h>

//Main Method
int main(void)
{
  double num;
  double arithPartial;
  double geomPartial;
  double harmPartial;
  double arithmetic;
  double geometric;
  double harmonic;

  printf("Please enter numbers between 0 and 10. Enter -99 when finished: \n");

  while(num != SENTINAL)
  {
    scanf("%lf", num);

    arithPartial = arithPartial + num;
    geomPartial = geomPartial * num;
    harmPartial = harmPartial + (1/num);
  }

  return 0;
}
