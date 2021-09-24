#include<stdio.h>
void swap(int *a,int *b);
int main()
{
    int a,b;
    printf("enter any two no..");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    return 0;
}
void swap(int *p,int *q)
{
    int s;
    s=(*p);
    (*p)=(*q);
    (*q)=s;
    printf("swaping of no is a=%d b=%d",(*p),(*q));
}