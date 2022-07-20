/*
e 
d d 
c c c 
b b b b 
a a a a a 
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
            printf("%c ", num + 96 - row);
        }
        printf("\n");
    }

    return 0;
}


