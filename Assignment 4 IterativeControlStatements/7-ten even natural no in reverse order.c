// print the first 10 even natural numbers in reverse order
#include<stdio.h>
int main()
{
	int i,n;
	printf("How many even number want ");
	scanf("%d",&n);
	for(i=n;i>=0;i--)
	{
		printf("%d\n",2*i);
	}
	return 0;
}
