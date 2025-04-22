// print the first N natural numbers in reverse order
#include<stdio.h>
int main()
{
	int i=1,n;
	printf("Number to print natural number:");
	scanf("%d",&n);
	
	while(n>0)
	{
		printf("%d\n",n);
		n--;
	}
	return 0;
}
