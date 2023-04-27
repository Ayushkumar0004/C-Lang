#include<stdio.h>
#include<string.h>
int main()
{
    char ori[20],dup[20];
    char *z;
    printf("\nEnter the name: ");
    gets(ori);
    z = strcpy(dup,ori);
    printf("original string is: %s",ori);
    printf("original string is: %s",dup);
    printf("\nValue of z is:%s",z);
    return 0;
}