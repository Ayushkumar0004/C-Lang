#include<stdio.h>
int main()
{
    int n,i;
    printf("\nEnter the no: ");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter array elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter array elements are: ");
    for(i=0; i<n; i++)
    {
        printf("\n%d,a[i]");
    }
    return 0;
}