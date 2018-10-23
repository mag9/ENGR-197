/*
CW_14
Jeremy Stark
10/23/2018
a program that will generate a random number (between 65 and 90),
print it to the screen. It will then print the
corresponding character to that number and then the rest of the
alphabet until 'Z'.
*/

#include <stdio.h>
#include <time.h>

int main(void)
{
  //Number variable
  int num;

  //Srand seeded with time.
  srand(time(NULL));

  //Assigning out num int with a random number seeded with time.
  num = 65  + rand()%(90 + 1 - 65);

  //Print out the random number generated.
  printf("%d\n\n", num);

  //Do-while loop that prints out the
  //corresponding character to that
  //number and then the rest of the
  //alphabet until 'Z'.
  do
  {
    printf("%c", num);
    num++;
  } while(num <= 90);

  //Print out a new line for asthetics within the terminal.
  printf("\n");

  return 0;
}
