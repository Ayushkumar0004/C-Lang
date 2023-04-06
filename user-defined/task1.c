// waap to ask the user to enter the record of one student using struct task1
#include<stdio.h>
struct student{
    int rollno;
    float CGPA;
    char *name;
};
int main()
{
    struct student stRecord;
    stRecord.rollno = 68;
    stRecord.CGPA = 8.9;
    stRecord.name = "AYUSH";
    printf("%d %f %s\n",stRecord.rollno,stRecord.CGPA,stRecord.name);
}