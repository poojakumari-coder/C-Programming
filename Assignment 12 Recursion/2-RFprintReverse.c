//recursive function to print first N natural numbers in reverse order
#include<stdio.h>
int print(int n)
{
	if(n==0)
	return;
	
	printf("%d ",n);
	print(n-1);
}
int main()
{
	printf("Reverse order:");
	print(7);
}
