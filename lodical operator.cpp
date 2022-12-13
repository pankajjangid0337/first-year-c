#include<stdio.h>
int main()
{
	int a,b;
	printf("enter values for a and b :");
	scanf("%d %d",&a ,&b);
	printf("\n %d",(a<b)&&(a!=b));
	printf("\n %d",(a<b)||(b>a));
	printf("\n %d",!(a==b));
}
