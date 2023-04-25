#include<stdio.h>
int main()
{
    int i,n;
    int a[10],*parr=a;
    printf("\nEnter the no of elements: ");
    scanf("%d",&n);
    printf("\nEnter the elements: ");
    for(i=1; i<n; i++)
    {
        scanf("%d",parr+i);
    }
    printf("\nEntered array elements are: ");
    for(i=0; i<n; i++)
    {

        printf("\t%d",*(parr+i));
    }
    return 0;
}