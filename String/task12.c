#include<stdio.h>
#include<string.h>
int main()
{
    char x[100];
    int i=0;
    printf("\nEnter the string: ");
    gets(x);
    while(x[i]!='\0')
    {
        i++;
    }
    printf("\nLength of the string is: %d",i);
    return 0;
}