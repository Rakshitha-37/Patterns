/*
1 
2 1 
3 2 1 
4 3 2 1 
5 4 3 2 1 
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
                printf("%c ", 97);
            }
            else
            {
                printf("%c ", 65);
            }
        }
        printf("\n");
    }

    return 0;
}
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
                printf("%c ", 97);
            }
            else
            {
                printf("%c ", 65);
            }
        }
        printf("\n");
    }

    return 0;
}

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
            printf("%d ", row-col+1);
        }
        printf("\n");
    }

    return 0;
}

