#include<stdio.h>
int check();
int a=10;
int main()
{
    int a=20;
    {
        int a;
        printf("%d\n",a);
    }
    {
        a=a+10;
    }
    printf("%d\n",a);
    check();
    return 0;

}
int check()
{
    printf("%d\n",a);
    return 0;
}