#include<stdio.h>
int main()
{
	int y,i,a[1000],j;
	printf("input an integer");
	scanf("%d",&y);
	for(i=0;y>0;i++)
	{
		a[i]=y%2;
		y=y/2;
	}
	for(j=i-1;j>=0;j--)
	{
		printf("%d",a[j]);
	}
	return 0;
}
