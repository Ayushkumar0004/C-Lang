#include<conio.h>
#include<stdio.h>
struct student{
    int rollno;
    char name[50];
};
int main()
{
    struct student st;
    FILE *fptr;
    fptr = fopen("d.txt","r");
    fread(&st,sizeof(st),1,fptr);
    printf("Roll no is %d",st.rollno);
    printf("name is is %s",st.name);
    fclose(fptr);
    getch;
}