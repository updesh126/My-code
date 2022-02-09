#include<stdio.h>
#include<conio.h>
int main()
{
    int a[50],b[50],c[50];
    int i,n;
    printf(" enter the no of elements of both  array: ");
    scanf("%d",&n);
    printf("enter the elements of array A:");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);        
    }
    printf("enter the elements of array B:");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&b[i]);        
    }
    printf("NOW, the sum of both array A and B: ");
    for ( i = 0; i < n; i++)
    {
        c[i]=a[i]+b[i];       
        printf("\t%d\t",c[i]);
    }
    getch();
    return 0;

    
}