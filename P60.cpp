#include <stdio.h>
#include <conio.h>
int main()
{
    int A[50][50], B[50][50], multi[50][50], n, m, i, j, sum = 0, k;
    printf("enter the row  and colunm of matries");
    scanf("%d%d", &m, &n);
    printf("enter the element of matrix 1:");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("enter the elements of matrix 2:");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    printf("Now M1+M2:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            for (k = 0; k < m; k++)
            {
                sum = sum + A[i][k] * B[k][j];
            }
            multi[i][j] = sum;
            sum = 0;
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d\t", multi[i][j]);
        }
        printf("\n");
    }

    getch();

    return 0;
}