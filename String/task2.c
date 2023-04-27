#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20],str2[20];
    int n;
    printf("\nEnter the source string: ");
    gets(str1);
    printf("\nEnter the destination string: ");
    gets(str2);
    printf("Enter numbers of characters to copy in destination string: ");
    scanf("%d",&n);
    strncpy(str2,str1,n);
    printf("Source string is: %s",str1);
    printf("Destination string is: %s",str2);
    return 0;
}