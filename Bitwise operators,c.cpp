#include<stdio.h>
int main()
{
	int x = 80;
	int y = 23;
	int z = 0;
	
	z = x & y;
	printf("value of AND operator is %d\n",z);
	
	z = x | y;
	printf("value of OR operator is %d\n",z);
	
	z = x ^ y;
		printf("value of XOR operator is %d\n",z);
	
	z = ~x;
		printf("value of NOT operator is %d\n",z);
		
	z = x << 2;
		printf("value of Left shift operator is %d\n",z);
			
	z =x >> 2;
		printf("value of OR operator is %d\n",z);
}
