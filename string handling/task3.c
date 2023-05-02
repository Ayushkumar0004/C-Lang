#include<stdio.h>
#include<stdlib.h>
int main()
{
    long int d;
    char x[] = "100000000";
    d = atol(x);
    printf("%ld",d);
    return 0;
}