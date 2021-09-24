#include<stdio.h>
int fact(int n);
int fa=1;
int main()
{
    int n;
    printf("enter the n");
    scanf("%d",n);
    fa=fa(n);
    printf("%d",fa);
    return 0;

}
int fact(int n)
{
    if(n>0)
    {
        fa=fa*n;
        n=n-1;
        fa=fact(n)
    }
    return (fa);
}s