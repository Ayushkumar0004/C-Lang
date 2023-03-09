#include<stdio.h>
void first();
int main()
{
    extern int x;
    // *declaration int main()*
    printf("\n x = %d",x);
    // x is used before its defination[Possible because of extern]
    first();
    printf("\n x = %d",x);\
    // Changes done by first are visible here
    return 0;
}
void first()
{
    extern int x;
    printf("\n x = %d",x);
    // x is used again before its defination[Possible because of extern]
    x = x + 10;
}
int x = 10;