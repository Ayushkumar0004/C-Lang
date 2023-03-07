#include<stdio.h>
// // int square(int y); fuction prototype
// int main()
// {
//     int x;
//     for(x=1; x<=10; ++x)
//     {
//         // printf("%d", square(x));function call
//         puts(" ");
//     }
// }
// int square(int y)
// {
//     // return y * y;function defination
// }

int square(int y);
int add(int c,int d);
int main()
{
    int x;
    int c = 7,d = 9;
    for(x=1; x<=10; ++x)
    {
        printf("%d", square(x));
        puts(" ");
    }
    printf("%d", add(c, d));
}
int square(int y)
{
    return y * y;
}
int add(int c, int d)
{
    return c + d;
}