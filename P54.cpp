#include<stdio.h>
#include<conio.h>
int main()
{
    int a[50];
    int i,n,m;
    printf(" enter the no of elements of array: ");
    scanf("%d",&n);
    printf("enter the elements of array A:");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);        
    }
    for ( i = 0; i < n; i++)
    {
        m=a[i]%2;
        if (m==0)
        {
            printf("\n%d is even no",a[i]);
        }
        else 
        {
            printf("\n%d is odd no",a[i]);
        }        
    }
    getch();
    return 0;
}