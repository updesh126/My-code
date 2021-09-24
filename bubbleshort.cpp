#include<stdio.h>
#include<conio.h>
int main()
{
    int A[50],n,i,j,swap;
    printf("Enter number of elements\n");
    scanf("%d",&n);
    printf("Enter %d integers\n",n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&A[i]);
    }
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n-i-1; j++)
        {
            if (A[j]>A[j+1])
            {
                swap=A[j];
                A[j]=A[j+1];
                A[j+1]=swap;
            }
            
        }
        
    }
    printf("sorted list in ascending order:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",A[i]);

    }
    return 0;
}