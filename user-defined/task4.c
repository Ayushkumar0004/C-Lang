#include<stdio.h>
struct  student{
    char *name;
    int roll;
    float marks;
};
int main()
{
    struct student s1,s;
    printf("Enter information:\n");
    printf("Enter name: ");
    scanf("%s",&s.name);
    printf("Enter roll: ");
    scanf("%d",&s.roll);
    printf("Enter marks: ");
    scanf("%f",&s.marks);
    s1 = s;
    printf("Displaying Information: \n");
    printf("Name: ");
    puts(s1.name);
    printf("Roll No: %d\n",s1.roll);
    printf("Marks: %1.f\n",s1.marks);
    return 0;
}