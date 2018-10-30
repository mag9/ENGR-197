#include <stdio.h>

int main(void)
{
  double roomTemp;
  double maxTemp = 0;
  double tempSum = 0;
  double avgTemp;
  double avgTemps[3];

  for(int i = 0; i < 3; i++)
  {

    for(int j = 0; j < 4; j++)
    {
      printf("Enter room %d temperature %d: \n", i+1, j+1);
      scanf("%lf", &roomTemp);

      tempSum = tempSum + roomTemp;

      if(maxTemp < roomTemp)
      {
        maxTemp = roomTemp;
      }
    }

    avgTemps[i] = (tempSum / 4);
    tempSum = 0;
  }

  for (int i = 0; i < 3; i++)
  {
    printf("Room %d average temperature: %0.3lf\n", i+1, avgTemps[i]);
  }


  printf("Max room temperature: %.03lf\n", maxTemp);

  return 0;
}
