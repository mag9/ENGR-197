/*
CW_10
Jeremy Stark
09/25/2018
A program that will draw a 10x4 rectangle to the screen using *
*/

#include <stdio.h>

//Draws the top and bottom of the rectangle.
void drawTopBottom()
{
	printf("**********\n");
}

//Draws the sides of the rectangle.
void drawSide()
{
	printf("*        *\n");
}

int main(void)
{
	drawTopBottom();
	drawSide();
	drawSide();
	drawTopBottom();

	return(0);
}
