#include<stdio.h>
int main()
{
    int x=10;
    char ch = 'A';
    float f = 122.96;
    void *gp;
    gp = &x;
    printf("\n Generic pointer points to the integer value = %d",*(int *)gp);
    gp = &ch;
    printf("\n Generic pointer points to the character value = %c",*(char *)gp);
    gp = &f;
    printf("\n Generic pointer points to the float value = %f",*(float *)gp);
    return 0;
}