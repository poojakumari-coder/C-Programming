//to check whether a given number is an even number or an odd num
#include<stdio.h>
int main()
{
	int num;
	printf("Enter any number: ");
	scanf("%d",&num);
	if(num%2==0)
	 {
	 	printf("Number is divisible by 2");
	 }
	 else
	 {
	 	printf("Number is  not divisible by 2");
	 }
	return 0;
}
