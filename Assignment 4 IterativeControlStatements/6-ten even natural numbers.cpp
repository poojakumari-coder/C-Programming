//a program to print the first 10 even natural numbers
#include<stdio.h>
int main()
{
	int i,n;
	printf("How many even number want ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%d\n",2*i);
	}
	return 0;
}
