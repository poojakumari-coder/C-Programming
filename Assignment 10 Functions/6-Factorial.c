//a function to calculate the factorial of a number. (TSRS)
#include<stdio.h>
int factorial(int);
int main()
{
	int n,fact;
	printf("Enter a number:");
	scanf("%d",&n);
	fact=factorial(n);
	printf("Factorial of %d is %d",n,fact);
	return 0;
}
int factorial(int n)
{
	int i,f=1;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}
