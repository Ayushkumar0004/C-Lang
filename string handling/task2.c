#include<stdio.h>
#include<stdlib.h>
int main()
{
    char x[100];
    int i;
    printf("Enter the string: ");
    gets(x);
    i = atoi(x);
    printf("%d",i);
    return 0;
}