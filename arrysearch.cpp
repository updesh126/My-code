#include<stdio.h>
int main()
{
    int ar[50],a,i;

    printf("enter the elements of 1d arry");
    for (i = 0; i < 5; i++)
    {
        printf("enter ar[%d]",i);
        scanf("%d",&ar[i]);
    }
    printf("enter the you want to find: ");
    scanf("%d",&a);
    
    
    for ( i = 0; i < 5; i++)
    {

    
     
       if (a==ar[i])
        {
        
            printf("%d is a %d element",a,i);
            
        }
            
    }
    
    return 0;   

}