//Write a program to reverse a given number
#include<stdio.h>
int main()
{
	int n,i,rem=0,rev;
	printf("Enter any digit of number:");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
		
	}
	printf("Reverse number is:%d ",rev);
	
	return 0;
}
