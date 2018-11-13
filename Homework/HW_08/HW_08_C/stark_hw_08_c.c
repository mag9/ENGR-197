/*
HW_08_C
Jeremy Stark
11/12/2018
A program that reads data from a file, determines the
total distance convered based on the read data, and
determines the pace of the movement in mm:ss format.
That data is then printed out to a new output file.
*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
  //Variables
  FILE *fpin;
  FILE *fpout;
  double totalDistance = 0;
  int datapoints;
  int totalTime, minutes, seconds, pace;

  //Assigns file to fpin
  fpin = fopen("/Users/jeremystark/Documents/GitHub/ENGR-197/Homework/HW_08/HW_08_C/rundata.txt", "r");
  fpout = fopen("/Users/jeremystark/Documents/GitHub/ENGR-197/Homework/HW_08/HW_08_C/output.txt", "w");

  //If fpin didn't read the file correctly, it will print an error and exit
  if (fpin == NULL)
  {
    printf("Error Opening File\n");

    exit(100);
  }

  //Scan in the first line of the file to see amount of data points.
  fscanf(fpin, "%d", &datapoints);

  //x and y position variables
  double xPos[datapoints];
  double yPos[datapoints];

  //Input data to arrays
  for (int i = 1; i <= datapoints; i++)
  {
    fscanf(fpin, "%lf %lf", &xPos[i-1], &yPos[i-1]);
  }

  //Solve for distance
  for(int i = 0; i < datapoints; i++)
  {
    double tempDist;

    tempDist = sqrt(pow(xPos[i+1] - xPos[i], 2) + pow(yPos[i+1] - yPos[i], 2));

    totalDistance += tempDist;

    totalTime += 4;
  }

  //Converts totalDistance from feet to miles
  totalDistance = totalDistance / 5280;

  //Calculates the pace
  /**
    Pace gets truncated because it is an int but
      the value will be truncated anyways when converted into mm:ss
      format, so it is easier to just truncate the value from the beginning
      instead of having it truncated later down the road after doing the
      more complex code to keep it as a double.
  **/
  pace = totalTime / totalDistance;

  //Calculates minutes and seconds format for pace
  minutes = (pace % 3600) / 60;
  seconds = pace % 60;

  //Prints out final output
  fprintf(fpout, "The runner ran total distance of: %0.2lf miles\n", totalDistance);
  fprintf(fpout, "At a pace of %2d:%2d per mile\n", minutes, seconds);

  return 0;
}
