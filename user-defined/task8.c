#include<stdio.h>
struct Address
{
    char Housename[25];
    char city[25];
    char Streetname[25];
};
struct Employee
{
    int ID;
    char *name;
    float Salary;
    struct Address Add;
};
int main()
{
    struct Employee E;
    printf("\n\tEnter Employee Id: ");
    scanf("%d",&E.ID);
    printf("\n\tEnter Employee Name: ");
    scanf("%s",&E.name);
    printf("\n\tEnter Employee Salary: ");
    scanf("%f",&E.Salary);
    printf("\n\tEmployee House Name: ");
    scanf("%s",&E.Add.Housename);
    printf("\n\tEmployee City: ");
    scanf("%s",&E.Add.city);
    printf("\n\tEmployee Street Name: ");
    scanf("%s",&E.Add.Streetname);
    printf("\nDetails of Employee:-");
    printf("\n\tEmployee ID: %d",E.ID);
    printf("\n\tEmployee Name: %s",E.name);
    printf("\n\tEmployee Salary: %f",E.Salary);
    printf("\n\tEmployee House No.: %s",E.Add.Housename);
    printf("\n\tEmployee City: %s",E.Add.city);
    printf("\n\tEmployee Street name: %s",E.Add.Streetname);                
}