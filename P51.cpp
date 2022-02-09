#include <stdio.h>
#include <conio.h>
int feb(int n);
int main()
{
    int n,a,i;
    printf("enter the number of elements: ");
    scanf("%d",&n);
  
    feb(n);
    for ( i = 0; i < n; i++)
    { 
        printf("%d",feb(i));        
    }
    getch();
    return 0;
}
int feb(int n)
{
    
    if (n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    return feb(n-1)+feb(n-2);
      
}