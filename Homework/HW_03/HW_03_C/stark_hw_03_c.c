/*
HW_03_C
Jeremy Stark
09/28/2018
A program which calculate a student’s grade
based on three test scores, using specific guidelines
*/

#include <stdio.h>

int main(void)
{
	//Variables
	double exam1, exam2, exam3, average;
	char grade;

	//Prompts user to enter exam grades.
	printf("Enter grade for exam 1:\n");
	scanf("%lf", &exam1);

	printf("Enter grade for exam 2:\n");
	scanf("%lf", &exam2);

	printf("Enter grade for exam 3:\n");
	scanf("%lf", &exam3);

	//Calculate average value of all 3 exams.
	average = (exam1 + exam2 + exam3) / 3;

	//Massive if-else statement that determines grade
	//based on scale determined by professor.
	if(average >= 90)
	{
		grade = 'A';
	}
	else if (average >= 77 && average < 90)
	{
		if(exam3 > 90)
		{
			grade = 'A';
		}
		else
		{
			grade = 'B';
		}
	}
	else if (average >= 50 && average < 77)
	{
		if(((exam2 + exam3)/2) > 75)
		{
			grade = 'C';
		}
		else
		{
			grade = 'D';
		}
	}
	else if (average < 50)
	{
		grade = 'F';
	}

	//Prints final grade.
	printf("Grade: %c\n", grade);

	return(0);
}
