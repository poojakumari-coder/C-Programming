//to check whether a given number is divisible by 3 and divisible by 7
#include<stdio.h>
int main()
{
	int num;
	printf("Enter any number: ");
	scanf("%d",&num);
	if(num%3==0 || num%7==0)
	{
		printf("Number is divisible by either 3 or 7");
	}
	else
	{
		printf("Number is not divisible by either 3 or 7");
	}
	return 0;
}
