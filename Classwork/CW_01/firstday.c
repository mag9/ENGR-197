#include <stdio.h>

int main(void)
{
    double area, length, height;
    
    printf("Please enter the length of the right triangle.\n");
    scanf("%lf", &length);
    printf("Please enter the height of the right triangle.\n");
    scanf("%lf", &height);
    
    area = (length * height)/2;
    
    printf("The area of the right triangle is %10.2lf\n", area);
    
    return(0);
}

