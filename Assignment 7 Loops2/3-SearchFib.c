//Write a program to check whether a given number is there in the Fibonacci series or
//not
#include<stdio.h>
int main()
{
	int i,n,a=-1,b=1,c;
	printf("Enter a number to search:");
	scanf("%d",&n);
	
	for(i=1;i<=20;i++)
	{
		c=a+b;
		a=b;
		b=c;	
	}
	if(c==n)
	{
		printf("Found");
	}
	else
	{
		printf("not found");
	}
	
}
