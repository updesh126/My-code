#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n;
    printf("enter the row or coloumn");
    scanf("%d",&n);
    for ( i = n; i >= 1; i--)
    {
        for ( j = n; j >= 1; j--)
        {
            if (j>i)
            {
                printf(" ");
            }
            else if(i>=j)
            {
                printf("%c",(64+i));

            }
            
            
        }
        printf("\n");
    }
    getch();
    return 0;

}


