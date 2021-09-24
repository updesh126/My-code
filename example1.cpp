#include<stdio.h>
int main()
{
    int a;
    printf("enter any on ");
    scanf("%d",&a);
    if (a>75)
    {
        printf("%d is 1st division",a);
    }
    else
    {
        printf("you dont have 1st division");
    }
    
    return 0;
}