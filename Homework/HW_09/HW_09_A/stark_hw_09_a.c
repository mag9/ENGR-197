#include <stdio.h>
#include <time.h>

//Main method
int main(void)
{
  //Variables
  int array[15];
  int modifiedarray[15];
  int numOdds = 0;
  int numEvens = 0;

  //srand seeded with time
  srand(time(NULL));

  //Fill array with random numbers
  for(int i = 0; i < 15; i++)
  {
    array[i] = 10 + rand() % (60 + 1 - 10);
  }

  //Count evens and odd
  for(int i = 0; i < 15; i++)
  {
    if(array[i] % 2 == 0)
    {
      numEvens++;
    }

    if(array[i] % 2 != 0)
    {
      numOdds++;
    }
  }

  for(int i = 0; i < 15; i++)
  {
    if(numOdds > numEvens)
    {
      if(array[i] % 2 != 0)
      {
        modifiedarray[i] = array[i];
      }
      else
      {
        modifiedarray[i] = 0;
      }
    }

    if(numEvens > numOdds)
    {
      if(array[i] % 2 == 0)
      {
        modifiedarray[i] = array[i];
      }
      else
      {
        modifiedarray[i] = 0;
      }
    }
  }

  printf("Odd numbers: %d\n", numOdds);
  printf("Even numbers: %d\n\n", numEvens);

  printf("Orig. Array\tModified Array\n");
  for(int i = 0; i < 15; i++)
  {
    printf("%d\t\t%d\n", array[i], modifiedarray[i]);
  }

  return 0;
}
