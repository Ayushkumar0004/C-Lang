#include<stdio.h>
int main()
{
    int n,a,b;
    printf("enter first number=");
    scanf("%d",&a);
    printf("enter second number=");
    scanf("%d",&b);
    printf("1.addition\n 2.subtraction\n 3.divison\n4.modulus\n5.multiplication\n");
    printf("enter the choice=");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            printf("addition=%d",a+b);
        break;
        case 2:
            printf("subtraction=%d",a-b);
        break;
        case 3:
            printf("divison=%d",a/b);
        break;
        case 4:
            printf("modulus=%d",a%b);
        break;
        case 5:
            printf("multiplication=%d",a*b);
        break;
        default:
            printf("invalid input");
        break;
        return 0;
    }
}