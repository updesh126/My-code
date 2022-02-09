#include<stdio.h>
#include<conio.h>
int main()
{
float a,c,i,f,m;
printf("enter distance in km");
scanf("%f",&a);
c=a*(100000);
m=a*(1000);
i=a*39370.079;
f=i*0.0833;
printf("cm=%f\nm=%f\nin=%f\nft=%f",c,m,i,f);
getch();
return 0;
}