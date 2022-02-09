#include <stdio.h>
#include <conio.h>
int main()
{
    int i = 1,n,s;
    printf("enter any no :");
    scanf("%d",&n);
    while (i<=10)
    {    
        s=i*n;
        printf("%d=%d*%d\n", s, i++, n);
    }
    getch();
    return 0;
}
