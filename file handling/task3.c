#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *fp;
    char name[50], arr[50];
    printf("Enter the file name: ");
    scanf("%s",&name);
    fp = fopen(name,"w");
    if(fp == NULL)
    {
        printf("File can't be opened");
        exit(0);
    }
    else
    {
        printf("The string is: ");
        scanf("%s",&arr);
        fputs(arr,fp);
    }
    fclose(fp);
}