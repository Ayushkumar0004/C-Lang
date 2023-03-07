#include<stdio.h>
void cubebyReference(int *nptr);
int main(void)
{
    int num;
    printf("enter the num: ");
    scanf("%d",&num);
    printf("The original value of num id: %d",num);
    cubebyReference(&num);
    printf("\nThe new value is %d\n",num);
}
void cubebyReference(int *nptr)
{
    *nptr = *nptr * *nptr * *nptr;
}
