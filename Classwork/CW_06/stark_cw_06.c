//Jeremy Stark

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int num[2];
    double sqrNum[2];

    srand(time(NULL));

    for(int i = 0; i < 2; i++)
    {
        num[i] = 1 + rand()%(100 + 1 - 1);
    }

    for(int i = 0; i < 2; i++)
    {
        sqrNum[i] = (double)sqrt(num[i]);
    }

    printf("Random Number       Square Root\n");

    for (int i = 0; i < 2; i++)
    {
        printf("%d\t\t\t%f\n", num[i], sqrNum[i]);
    }

    return(0);
}
