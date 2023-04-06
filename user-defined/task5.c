#include<stdio.h>
struct  student{
    char *name;
    int roll;
    float marks;
    int age;
};
int main()
{
    struct student s1,s,age;
    printf("Enter information of first student:-\n");
    printf("Enter name: ");
    scanf("%s",&s.name);
    printf("Enter roll: ");
    scanf("%d",&s.roll);
    printf("Enter marks: ");
    scanf("%f",&s.marks);
    printf("Enter age: ");
    scanf("%d",&s.age);
    printf("Enter the information of second student:-\n");
    printf("Enter name: ");
    scanf("%s",&s1.name);
    printf("Enter roll: ");
    scanf("%d",&s1.roll);
    printf("Enter marks: ");
    scanf("%f",&s1.marks);
    printf("Enter age: ");
    scanf("%d",&s1.age);
    if(s.marks>s1.marks)
    {
        printf("\nMarks of first student is more");
    }
    else
    {
        printf("\nMarks of second student is more");
    }
    return 0;
}