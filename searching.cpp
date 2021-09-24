#include<stdio.h>
#include<conio.h>
int main()
{
    int A[50],n,i,element,flag;
    printf("enter the size of sring:");
    scanf("%d",&n);
    printf("Enter the elemnts of arry");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Enter the elements for search");
    scanf("%d",&element);
    for ( i = 0; i < n; i++)
    {
        if(A[i]==element)
        {
            flag=0;
            break;
        }
    }
    if (flag==0)
    {
        printf("element found");
    }
    else {
        printf("element not found");
    }
    getch();
    return 0;
}