#include<stdio.h>
int main()
{
    double radius,area =0.0;
    double *pradius = &radius,*parea = &area;
    printf("\n Enter the radius of circle: ");
    scanf("%lf",&pradius);
    *parea = 3.14*(*pradius)*(*pradius);
    printf("\nThe area pf circle with radius %.2lf = %2.lf",*pradius,*parea);
    return 0; 
}