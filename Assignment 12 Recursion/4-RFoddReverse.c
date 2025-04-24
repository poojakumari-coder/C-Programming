// a recursive function to print first N odd natural numbers in reverse order
#include<stdio.h>
int printOdd(int n)
{
	if(n==-1)
	return ;
	
	
		printf("%d ",n);
		printOdd(n-2);
	
}
int main()
{
	printf("Reverse order:");
	printOdd(19);
}
