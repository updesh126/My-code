#include <stdio.h>
#include <conio.h>
int main()
{

    int i, j, k, m;
    for (i = 1; i <= 4; i++)
    {
        for (j = 4; j >= i; j--)
            printf(" ");
        for (k = 1; k <= i; k++)
            printf("*");
        
        for (m = 1; m < i; m++)
            printf("*");
        printf("\n");
 
    }
    getch();
    return 0;
}