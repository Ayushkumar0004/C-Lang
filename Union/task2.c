#include<stdio.h>
union employee
{
    char name[20];
    int id;
    float salary;
};
int main()
{
    union employee u[100];
    int n,i;
    printf("\nEnter the value of n: ");
    scanf("%d",&n);
    fflush(stdin);
    for(i=0; i<n; i++)
    {
        printf("\nEnter name: ");
        fflush(stdin);
        gets(u[i].name);
        printf("\nEntered name is : %s",u[i].name);
        printf("\nEnter id: ");
        fflush(stdin);
        scanf("%d",&u[i].id);
        printf("Enterd id is : %d",u[i].id);
        printf("\nEnter Salary: ");
        fflush(stdin);
        scanf("%d",&u[i].salary);
        printf("\nEntered salary is : %2f",u[i].salary);
    }
    return 0;
}