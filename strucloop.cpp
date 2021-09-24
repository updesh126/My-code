#include <stdio.h>
struct student {
    char firstName[50];
    int roll;
    float marks;
} s[10];

int main() {
    int i;
    printf("Enter information of students:\n");

    // storing information
    for (i = 0; i < 5; ++i) {
        printf("Enter first name: ");
        scanf("%s", s[i].firstName);
        printf("\nFor roll number\n");
        scanf("%d",&s[i].roll);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }
    printf("Displaying Information:\n\n");

    // displaying information
    for (i = 0; i < 5; ++i) {
        printf("First name: ");
        puts(s[i].firstName);
        printf("\nRoll number: %d\n",s[i].roll);

        printf("Marks: %.1f", s[i].marks);
        printf("\n");
    }
    return 0;
}
