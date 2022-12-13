#include<stdio.h>
int main()
{
int i,j;
int a[]={1,2,3,4,7,6,9,8,4,10};
int b[10]={10};
for(i=0;i<=12;i++)
{
	b[a[i]]=b[a[i]]+1;
	}	
	for(i=1;i<=9;i++)
	{
		printf("\n %d %d",i,a[i]);
	}
	return 0;
}
