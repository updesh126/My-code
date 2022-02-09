#include <stdio.h> //wpt type 3 funtion with argu. and return value
int sum(int a);    //int a  decl. 0r arug.  data type use
int main()         //calling func
{
    int a, b = 0;
    printf("enter any no ");
    scanf("%d", &a);
    b = sum(a); //called func  b=s
    // printf("sum of digit is %d", b);
    return 0;
}
int sum(int a) ///user d f
{
    int rem, s = 0;

    while (a > 0) //if ,while do for swi
    {
        rem = a % 10; //123
        s = s + rem;  ///1+2+3=6 s=6
        a = a / 10;
    }
    printf("%d\n", s);
    return 0;
}