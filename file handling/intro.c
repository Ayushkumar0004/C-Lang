#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *fptr;
    fptr  =fopen("a.txt","w");
    if(fptr == NULL)
    {
        printf("\nfile cannot b opened for creation");  
    }
    else
    {
        printf("\nFile creatd successfully");
    }
    fclose(fptr);
}