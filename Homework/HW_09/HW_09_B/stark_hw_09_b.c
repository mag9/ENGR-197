#include <stdio.h>
#include <time.h>

void sort(int *array, int numElements, int* numChange)
{
  int temp = 0;
  int min = 0;
  int j;

  //Sort array
  for (int i = 0; i < numElements-1; i++)
  {
    min = i;
    for(j = i+1; j < numElements; j++)
    {
      if(array[j] < array[min])
      {
        min = j;
      }
    }

    //swap smallest found with element in position i.
    temp = array[min];
    array[min] = array[i];
    array[i] = temp;
    *numChange = *numChange + 1;
  }

}

//Main method
int main(void)
{
  //Variables
  int array[20];
  int numChange = 0;
  int temp;
  int min;

  //srand seeded with time
  srand(time(NULL));

  for(int i = 0; i < 20; i++)
  {
    array[i] = array[i] = 1 + rand() % (100 + 1 - 1);
  }

  printf("Unsorted array: \n");

  for(int i = 0; i < 20; i++)
  {
    printf("%d ", array[i]);
  }
  printf("\n\n");

  printf("Sorted array: \n");

  sort(&array, 20, &numChange);

  for(int i = 0; i < 20; i++)
  {
    printf("%d ", array[i]);
  }
  printf("\n\n");

  printf("Number of Changes: %d\n", numChange);


  return 0;
}
