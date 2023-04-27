#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    int i;
    printf("\nEnter the string: ");
    gets(s1);
    i = 0;
    while (s1[i]!='\0')
    {
        s1[i] = s1[i];
        i++;
    }
    s1[i] = '\0';
    printf("\nCopied string is: %s",s2);
    return 0;
}