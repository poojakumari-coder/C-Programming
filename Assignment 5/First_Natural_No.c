// Write a program to print the first N natural numbers.
#include<stdio.h>
int main()
{
	int i=1,n;
	printf("Number to print natural number:");
	scanf("%d",&n);
	
	while(i<=n)
	{
		printf("%d\n",i);
		i++;
	}
	return 0;
}
