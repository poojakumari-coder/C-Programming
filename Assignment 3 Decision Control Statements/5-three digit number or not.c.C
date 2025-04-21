//a given number is a three digit number or not.
#include<stdio.h>
int main()
{
	int num;
	printf("Enter any number: ");
	scanf("%d",&num);
	if((num>99 && num<1000) ||(num<-99 && num>-1000))
	{
		printf("Number is 3 digit");
	}
	else
	{
	 printf("Number is not 3 digit");	
	}
	return 0;
}
