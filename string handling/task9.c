// wap to perform all the character arithmetic operations dynamically
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch1, ch2;
    printf("\nEnter the first character: ");
    scanf("%s",&ch1);
    printf("\nEnter the first character: ");
    scanf("%s",&ch2);
    ch1 = ch1 + ch2;
    printf("%d\n", ch1);
    printf("%c\n", ch1 - ch2 - 4);
    return 0;
}