//a recursive function to print first N odd natural number
#include<stdio.h>
int printOdd(int n)
{
	if(n==-1)
	return ;
	
	
		printOdd(n-2);
		printf("%d ",n);
	
}
int main()
{
	printf("Odd Natural Number:");
	printOdd(19);
}
