/*
CW_14
Jeremy Stark
10/18/2018
a program that will prompt a user to enter test
grades for students in a class and calculate the class
average on the exam and the number of students
who have withdrawn from the class.
*/
//Defined our sentinel variable as -99
#define SENTINEL -99
#include <stdio.h>

//Main method
int main(void)
{
  //Variables used within the program
  double enrolledTotal;
  double withdrawnTotal;
  double gradeSum;
  double gradeAverage;

  //StudentGrade is an int because it is being used to compare against SENTITEL
  //A double could cause issues when comparing values.
  int studentGrade;

  //Checks if the studentGrade is equal to -99. While run while it is not -99
  while(studentGrade != SENTINEL)
  {
    //Prompts user to enter test grade and scans in grade.
    printf("Please enter test grade: \n");
    scanf("%d", &studentGrade);

    //Checks if the grade is 0 or the sentiel number.
    if(studentGrade != 0 && studentGrade != SENTINEL)
    {
      //adds to gradeSum and increases enrolled student count.
      gradeSum = gradeSum + studentGrade;
      enrolledTotal++;
    }

    //If the student's grade is 0, then they are withdrawn so we increase the withdrawn total.
    if(studentGrade == 0)
    {
      withdrawnTotal++;
    }
  }

  //calculate the average of the class.
  gradeAverage = gradeSum / enrolledTotal;

  //Print out all of the data.
  printf("Average Grade: %0.2lf\nEnrolled: %0.2lf\nWithdrawn: %0.2lf\n", gradeAverage, enrolledTotal, withdrawnTotal);


  return 0;
}
