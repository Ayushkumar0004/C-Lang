#include<stdio.h>
// int main()
// {
//     int v;
//     printf("Enter the no: \n");
//     scanf("%d",&v);
//     if(v<10)
//     {
//         printf("no is less than 10");
//     }
//     return 0;
// }
int main()
{
    int v,a;
    printf("Enter the no: \n");
    scanf("%d",&v);
    printf("Enter the value of variable a with you want to compare: \n");
    scanf("%d",&a);
    if(v<a)
    {
        printf("no is less than 10");
    }
    return 0;
}