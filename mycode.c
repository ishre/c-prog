/*
WAP to find whether the given number is prime.

my changes on new pc
*/


#include <stdio.h>

int main(void)
{

    int start;
    int end;

    printf("Enter your starting point: ");
    scanf("%d", &start);
    printf("Enter your end point: ");
    scanf("%d", &end);
    while (start < end)
    {
        for (int j = 2; j * j <= start; j++)
        {
            if (start % j != 0)
            {
                printf("%d\n", start);
            }
        }
        start++;
    }
    return 0;
}