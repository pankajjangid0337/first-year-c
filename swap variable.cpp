#include<stdio.h>
int main()
{
	int x=20,y=40;
	scanf("%d %d",&x,&y);
	y=x+y;
	x=y-x;
	y=y-x;
	printf("x=%d",x);
	printf("\n y=%d",y);
}
