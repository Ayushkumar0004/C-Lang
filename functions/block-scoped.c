#include<stdio.h>
int main(){
    int b = 2;
    {
        int a = 1;
        printf("\nValue of a is : %d",a);
    }
    printf("\nValue of b is : %d",b);
    return 0;
}