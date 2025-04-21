/* Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR
and convert it into USD*/
#include<stdio.h>
int main()
{
	float x;
	float y;
	printf("Enter the amount in INR");
	scanf("%f",&x);
	y=x/76.23;
	printf("Value of INR in USD is :%.2nf",y);
	return 0;
}
