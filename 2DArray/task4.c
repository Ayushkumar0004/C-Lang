#include<stdio.h>
int main()
{
    int a[10][10], trans[10][10],r,c,i,j;
    printf("Enter the rows and column of matrix: ");
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter the elemnets a%d%d: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEntered matrix: \n");
    for(i=0; i<r;i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n\n");
    }
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            trans[i][j] = a[j][i];
        }
    }
    printf("\nTranspose of matrix:\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d",trans[i][j]);
        }
        printf("\n\n");
    }
    return 0;
}