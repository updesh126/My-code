#include<stdio.h>
#include<conio.h>
int main()
{
    int A[5],i;
    printf("enter any 5 no's");
    for (i=0; i<5; i++)
    {
        scanf("%d",&A[i]);

    }
    for (i=0; i<5;i++)
    {
        printf("no is %d\t",A[i]);
    }
    getch();
    
    return 0;
}