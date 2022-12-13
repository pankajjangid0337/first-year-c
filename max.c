#include<stdio.h>
int main()
{
	int max=0,i,A[10]={5,45,99,5,2,9,6,4,25,65};
	for(i=0;i<=9;i++)
	{
		if(A[i]>max)
		{
			max = A[i];
		}
	}
	printf("\n%d",max);
}
