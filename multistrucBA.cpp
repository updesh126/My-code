#include <stdio.h>
struct author
{
    char name[20];
    int age;
};
struct address
{
    char areaname[15];
    int lane_no;
    char distt[20];
};

int main()
{
    struct author x;
    struct address y;
    printf("enter author's name ,age,areaname,lane no,and disstt\n ");
    scanf("%s%d%s%d%s",&x.name,&x.age,&y.areaname,&y.lane_no,&y.distt);
    printf("\n author's name :%s\n age:%d\n adress:%s,%d,%s ",x.name,x.age,y.areaname,y.lane_no,y.distt);
    return 0;

}
