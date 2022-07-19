/*
a
b b
c c c
d d d d
e e e e e
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
            printf("%c ", row + 97);
        }
        printf("\n");
    }

    return 0;
}
