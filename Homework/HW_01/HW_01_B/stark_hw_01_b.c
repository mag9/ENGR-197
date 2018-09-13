/*
HW_01_B
Jeremy Stark
09/13/2018
Prompts a user to enter an amount of money between $0 and $1.
Determine the minimum number of coins(quarters, dimes, nickels, and
pennies) that would total that amount.
*/

#include <stdio.h>

int main(void)
{
	float amount;
	int quarters;
	int dimes;
	int nickels;
	int pennies;


	printf("Please enter an amount of money between $0 and $1\n");
	scanf("%f", &amount);

	while(amount <= 0 || amount >= 1)
	{
		printf("Ammount entered is not within specified bounds. Please enter again.\n");
		scanf("%f", &amount);
	}

	amount = amount * 100;

	quarters = (int)amount/25;
    dimes = (int)amount%25/10;
    nickels = (int)amount%25%10/5;
    pennies = (int)amount%25%10%5;


	printf("%0.2f cents should be returned as %d Quarters, %d Dime, %d Nickels, and %d Pennies\n", amount, quarters, dimes, nickels, pennies);

    return(0);
}
