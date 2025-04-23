//a function to print first N odd natural numbers. (TSRN)
#include<stdio.h>
void print(int);
int main()
{
	int n;
	printf("Enter Any Number:");
	scanf("%d",&n);
	
	printf("First %d Odd Natural Number Is:\n",n);
	print(n);
}
void print(int a)
{
	int i;
	for(i=1;i<=a;i++)
	{
		if(i%2!=0)
		printf("%d ",i);
	}
	
	
	
}

