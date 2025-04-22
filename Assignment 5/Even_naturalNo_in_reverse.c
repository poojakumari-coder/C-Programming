// to print the first N even natural numbers in reverse order
#include<stdio.h>
int main()
{
	int n;
	printf("Enter number of times in reverse:");
	scanf("%d",&n);
	
	while(n>0)
	{
		printf("%d ",2*n);
		n--;
	}
	return 0;
}
