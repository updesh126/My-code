#include <stdio.h>
#include <conio.h>
#include<math.h>
int main()
{
    int n,sum=0,rem,p;
    printf("enter any no ");
    scanf("%d", &n);
    p=n;
    while (n>0)
    {
        rem =n%10;        ///123%10=3      12%10=2           1%10=1 
        rem=pow(rem,3);      ////3*3*3=27      2*2*2=8           1*1*1=1
        sum=sum+rem;         ////sum=0+27=27   sum=27+8=35      sum=35+1=36
        n = n/10;
    }
    if (sum==p)
    {
        printf("%d is a armstong", sum);
    }
    else
    {
        printf("%d is not armstong",sum);
    }
    
    
    getch();
    return 0;
}