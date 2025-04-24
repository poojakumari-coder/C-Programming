//function to print squares of first N natural numbers
#include<stdio.h>
int print(int n)
{
	if(n==0)
	return ;
	
	print(n-1);
	printf("%d ",n*n);
}
int main()
{
	print(10);
}
