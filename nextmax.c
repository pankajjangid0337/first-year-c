#include<stdio.h>
int main()
{
	int max=0,jmax=0,i,A[10]={1,45,78,25,45,,1000,18,5,65};
	for(i=0;i<=9;i++)
	{
		if(A[i]>max)
		{ jmax = max;
		max = A[i];
		}
		else
		if(A[i]>jmax)
		{
			jmax=A[i];
		}
	}
	printf("\n%d %d",max,jmax);
}

