// wap to start the start the loop from 1 to 100 and ask the user upto which no the user want to print the value
#include<stdio.h>
// int main()
// {
//     int i,n;
//     printf("enter the no: ");
//     scanf("%d",&i);
//     for(i=1; i<=100; i++)
//     {
//         printf("%d\n",i);
//         if (i==n);
//         {
//             break;
//         }
//     }
//     return 0;
// }
int main()
{
    int i,j,n,k;
    printf("enter the value of n: ");
    scanf("&d",&n);
    printf("enter the value of k: ");
    scanf("&d",&k);
    for(i=1; i<=k; i++)
    {
        for (j=1; j<=5; j++)
        {
            if (j==n)
            {
                continue;
            }
            printf("%d\n",j);
        }
    }
    return 0;
}