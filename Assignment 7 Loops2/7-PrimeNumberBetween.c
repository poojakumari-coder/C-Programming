//to print all prime no btw two number in c
#include<stdio.h>
int main()
{
	int i,n1,n2,x;
	printf("Enter two numbers:");
	scanf("%d %d",&n1,&n2);
	 i=0;
	for(x=n1+1;x<=n2-1;x++)
	{
		for(i=2;i<x;i++)
		  if(x%i==0)
		   break;
		   
		   if(i==x)
		   	printf("%d ",x);
		   
	}
	return 0;
}
