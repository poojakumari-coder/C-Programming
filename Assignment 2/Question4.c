//swap two values w/o third variable
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two number ");
	scanf("%d %d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("Swap of two number is",a,b);
	return 0;
}
