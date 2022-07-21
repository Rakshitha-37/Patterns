/*
1 
b b 
3 3 3 
d d d d 
5 5 5 5 5 
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
            if((row % 2) == 0)
            {
                printf("%d ", row + 1);
            }
            else
            {
                printf("%c ", row + 97);
            }
        }
        printf("\n");
    }

    return 0;
}

