#include <stdio.h>

int main(void)
{
  double roomTemp;
  double tempSum = 0;
  double avgTemp;

  for(int i = 0; i < 4; i++)
  {
    printf("Enter room temperature: \n");
    scanf("%lf", &roomTemp);

    tempSum = tempSum + roomTemp;
  }

  avgTemp = tempSum / 4;

  printf("Average room temperature: %.03lf\n", avgTemp);

  return 0;
}
