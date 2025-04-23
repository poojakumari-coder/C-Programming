//a function to check whether a given number is even or odd. Return 1 if the
//number is even, otherwise return 0. (TSRS)
#include<stdio.h>
int evenOrodd(int);
int main()
{
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	evenOrodd(n);
	if(evenOrodd(n)==1)
	{
		printf("Number is even");
	}
	else
	{
		printf("Number is odd");
	}
	return 0;
}
int evenOrodd(int n)
{
	if(n%2==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
//sir method
/*return (n%2==0); */ 

