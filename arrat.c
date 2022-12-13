#include<stdio.h>
int main()
{
int i,A[10]=(1,2,3,4,5,6,7,8,9,10),s,flag=0;
for(i=0;i<=9;i=i+1)
{
	scanf("%d",&A[i]);
}
   scanf("%d",&s);
 
   for(i=0;i<=9;i++)
   {
   	if(A[i]==s)
   	{
   		printf("found");
   		flag=1
   		break;
	   }
	   else
	   {
	   	printf("Number not found");
	   	flag=0;
	   }
	   return 0;
   }
   
    
}
