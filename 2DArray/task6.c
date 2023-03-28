#include<stdio.h>
void value(int);
int main()
{
    int arr[100],n;
    int i;
    printf("\nEnter n: ");
    scanf("%d",&n);
    printf("\nEnter array elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nPassing element by element: ");
    for(i=0; i<5; i++)
    {
        value(arr[i]);
    }
    return 0;
}
void value(int u)
{
    printf("%d",u);
}