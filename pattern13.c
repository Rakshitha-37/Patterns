/*
a 
a b 
a b c 
a b c d 
a b c d e 
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
            printf("%c ", col + 97);
        }
        printf("\n");
    }

    return 0;
}
