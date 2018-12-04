/*
CW_24
Jeremy Stark
12/04/2018
a program that will opens a txt file, reads data from the file,
finds the average, determine improvement in grades, and print out
the calculations.
*/
#include <stdio.h>

//readArray method
//Finds the average of each exam, and determines if the student's grade improved.
void readArray(double exam1[], double exam2[], double examavg[], char improve[])
{
  int arrayLimit = sizeof(exam1);

  //Loop that finds the average of each exam, and determines if the student's grade improved.
  for(int i = 0; i < arrayLimit; i++)
  {
    examavg[i] = (exam1[i] + exam2[i]) / 2;

    if(exam2[i] > exam1[i])
    {
      improve[i] = 'Y';
    }
    else
    {
      improve[i] = 'N';
    }
  }

}

//Main method
int main(void)
{
  //File variable and numvalues
  FILE *inputfile;
  int numvalues;

  //Read the file
  inputfile = fopen("/Users/jeremystark/Documents/GitHub/ENGR-197/Classwork/CW_24/arraydata.txt", "r");

  //If the file is empty, end the program.
  if (inputfile == NULL)
  {
    printf("Error opening file");
    exit(100);
  }

  //Read in the first line.
  fscanf(inputfile, "%d", &numvalues);

  //Exam array variables
  double exam1[numvalues];
  double exam2[numvalues];
  double examavg[numvalues];
  char improve[numvalues];

  //Reading the array data from the file
  for (int i = 0; i < numvalues; i++)
  {
    fscanf(inputfile, "%lf %lf", &exam1[i], &exam2[i]);
  }

  //call the readArray function
  readArray(exam1, exam2, examavg, improve);

  //Print out the final information
  for(int i = 0; i < numvalues; i++)
  {
    printf("Student #%d Exam Average: %0.2lf\n", i+1, examavg[i]);
  }

  //Close the file
  fclose(inputfile);

  return 0;
}
