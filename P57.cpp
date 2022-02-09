#include<stdio.h>
#include<conio.h>
int main()
{
    int a[50];
    int i,n;
    printf(" enter the no of elements of array: ");
    scanf("%d",&n);
    printf("enter the elements of array A:");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);        
    }
    for ( i = 0; i < n; i++)
    {
       if (a[0]>a[i])
       {
           a[0]=a[i];
       } 
       else if (a[n-1]<a[i])
       {
           a[n-1]=a[i];
       }
          
    }
    printf("\n%d is smalest  no. on array",a[0]);
    printf("\n%d is largest no on array",a[n-1]);
    getch();
    return 0;
}