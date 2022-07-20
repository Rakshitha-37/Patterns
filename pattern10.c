/*
a
A A
a a a 
A A A A 
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
