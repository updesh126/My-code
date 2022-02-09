#include <stdio.h>
#include <conio.h>
int swap(int *p,int *q);
int main()
{
    int a, b;
    printf("Enter the value of a and b");
    scanf("%d%d", &a, &b);
    swap(&a,&b);
    getch();
    return 0;
}
int swap(int *p,int *q)
{
    int c;
    c = ((*p) ^ (*q));

    (*q)= ((*q) ^ c);
    (*p) = ((*p) ^ c);
    printf("\nfinal value of a=%d and b=%d", (*p), (*q));
    return 0;
}