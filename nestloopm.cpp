#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1,j=1;
    for ( i = 1; i <=5; i++)
    {
        for ( j = 1; j <=5; j++)
        {
            printf("i=%dj=%d\t",i,j);
        }
        printf("\n");
    }
    getch();
    return 0;
}