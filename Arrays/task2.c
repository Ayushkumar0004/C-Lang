#include<stdio.h>
int main()
{
    int a[5] = {1,2,3,4,5};
    int i;
    printf("\n Print base addrress of tge array");
    printf("%u %u %u",&a[0],a,&a);
    printf("\nPrint address of all array elements");
    for(i=0; i<5; i++)
    {
        printf("\n%u",&a[i]);
    }
    return 0;
}