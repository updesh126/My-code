#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    printf("pattern is ........\n");
    for ( i = 1; i <=5; i++)
    {
        for ( j = 1; j <=5; j++)
        { 
            if ((i+j)==(4))
            {
                printf(" * ");
            }
            else if((i+j)==(6)&&(i!=5)&&(i!=1))
            {
                printf(" * ");
            }
            else if ((i+j)==(8))
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
                        
        }
        printf("\n");
    }
    getch();
    return 0;

}


