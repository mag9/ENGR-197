/*
HW_06_B
Jeremy Stark
10/30/2018
A program that will generate a random number for Num then
will set lastNum to that number and generate a new random
number for Num and continue to change Num and lastNum
until they are in order of one another and lastNum < Num.
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//Main method
int main(void)
{
  //Variables
  int Num;
  int lastNum;
  int count = 0;

  //Seeds srand with time
  srand(time(NULL));

  //Sets Num equal to a random number 1-75.
  Num = 0 + rand() % (75 + 1 - 0);

  /**
    Do-while loop that sets lastNum to Num
    Resets Num to a new random number
    increases the counter variable
    The loop ends when lastNum = Num-1
  **/
  do
  {
    lastNum = Num;
    Num = 0 + rand() % (75 + 1 - 0);
    count++;
  } while(lastNum != Num-1);

  //Prints out lastNum, Num, and Count
  printf("lastNum:%d\nNum:%d\nCount:%d\n", lastNum, Num, count);

  return 0;
}
