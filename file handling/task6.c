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
    fptr = fopen("d.txt","w");
    printf("Enter the roll no: ");
    scanf("%d",&st.rollno);
    printf("Enter the name: ");
    scanf("%s",st.name);
    fwrite(&st,sizeof(st),1,fptr);
    fclose(fptr);
}