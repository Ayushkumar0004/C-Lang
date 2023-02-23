#include<stdio.h>
char func(int(ascii))
{
    return((char)ascii); 
}
int main()
{
    int ascii;
    char ch;
    printf("enter the ascii value in decimal: ");
    scanf("%d",&ascii);
    ch = func(ascii);
    printf("the character is: %c",ch);
    return 0;
}