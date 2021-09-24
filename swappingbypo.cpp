#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y,*a,*b,temp;
    printf("enter any two no");
    scanf("%d%d",&x,&y);
    a=&x;
    b=&y;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("after swapping x=%d and y=%d",*a,*b);
    getch();
    return 0;
}