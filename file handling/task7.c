#include<stdio.h>
int main()
{
    FILE *fptr;
    int i,n;
    fptr = fopen("b.txt","w");
    for(i=1; i<=5; i++)
    {
        printf("Enter no:");
        scanf("%d",&n);
        putw(n,fptr);
    }
    fclose(fptr);
}