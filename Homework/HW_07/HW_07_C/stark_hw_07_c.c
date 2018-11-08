#include <stdio.h>

//Main method
int main(void)
{
  //Variables
  double classAvg, highestGrade, lowestGrade;
  double rowTotal = 0;
  double total = 0;
  double classesAvg[3];
  double classes[3][4];

  //Scans in the values for the classes into a 2d array
  for(int i = 0; i < 3; i++)
  {
    for(int j = 0; j < 4; j++)
    {
      printf("Please enter class %d, grade %d:\n", i+1, j+1);
      scanf("%lf", &classes[i][j]);
    }
  }

  //Determines the lowest and highest grade.
  highestGrade = classes[0][0];
  lowestGrade = classes[0][0];
  for(int i = 0; i < 3; i++)
  {
    for(int j = 0; j < 4; j++)
    {
      if(classes[i][j] > highestGrade)
      {
        highestGrade = classes[i][j];
      }

      if(classes[i][j] < lowestGrade)
      {
        lowestGrade = classes[i][j];
      }
     }
   }

   //Determines the averages of the classes
   for(int i = 0; i < 3; i++)
   {
     for(int j = 0; j < 4; j++)
     {
       rowTotal += classes[i][j];
     }
     classesAvg[i] = rowTotal / 4;
     rowTotal = 0;
   }

   //Determines average of all 3 classes
   for(int i = 0; i < 3; i++)
   {
     for(int j = 0; j < 4; j++)
     {
       total += classes[i][j];
     }
   }
   classAvg = total / 12;

   //Prints out the final calculated values
   printf("Class 1 average: %0.2lf\n", classesAvg[0]);
   printf("Class 2 average: %0.2lf\n", classesAvg[1]);
   printf("Class 3 average: %0.2lf\n", classesAvg[2]);

   printf("Overall average: %0.2lf\n", classAvg);

   printf("Highest grade: %0.2lf\n", highestGrade);
   printf("Lowest grade: %0.2lf\n", lowestGrade);

  return 0;
}
