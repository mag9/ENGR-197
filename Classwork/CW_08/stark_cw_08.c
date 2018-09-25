/*
CW_08
Jeremy Stark
09/18/2018
Prompt a user to enter someone's age then
print a statement to the screen depending on the person's age.
*/

#include <stdio.h>

int main(void)
{
	int age;

	printf("Please enter your age: \n");
	scanf("%d", &age);

	if(age >= 50)
	{
		printf("You are over 50\n");
	}
	else if(age >= 40 && age < 50)
	{
		printf("You are in your forties\n");
	}
	else if(age >= 30 && age < 40)
	{
		printf("You are in your thirties\n");
	}
	else
	{
		printf("You are really young!\n");
	}

	return(0);
}
