//to check whether a given number is divisible by 3 and divisible by 2
#include<stdio.h>
int main()
{
	int num;
	printf("Enter any number: ");
	scanf("%d",&num);
	if(num%2==0 && num%3==0)
	{
		printf("Number is divisible by 2 & 3");
	}
	else
	{
		printf("Number is not divisible by 2 & 3");
	}
	return 0;
}
