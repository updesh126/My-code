#include<stdio.h>
#include<conio.h>
int swap(int*a,int*b);
int main()
{
    int a,b;
    printf("Enter the a,b");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    getch();
    return 0;
}
int swap(int*p,int*q)
{
    (*p)=(*p)+(*q);
    (*q)=(*p)-(*q);
    (*p)=(*p)-(*q);
    printf("%d%d",(*p),(*q));
    return 0;
}