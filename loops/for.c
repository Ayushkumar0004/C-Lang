#include<stdio.h>
// int main()
// {
//     int n;
//     // for(initialization; condition; updating)
//     for (n=10; n>0; n = n-1)
//     {
//         printf("%d\n",n);
//     }
//     return 0;
// }

// int main()
// {
//     int n;
//     printf("enter the no: ");
//     scanf("%d",&n);
//     for (n; n>0; n = n-1)
//     {
//         printf("%d\n",n);
//     }
//     return 0;
// }

int main()
{
    int i,j,n;
    printf("Enter the no 1:\n");
    scanf("%d", &i);
    printf("Enter the no 2:\n");
    scanf("%d", &j);
    for (n=1; n<=j; n++)
    {
        printf("\n%d * %d = %d",i,n,(n*j));
    }
}