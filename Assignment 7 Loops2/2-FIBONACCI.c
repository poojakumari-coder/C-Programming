//Write a program to print first N terms of Fibonacci series
#include<stdio.h>
int main()
{
	int i,n,a=-1,b=1,c;
	printf("Enter nth term of fiboncaci series:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d ",c);
	}
	return 0;
}
