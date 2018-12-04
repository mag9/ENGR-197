#include <stdio.h>
#include <time.h>

/**
  Sort function
    int *array - a pointer to the array created in the main method
    int numElements - the number of elements in that array
    int *numChange - the number of times that the smallest index was changed
**/
void sort(int *array, int numElements, int* numChange)
{
  int temp = 0;
  int min = 0;
  int j;

  //Sort array using selection sort
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

    //increase numChange by 1
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

  //Fill array with random integers
  for(int i = 0; i < 20; i++)
  {
    array[i] = array[i] = 1 + rand() % (100 + 1 - 1);
  }

  printf("Unsorted array: \n");

  //Prints out the unsorted array
  for(int i = 0; i < 20; i++)
  {
    printf("%d ", array[i]);
  }
  printf("\n\n");

  printf("Sorted array: \n");

  //Calls the sort function passing in the array, 20 array elements, and a pointer to numChange
  sort(&array, 20, &numChange);

  //Prints out the sorted array
  for(int i = 0; i < 20; i++)
  {
    printf("%d ", array[i]);
  }
  printf("\n\n");

  //Prints the number of changes
  printf("Number of Changes: %d\n", numChange);


  return 0;
}
