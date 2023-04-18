#include<stdio.h>
int main()
{
    FILE *fptr;
    int i,n;
    fptr = fopen("b.txt","r");
    printf("\n The no are ");
    for(i=1; i<=5; i++)
    {
        n = getw(fptr);
        printf("%d\t",n);
    }
    fclose(fptr);
}