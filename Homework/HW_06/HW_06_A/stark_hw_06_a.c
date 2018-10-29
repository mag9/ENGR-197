/*
HW_06_A
Jeremy Stark
10/30/2018
A program that will generate two random numbers and
then find and print out the greatest common denomenator denominator.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Main Method
int main(void)
{
  int numOne;
  int numTwo;
  int gcd;

  srand(time(NULL));

  numOne = 0 + rand() % (100 + 1 - 0);
  numTwo = 0 + rand() % (100 + 1 - 0);

  for(int i=1; i <= numOne && i <= numTwo; ++i)
  {
      // Checks if i is factor of both integers
      if(numOne%i==0 && numTwo%i==0)
          gcd = i;
  }

  printf("Number 1:%d\nNumber2:%d\nGCD:%d\n", numOne, numTwo, gcd);


  return 0;
}
