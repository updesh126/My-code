#include<stdio.h>
#include<conio.h>
int main()
{
    int A[50][50],m,n,i,j;
    printf("enter the raw and coloumn of matrix");
    scanf("%d%d",&m,&n);
    printf("enter the elements of matrix\n");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d",&A[i][j]);
        }
        
    }
    printf("\n the matrix is:\n");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%d",A[i][j]);
        }
        printf("\n");
    }
    getch();
    return 0;

}