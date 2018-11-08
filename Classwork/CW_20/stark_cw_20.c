#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  FILE *fpin;
  FILE *fpout;
  double exam;
  double lowest = 100;
  double heighest = 0;
  double average = 0;
  double total = 0;
  int datapoints;

  fpin = fopen("/Users/jeremystark/Documents/GitHub/ENGR-197/Classwork/CW_20/cwdatafile.txt", "r");
  fpout = fopen("/Users/jeremystark/Documents/GitHub/ENGR-197/Classwork/CW_20/output.txt", "w");

  if (fpin == NULL)
  {
    printf("Error Opening File\n");

    exit(100);
  }

  fscanf(fpin, "%d", &datapoints);

  for (int i = 1; i <= datapoints; i++)
  {
    fscanf(fpin, "%lf", &exam);
    total += exam;

    if(exam > heighest)
    {
      heighest = exam;
    }

    if(exam < lowest)
    {
      lowest = exam;
    }
  }

  average = total / datapoints;

  fprintf(fpout, "Lowest score: %0.2lf\n", lowest);
  fprintf(fpout, "Heighest score: %0.2lf\n", heighest);
  fprintf(fpout, "Average score: %0.2lf\n", average);

  fclose(fpin);
  fclose(fpout);

  return 0;
}
