#include<stdio.h>
#include<conio.h>
int main()
{ 
    int i=0,a,c;
    printf("enter any no");
    scanf("%d",&a);
   
    while (i<10)
    {
        i=i+1;
        c=a*i;
        printf("%d*%d=%d\n",a,i,c);
    }
    getch();
    return 0;
}