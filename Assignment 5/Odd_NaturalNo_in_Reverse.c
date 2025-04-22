//first N odd natural numbers in reverse order
#include<stdio.h>
int main()
{
	int i,n;
	printf("Number to print odd natural number:");
	scanf("%d",&n);
	
	while(n>-1)
	{
		printf("%d\n",2*n+1);
		n--;
	}
	return 0;
}
