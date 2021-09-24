#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i=0,s;
    printf("enter any no:");
    scanf("%d",&n);

    for (i=1; i <= 10; i++)
    {   s=n*i;
        printf("%d=%d*%d\n",s,i,n);

    }
    return 0;
}