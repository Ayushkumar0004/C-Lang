#include<stdio.h>
struct car
{
    char *name;
    int seats;
    float price;
};
int main()
{
    struct car mycar = {"Renault",2,500000};
    struct car *mycarPtr;
    mycarPtr = &mycar;
    printf("%s %d %f \n%s %d %f \n%s %d %f\n",mycar.name,mycar.seats,mycar.price,mycarPtr->name,mycarPtr->seats,mycarPtr->price,(*mycarPtr).name,(*mycarPtr).seats,(*mycarPtr).price);
}