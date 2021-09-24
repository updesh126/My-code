#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n,a=1;
    printf("enter the row or coloumn");
    scanf("%d",&n);
    for ( i = 0; i <= n; i++)
    {
        for ( j = 0; j < i; j++)
        {

           printf("%d",(a++));


        }
        printf("\n");
    }
    getch();
    return 0;

}

