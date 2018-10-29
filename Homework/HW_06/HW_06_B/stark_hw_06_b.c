#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
  int Num;
  int lastNum;
  int count = 0;
  srand(time(NULL));

  Num = 0 + rand() % (100 + 1 - 0);

  do
  {
    lastNum = Num;
    Num = 0 + rand() % (100 + 1 - 0);
    count++;
  } while(lastNum != Num-1);

  printf("lastNum:%d\nNum:%d\nCount:%d\n", lastNum, Num, count);

  return 0;
}
