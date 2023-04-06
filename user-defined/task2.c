#include<stdio.h>
struct student{
    int rollno;
    float CGPA;
    char *name;
};
int main()
{
    struct student stRecord;
    printf("enter the rollno: ");
    scanf("%d",&stRecord.rollno);
    stRecord.CGPA = 8.9;
    stRecord.name = "AYUSH";
    printf("%d %f %s\n",stRecord.rollno,stRecord.CGPA,stRecord.name);
}