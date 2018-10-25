/*
HW_05_B
Jeremy Stark
10/25/2018
A program that calculate the arithmetic mean,
the geometric mean, and the harmonic mean
for a set of non-zero numbers.
*/
#define SENTINAL -99

#include <stdio.h>

//Main Method
int main(void)
{
  //Variables
  double num;
  double arithPartial;
  double geomPartial = 1;
  double harmPartial;
  double arithmetic;
  double geometric;
  double harmonic;
  double n;

  //Prompts users to enter numbers between 0 and 10, and -99 when finished.
  printf("Please enter numbers between 0 and 10. Enter -99 when finished: \n");

  /*
    While loop for taking input

    Will run while num entered is not -99
  */
  while(num != SENTINAL)
  {
    scanf("%lf", &num);

    //Will only run the methods for calculating means if num is not -99.
    if(num != SENTINAL)
    {
      n++;

      //Calculates the partial sums used within the mean calculations.
      arithPartial = arithPartial + num;
      geomPartial = geomPartial * num;
      harmPartial = harmPartial + (1/num);
    }
  }

  //Calculates the final mean values.
  arithmetic = arithPartial / n;
  geometric = pow(geomPartial, 1/n);
  harmonic = n / harmPartial;

  //Prints out the final mean values.
  printf("Arithmetic: %0.3lf\nGeometric: %0.3lf\nHarmonic: %0.3lf\n", arithmetic, geometric, harmonic);

  return 0;
}
