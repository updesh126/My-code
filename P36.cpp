#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n;
    printf("enter the row or coloumn");
    scanf("%d",&n);
    for ( i = 0; i <= n; i++)
    {
        for ( j = 0; j < i; j++)
        {

           printf("%c",(65+j));


        }
        printf("\n");
    }
    getch();
    return 0;

}
