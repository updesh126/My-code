#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n,k;
    printf("enter the row or coloumn");
    scanf("%d",&n);
    for ( i = 1; i<=n; i++)
    {
        for ( j = 1; j<=n-i; j++)
        {
            printf(" ");    
        }
        for ( k=1; k<=(2*i-1); k++)
        {
           printf("%c",(64+k));   
        }
           
        printf("\n");
    }
    
    getch();
    return 0;

}


