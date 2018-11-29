#include <stdio.h>
#include <time.h>

int main()
{
  //Variables
  int array[10];
  int sortedArray[10];
  int temp;
  int first;


  //Seeding srand with time.
  srand(time(NULL));

  //Fills array with random integers.
  for(int i = 0; i < 10; i++)
  {
    array[i] = 1 + rand() % (100 + 1 - 1);
  }

  //Prints out array
  for(int i = 0; i < 10; i++)
  {
    printf("%3d", array[i]);
  }

  printf("\n");

  //Sort array
  for (int i = 9; i > 0; i--)
  {
    first = 0;
    for(int j = 1; j <= i; j++)
    {
      if(array[j] < array[first])
      {
        first = j;
      }
      //swap smallest found with element in position i.
      temp = array[first];
      array[first] = array[ i ];
      array[i] = temp;
    }
  }

  //Prints out sortedArray
  for(int i = 0; i < 10; i++)
  {
    printf("%3d", array[i]);
  }
  printf("\n");

  return 0;
}
