#include <stdio.h>
struct person
{
    char name[20];
    int age;
    char add[50];
};
int main()
{
    struct person x;
    printf("enter name age address of person");
    scanf("%s%d%s",&x.name,&x.age,&x.add);
    printf("\n name=%s\n",x.name);
    printf("\n age=%d\n",x.age);
    printf("\n address=%s\n",x.add);
    return 0;
}