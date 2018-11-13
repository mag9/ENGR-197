/*
HW_08_A
Jeremy Stark
11/12/2018
A program that will convert seconds of time to hours, minutes, and seconds
*/

#include <stdio.h>
#include <string.h>


/**
  timeCalc method
    Takes in time, hours, minutes, and seconds.
      hours, minutes, and seconds are pointers.
**/
void timeCalc(int time, int* hours, int* minutes, int* seconds)
{
  *hours = time / 3600;
  *minutes = (time % 3600) / 60;
  *seconds = time % 60;
}

//Main method
int main(void)
{
  //Variables
  int time;
  int hours, minutes, seconds;
  char *a = malloc(256);
  char *b = malloc(256);
  char *c = malloc(256);

  //Promps the user to enter a time in seconds
  printf("Enter a time in seconds: \n");

  //Scans in the entered time.
  scanf("%d", &time);

  //Calls timeCalc function with time, hours, minutes, and seconds
  timeCalc(time, &hours, &minutes, &seconds);

  /**
    The following if statements test to determine if
    the output units will be in plural or singular
  **/
  if(hours != 1)
  {
    strcpy(a, "hours");
  } else {
    strcpy(a, "hour");
  }

  if(minutes != 1)
  {
    strcpy(b, "minutes");
  } else {
    strcpy(b, "minute");
  }

  if(seconds != 1)
  {
    strcpy(c, "seconds");
  } else {
    strcpy(c, "second");
  }

  //Prints out the final output
  printf("%d seconds can be broken into %d %s %d %s and %d %s\n", time, hours, a, minutes, b, seconds, c);

  return 0;
}
