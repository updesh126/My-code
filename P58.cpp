#include<stdio.h>
#include<conio.h>
int main()
{
    int A[50][50],B[50][50],n,i,j,sum=0;
    printf("enter the row  or colunm of matries");
    scanf("%d",&n);
    printf("enter the element of matrix 1:");
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
        }
        
    }
      for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("%d",A[i][j]);
        }
        printf("\n");
       
    }
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            sum=sum+A[i][j];
            
        }
        
    }
    printf("sum of all elements are %d",sum);
    
  
    getch();
    return 0;
}