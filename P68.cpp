#include <stdio.h>
struct person
{
    char name[20];
    int age;
    char add[50];
    char dis[20];
    int lan;
    int pin;
};
int main()
{
    struct person x,y;
    printf("enter name age address of person");
    scanf("%s%d%s",&x.name,&x.age,&x.add);
    printf("\n name=%s\n",x.name);
    printf("\n age=%d\n",x.age);
    printf("\n address=%s\n",x.add);
    printf("enter LAN noi,District name , pin code");
    scanf("%d%s%d",&y.lan,&y.dis,&y.pin);
    printf("\n LAN No.=%d\n",y.lan);
    printf("\n District=%s\n",y.dis);
    printf("\n Pin CODE=%d\n",y.pin);
    return 0;
}