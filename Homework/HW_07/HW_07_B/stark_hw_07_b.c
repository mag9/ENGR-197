#include <stdio.h>

int main(void)
{
  //Variables
  int height, width, tsize;

  //Promps user to enter values for height and width of pattern 1 and 2, and scans in values
  printf("Enter a value for the height of pattern 1:\n");
  scanf("%d", &height);

  printf("Enter a value for the width of pattern 1:\n");
  scanf("%d", &width);

  printf("Enter a value for the width and height of pattern 2:\n");
  scanf("%d", &tsize);

  //Draws Rectangle
  for (int i = 0; i < height; i++)
  {
    for (int j = 0; j < width; j++)
    {
        if (i == 0 || i == height-1)
        {
          printf("=");
        }
        else if (j == 0 || j == width-1)
        {
          printf("*");
        }
        else
        {
          printf(" ");
        }
      }
      printf("\n");
    }

  printf("\n\n");

  //Draws Triangle
  for (int i = tsize; i >= 1; i--)
  {
    for (int j = 1; j < i; j++)
    {
      printf(" ");
    }
    for (int k = tsize; k >= i; k--) {
      printf("*");
    }
      printf("\n");
  }

  return 0;
}
