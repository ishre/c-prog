#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char armstrong[10];
    printf("Enter number to check if armstrong's: ");
    scanf("%s", armstrong);

    int lengthOfString = strlen(armstrong);
    int n = lengthOfString-1;
    int sumOfArmstrong = 0;
    
    while(n >= 0){
        sumOfArmstrong+=pow(( armstrong[n] - '0'),lengthOfString);
        n--;
    }
    printf("%d", sumOfArmstrong);
    return 0;
}



