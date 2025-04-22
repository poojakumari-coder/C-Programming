//print the first N odd natural numbers
#include<stdio.h>
int main()
{
	int i=0,n;
	printf("Number to print odd natural number:");
	scanf("%d",&n);
	
	while(i<=n)
	{
		printf("%d\n",2*i+1);
		i++;
	}
	return 0;
}
