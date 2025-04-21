//input 3 digit number and print their sum
#include<stdio.h>
int main()
{
	int a,sum=0;
	printf("Enter three digit number ");
	scanf("%d",&a);
	sum=a%10;
	a=a/10;
	sum=sum+a%10;
	a=a/10;
	sum=sum+a;
	printf("Sum of three digits is %d",sum);
	return 0;
	
}
