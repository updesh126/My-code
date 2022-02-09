#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n;
    printf("enter the row and coloumn");
    scanf("%d",&n);       ///n=5 m=5
    for ( i = 0; i <= n; i++)
    {
        for ( j = 0; j <= n; j++)
        {
            // printf("*");
            if (i<=j)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }

        }
        printf("\n");
    }
    getch();
    return 0;

}
