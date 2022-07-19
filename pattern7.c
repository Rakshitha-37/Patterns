/*
0
2 4
6 8 10
12 14 16 18
20 22 24 26 28
*/

#include <stdio.h>

int main()
{
    int num, num1 = 0;
    printf("Enter number: ");
    scanf("%d", &num);
    for(int row = 0;row < num;row++)
    {
        for(int col = 0;col <= row;col++)
        {
            printf("%d ", num1);
            num1 = num1 + 2;
        }
        printf("\n");
    }

    return 0;
}

