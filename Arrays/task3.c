#include<stdio.h>
int main()
{
   int a[100],n,i,sum=0;
   printf("\nEnter number of elements: ");
   scanf("%d",&n);
   printf("\nEnter array elements: ");
   for(i=0; i<n; i++)
   {
    scanf("%d",&a[i]);
   } 
   for(i=0; i<n; i++)
   {
    sum = sum + a[i];
   }
   printf("\nSum of array elements is: %d",sum);
   return 0;
}