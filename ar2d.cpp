#include<stdio.h>
int main()
{
	int i,j,k;
	int a[3][3],b[3][3],c[3][3];
			for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
printf("enter a number\n");
for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			c[i][j]=a[i][j]*b[i][j];
			for(k=0;k<=2;k++)
			printf("\t%d",c[i][j]);
		}
		printf("\n");
	}
}
