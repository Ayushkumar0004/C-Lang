// enter the record of 5 students dynamically
struct student
{
    int rollno;
    float CGPA;
    char *name;
};
int main()
{
    struct student s1;
    printf("enter the rollno: ");
    scanf("%d",&s1.rollno);
    printf("enter the rollno: ");
    scanf("%f",&s1.CGPA);
    printf("enter the rollno: ");
    scanf("%s",&s1.name);
    printf("%d %f %s",s1.rollno,s1.CGPA,s1.name);

    struct student s2;
    printf("enter the rollno: ");
    scanf("%d",&s2.rollno);
    printf("enter the rollno: ");
    scanf("%f",&s2.CGPA);
    printf("enter the rollno: ");
    scanf("%s",&s2.name);
    printf("%d %f %s\n",s2.rollno,s2.CGPA,s2.name);

    struct student s3;
    printf("enter the rollno: ");
    scanf("%d",&s3.rollno);
    printf("enter the Cgpa: ");
    scanf("%f",&s3.CGPA);
    printf("enter the name: ");
    scanf("%s",&s3.name);
    printf("%d %f %s",s3.rollno,s3.CGPA,s3.name);

    struct student s4;
    printf("enter the rollno: ");
    scanf("%d",&s4.rollno);
    printf("enter the Cgpa: ");
    scanf("%f",&s4.CGPA);
    printf("enter the name: ");
    scanf("%s",&s4.name);
    printf("%d %f %s",s4.rollno,s4.CGPA,s4.name);

    struct student s5;
    printf("enter the rollno: ");
    scanf("%d",&s5.rollno);
    printf("enter the Cgpa: ");
    scanf("%f",&s5.CGPA);
    printf("enter the name: ");
    scanf("%s",&s5.name);
    printf("%d %f %s",s5.rollno,s5.CGPA,s5.name);
}