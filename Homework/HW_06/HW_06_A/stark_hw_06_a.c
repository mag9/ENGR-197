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
  //Variables
  int numOne;
  int numTwo;
  int gcd;

  //Seeds srand with time
  srand(time(NULL));

  //Assigns numOne and numTwo with random number from 0-100
  numOne = 0 + rand() % (100 + 1 - 0);
  numTwo = 0 + rand() % (100 + 1 - 0);

  //For loop that only goes up to the smallest of the two numbers
  for(int i=1; i <= numOne && i <= numTwo; ++i)
  {
      // Checks if i is factor of both integers
      //Then sets the gcd to the number which is a factor of both
      if(numOne%i==0 && numTwo%i==0)
          gcd = i;
  }

  //Prints out numOne, numTwo, and the GCD
  printf("Number 1:%d\nNumber2:%d\nGCD:%d\n", numOne, numTwo, gcd);


  return 0;
}
