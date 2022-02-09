#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    char a;   ///a=c ;a=r ; a=s ;a=t;
    int r,l,b,h;
    float ar;
    printf("enter a char c-circle,r-rectangle,s-squre,t-triangle:");
    scanf("%c",&a);
    switch (a)
    {
    case 'c':
        printf("enter the radii:");
        scanf("%d",&r);
        ar=3.14*(pow(r,2));
        printf("area of circle :%f",ar);
        break;
    case 'r':
        printf("enter the L and B");
        scanf("%d%d",&l,&b);
        ar=l*b;
        printf("area of rectangle :%f",ar);
        break;
    case 's':
        printf("enter the side of squre:");
        scanf("%d",&l);
        ar=pow(l,2);
        printf("area of squre :%f",ar);
        break;
    case 't':
        printf("enter the height and base:");
        scanf("%d%d",&h,&b);
        ar=(0.5)*b*h;
        printf("area of triangle:%f",ar);        
        break;
    default:
        printf("This char is not valid");
        break;
    }
    getch();
    return 0;
}