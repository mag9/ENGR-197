#include <stdio.h>

int main(void)
{
  //Variables
  double average;
  double total = 0;
  double originalArray[20];
  double modifiedArray[20];

  //Srand seeded with time.
  srand(time(NULL));

  //Fills array with random numbers
  for(int i = 0; i < 20; i++)
  {
    originalArray[i] = 1  + rand()%(100 + 1 - 1);
    total += originalArray[i];
  }

  //Calculates the average
  average = total / 20;

  //Fills new array
  for(int i = 0; i < 20; i++)
  {
    if(originalArray[i] < average)
    {
      modifiedArray[i] = average;
    }
    else
    {
      modifiedArray[i] = originalArray[i];
    }
  }

  //Prints out the final values
  printf("Average: %0.2lf\n", average);
  printf("originalArray\tmodifiedArray\n");

  for(int i = 0; i < 20; i++)
  {
    printf("%0.2lf\t\t%0.2lf\n", originalArray[i], modifiedArray[i]);
  }

  return 0;
}
