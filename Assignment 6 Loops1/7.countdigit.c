//Write a program to count digits in a given number
#include<stdio.h>
int main()
{
	long long int n,i,count=0;
	printf("Enter any digit of number:");
	scanf("%d",&n);
	while(n!=0)
	{
		n=n/10;
		count++;
	}

	
	printf("total digit in a number is:%d ",count);
	return 0;
}
