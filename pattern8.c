/*
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5
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
            printf("%d ", col+1);
        }
        printf("\n");
    }

    return 0;
}

