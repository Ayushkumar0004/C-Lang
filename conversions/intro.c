#include<stdio.h>
// int main()
// {
//     float average, total;
//     printf("enter the value of total in float: ");
//     scanf("%f",&total);
//     int counter;
//     printf("enter the value of counter in integer: ");
//     scanf("%d",&counter);
//     average = total/(float)counter;
//     printf("The average value is = %f",average);
// }
int main()
{
    int average, total;
    printf("enter the value of total: ");
    scanf("%d",&total);
    float counter;
    printf("enter the value of counter: ");
    scanf("%f",&counter);
    average = total/(int)counter;
    printf("The average value is = %d",average);
}