#include <stdio.h>

void drawBoard(char board[3][3], int row, int column)
{
  board[row-1][column-1] = 'X';

  for(int i = 0; i < 3; i++)
  {
    for(int j = 0; j < 3; j++)
    {
      printf("%c ", board[i][j]);
    }
    printf("\n");
  }
}

int main(void)
{
  int row, column;
  char board[3][3];

  for(int i = 0; i < 3; i++)
  {
    for(int j = 0; j < 3; j++)
    {
      board[i][j] = "  ";
    }
  }

  printf("Player 1, enter row: \n");
  scanf("%d", &row);

  printf("Player 1, enter column: \n");
  scanf("%d", &column);

  board[row-1][column-1] = 'X';
  drawBoard(board, row, column);

  printf("Player 2, enter row: \n");
  scanf("%d", &row);

  printf("Player 2, enter column: \n");
  scanf("%d", &column);

  drawBoard(board, row, column);

  return 0;
}
