#include <stdio.h>
#include <conio.h>
int main()
{
    int A[3][3],i,j;
    printf("enter any 5 no's");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("\nenter the value of element  [A%d%d]:-\t",i,j);
            scanf("%d",&A[i][j]);
        }
        
    }
    for(i=0;i<3;i++)
    {

        for (j=0;j<3;j++)
        {
            printf("%d\n",A[i][j]);
        }
        printf("\n");
    }
    getch();

    return 0;
}