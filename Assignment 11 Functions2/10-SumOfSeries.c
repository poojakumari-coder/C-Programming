//to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the function
#include<stdio.h>
int fact(int n)
{
	int i,f=1;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}
int sum(int n)
{
	int i,s;
	for(i=1;i<=n;i++)
	{
		s= s + fact(i)/i;
	}
	return s;
}
int main()
{
	int s=sum(5);
	printf("%d ",s);
}
