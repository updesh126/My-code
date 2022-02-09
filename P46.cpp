#include <stdio.h>
int pam(int a);
int main()
{
    int a, count=0;
    printf("enter any no ");
    scanf("%d", &a);
    count= pam(a);
    if (count!=0)
    {
        printf("it's a prime no ");
    }
    else
    {
        printf("it's not prime no ");
    }
    
    return 0;
}
int pam(int a)
{
   int count=0,i,c=0;
    for(i=1;i<=a;i++)
    {
    
        c=a%2;
        if (c!=0)
        {
            count=count+1;
        }
        else if(a==2)
        {
            count=count+1;

        }
    }
   
    return count;
}