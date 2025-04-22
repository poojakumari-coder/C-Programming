//to find next Prime number of a given number
#include<stdio.h>
int main()
{
	int i,n,x;
	printf("Enter number");
	scanf("%d",n);
	
	for(x=n+1;x=i+1;x++)
	{
		for(i=2;i<x;i++)
		  if(x%i==0)
		   break;
		   
		   if(i==x)
		   	printf("%d ",x);
		   
	}
	return 0;
}
