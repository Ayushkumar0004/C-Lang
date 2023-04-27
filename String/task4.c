#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20],str2[20];
    int n;
    printf("\nEnter the first string: ");
    gets(str1);
    printf("\nEnter the second string: ");
    gets(str2);
    printf("\nEnter no of characters you want to combine: ");
    scanf("%d",&n);
    strncat(str2,str1,n);
    printf("String after cancatenation is: %s",str1);
    return 0;
}