#include <stdio.h>
#include <conio.h>
int main()
{
    int i = 1, j = 1;
    char kl='a';
    for (i = 1; i <= 5; i++)
    {
    
        for (j = 1; j <=i;j++)
        {   
            printf("%c",kl);
            kl++;
        }
        kl='a';
        printf("\n");
    }
    getch();
    return 0;
}