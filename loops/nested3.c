#include<stdio.h>
// int main()
// {
//     int i;
//     for(i=1; i<5; i++)
//     {
//         if(i==2)
//         {
//             goto there;
//         }
//         printf("%d\n",i);
//     }
//     there:
//     printf("Two");
//     return 0;
// }
int main()
{
    int i,j=4;
    for(i=1; i<5; i++)
    {
        if(i==2)
        {
            goto there;
        }
        printf("%d\n",i);
    }
    there:
    printf("Two");
    for(i=1; i<=10; i++)
    printf("%d * %d = %d\n",i,j,(i*j));
    return 0;
}

