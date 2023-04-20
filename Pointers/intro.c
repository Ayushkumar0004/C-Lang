#include<stdio.h>
int main()
{
    int a;
    int *aptr;
    a = 7;
    aptr = &a;
    printf("The address of a %p""\nThe value of a ptr is %p",&a,aptr);
    printf("\n\nThe value of a is %d""\nThe value of *aptr is %d",a,*aptr);
    printf("\n\nShowing that * and & are complements of each other \n&*aptr=%p""\n*&aptr=%p\n",&*aptr,*&aptr);
    return 0;
}