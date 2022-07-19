/*
5
4 4
3 3 3
2 2 2 2
1 1 1 1 1
*/

#include <stdio.h>

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    for(int row = 0;row < num;row++)
    {
        for(int col = 0;col <= row;col++)
        {
            printf("%d ", num - row);
        }
        printf("\n");
    }

    return 0;
}
