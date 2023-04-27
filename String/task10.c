#include<stdio.h>
#include<string.h>
int main()
{
    char s[] = "HELLO";
    strupr(s);
    puts(s);
    strlwr(s);
    puts(s);
    return 0;
}