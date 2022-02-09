#include <stdio.h> 
int range(int a); 
int main() 
{
    int a;
    printf("enter any no ");
    scanf("%d", &a);
    range(a);
    return 0;
}
int range(int a) 
{
    int a1=0,i=0,n, a2=1;

    while (i<=a) 
   {
   if(i <= 1)
   {
  	n = i;
   }
   else
   {
	n = a1 + a2;
	a1= a2;
	a2= n;
   }
   printf("%d \t", n);
   i++;  

        
    }
    return 0;
}