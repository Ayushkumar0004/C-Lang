#include<stdio.h>
// int main()
// {
//     int x,y,z;
//     printf("Enter the value: \n");
//     scanf("%d",&x);
//     y = x++;
//     z = ++x;
//     printf("\n%d,%d,%d",x,y,z);
//     return 0;
// }
// int main()
// {
//     int a,b,c;
//     printf("Enter the value a: \n");
//     scanf("%d",&a);
//     printf("enter the value of b: ");
//     scanf("%d",&b);
//     c = a++ +b;
//     printf("\n%d,%d,%d",a,b,c);
//     return 0;
// }
// int main()
// {
//     int x = 4,y,z;
//     y = --x;
//     z = x--;
//     printf("%d,%d,%d",x,y,z);
//     return 0;
// }
// dynamic
int main()
{
    int x,y,z;
    printf("enter the value of x: \n");
    scanf("%d",&x);
    y = --x;
    z = x--;
    printf("\n%d,%d,%d",x,y,z);
    return 0;
}