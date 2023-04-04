// wap to ask the user to enter any 10 random no sort them in descending order 
#include<stdio.h>
int main()
{
    int a[100];
    int hold,i,n,j;
    printf("\nEnter the value of n: ");
    scanf("%d",&n);
    printf("\nEnter elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Data items in original order ");
    for(i=0; i<n; i++)
    {
        printf("%d",a[i]);
    }
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-1-i; j++)
        {
            if(a[j] < a[j+1])
            {
            hold = a[j];
            a[j] = a[j+1];
            a[j+1] = hold;
            }
        }
    }
    printf("\nData items in descending order ");
    for(i=0; i<n; i++)
    {
        printf("%d",a[i]);
    }
}