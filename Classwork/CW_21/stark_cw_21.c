#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
  int array[10];
  double largest = 0;
  double smallest = 100;

  srand(time(NULL));

  for(int i = 0; i < 10; i++)
  {
    array[i] = 10  + rand()%(100 + 1 - 10);
  }

  for(int i = 0; i < 10; i++)
  {
    if(array[i] < smallest)
    {
      smallest = array[i];
    }
    if(array[i] > largest)
    {
      largest = array[i];
    }
  }

  for(int i = 0; i < 10; i++)
  {
    printf("%d, ", array[i]);

    if(i == 9)
    {
      printf("\n");
    }
  }

  printf("Largest: %0.2lf\n", largest);
  printf("Smallest: %0.2lf\n", smallest);

  return 0;
}
