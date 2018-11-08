#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Main Method
int main(void)
{
  //Variables
  int numOne;
  int numTwo;
  int numThree;
  int *smallest;

  //Calls srand and seeds with Time
  srand(time(NULL));

  //Sets numOne, numTwo, and numThree equal to random numbers between 1 and 50
  numOne = 1 + rand() % (51 + 1 - 1);
  numTwo = 1 + rand() % (51 + 1 - 1);
  numThree = 1 + rand() % (51 + 1 - 1);

  //Sets the default smallest equal to numOne
  smallest = &numOne;

  /**
    If numTwo is less than numOne and numThree, then it will set smallest to numTwo

    If numThree is less than numOne and numTwo, then it will set smallest to numThree
  **/
  if(numTwo < numOne && numTwo < numThree)
  {
    smallest = &numTwo;
  }

  if(numThree < numOne && numThree < numTwo)
  {
    smallest = &numThree;
  }

  //Prints out the three numbers that are generated
  printf("%d, %d, %d\n", numOne, numTwo, numThree);

  //Prints out the smallest generated number using a pointer.
  printf("Smallest: %d\n", *smallest);

  return 0;
}
