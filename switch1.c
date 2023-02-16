#include<stdio.h>
// int main()
// {
//     int no;
//     printf("Enter the no: \n");
//     scanf("%d",&no);
//     switch(no)
//     {
//         case 0:
//         printf("\n No geometry");
//         break;
//         case 1:
//         printf("\n a point");
//         break;
//         case 2:
//         printf("\n A triangle");
//         break;
//         case 3:
//         printf("\n A line");
//         break;
//         case 4:
//         printf("\n A rectangle");
//         break;
//         case 5:
//         printf("\n A pentagon");
//         break;
//         default:
//         printf("INVALID");
//         break;
//     }
//     return 0;
// }
int main()
{
    char pt;
    printf("Enter the char: \n");
    scanf("%d",&pt);
    switch(pt)
    {
        case 'A':
        printf("\n No geometry");
        break;
        case 'B':
        printf("\n a point");
        break;
        case 'C':
        printf("\n A triangle");
        break;
        case 'D':
        printf("\n A line");
        break;
        case 'E':
        printf("\n A rectangle");
        break;
        case 'F':
        printf("\n A pentagon");
        break;
        default:
        printf("INVALID");
        break;
    }
    return 0;
}