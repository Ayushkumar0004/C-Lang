#include<stdio.h>
int main()
{
    FILE *fp;
    char temp,name[50];
    printf("Enter name: ");
    scanf("%s",name);
    fp = fopen(name,"r");
    while((temp = getc(fp))!=EOF)
    {
        if(temp=='y')
        {
            fseek(fp,-1,1);
            putc('z',fp);
        }
    }
    fclose(fp);
}