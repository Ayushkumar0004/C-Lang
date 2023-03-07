#include<stdio.h>
// int cubebyvalue(int n);
// int main()
// {
//     int num= 5;
//     printf("The original value of num id: %d",num);
//     cubebyvalue(num);
//     printf("\nThe new value is %d\n",num);
// }
// int cubebyvalue(int n)
// {
//     return n*n*n;
// }
int cubebyvalue(int n);
int main()
{
    int num= 5;
    printf("enter the num: ");
    scanf("%d",&num);
    printf("The original value of num id: %d",num);
    cubebyvalue(num);
    printf("\nThe new value is %d\n",num);
}
int cubebyvalue(int n)
{
    return n*n*n;
}
