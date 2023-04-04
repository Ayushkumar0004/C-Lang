#include<stdio.h>
struct car{
    char *name;
    int seats;
    float price;
};
int main()
{
    struct car mycar;
    mycar.name = "Challenger";
    mycar.seats = 2;
    mycar.price = 1200000;
    printf("%s %d %f\n",mycar.name,mycar.seats,mycar.price); 
}