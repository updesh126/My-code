#include<stdio.h>
int sum(int a,int b);
int main()
{
    int a,b,c;
    printf("enter the a,b");
    scanf("%d%d",&a,&b);
    c=sum(a,b);
    printf("%d",c);
    return 0;
}
  int sum(int a,int b)
  {
      int c;
      c=a+b;
      return c;
  }