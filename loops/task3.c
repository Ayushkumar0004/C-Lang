// wap to print any series and in that ask the user to skip any two no using continue statement
#include<stdio.h>
int main()
{
	int i,j,n,m;
	printf("Enter the first no which you want to delete : ");
	scanf("%d",&n);
	printf("Enter the second no which you want to delete : ");
	scanf("%d",&m);
	for (i=1;i<=1;i++)
	{
		for (j=1;j<=100;j++)
		{
			if(j==n)
			{
				continue;
			}
			else if (j==m)
			{
				continue;
			}
			printf("%d\n",j);
		}
	}
	return 0;
}