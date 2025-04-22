//Write a program to find the Nth term of the Fibonnaci series
//0 1 are fix
#include<stdio.h>
int main()
{
	int i,n,a=-1,b=1,c;
	printf("Enter Nth term of fibonacci series:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		
	}
	printf("%d ",c);
	return 0;
}
