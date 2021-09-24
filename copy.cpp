#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,count=0;
    printf("enter m and n");
    scanf("%d",&n);
    for(i=1;1<=n;i++)
    {
        if (n%i==0)
        {
            count=count +1;
        }
        
    }
    if(count==2*n)
    {
        printf("amicable number %d",count);
    }
    else
    {
        printf("it not");
    }
    getch();
    return 0;
}