#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20],str2[20];
    int x,n;
    printf("\nEnter the first string: ");
    gets(str1);
    printf("\nEnter the second string: ");
    gets(str2);
    printf("\nEnter the no of character to compare: ");
    scanf("%d",&n);
    x = strncmp(str1,str2,n);
    if(x==0)
    {
        printf("\nString are equal");
    }
    else if(x>0)
    {
        printf("\nFirst string is greater than second string");
    }
    else
    {
        printf("\nFirst string is less than second string");
    }
}