#include<stdio.h>
#include<conio.h>
int main()
{
    int A[50],n,i,element,mid,LB,UB;
    printf("Enter the no of element");
    scanf("%d",&n);
    printf("enter element of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Enter the element for search");
    scanf("%d",&element);
    LB=0;
    UB=n-1;
    mid=(LB-UB)/2;
    while(A[mid]!=element&&LB<=UB)
    {
        if(A[mid]<element)
        {
            LB=mid+1;
        }
        else
        {
            UB=mid-1;
        }
        mid=(LB+UB)/2;
    }
    if(A[mid]==element)
    {
        printf("element found");
    }
    else{
        printf("not found");
    }
    getch();
    return 0;
}