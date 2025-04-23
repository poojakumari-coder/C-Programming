//a function to print first N natural numbers (TSRN)
#include<stdio.h>
void print(int);
int main()
{
	int n;
	printf("Enter Any Number:");
	scanf("%d",&n);
	
	printf("First %d Natural Number Is:\n",n);
	print(n);
	return 0;
}
void print(int a)
{
	int i;
	for(i=1;i<=a;i++)
	printf("%d ",i);
	
}
