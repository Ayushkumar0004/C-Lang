#include<stdio.h>
int main()
{
    int i,n,arr[10],sum=0;
    int *pn=&n,*parr=arr,*psum=&sum;
    float mean=0.0, *pmean=&mean;
    printf("\nEnter the no of elements in the array: ");
    scanf("%d",*pn);
    for(i=0;i<*pn; i++)
    {
        printf("\n Enter the no: ");
        scanf("%d",(parr+i));
    }
    for(i=0; i<*pn; i++)
    {
        *psum = *psum + *(arr+i);
    }
    *pmean = *psum / *pn;
    printf("\nThe no you have entered are: ");
    for(i=0; i<*pn; i++)
    {
        printf("\n%d",*(arr+i));
        printf("\nThe sum is: %d",*psum);
        printf("\nThe mean is: %f",*pmean);
    }
    return 0;
}