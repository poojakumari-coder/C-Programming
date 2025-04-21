//to print greater between two numbers. Print one number if both are the same.
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter any number: ");
	scanf("%d %d %d",&a,&b,&c);
	if((a>b)&& (a>c))
	{
		printf("Number %d is greater",a);
	}
	else if(b>a && b>c)
	{
		printf("Number %d is greater",b);
	}
	else if(a==b && b==c)
	{
		printf("Numbers %d is repeated",c);
	}
	else
	{
	 printf("Number %d is greater",c);	
	}
	return 0;
}
