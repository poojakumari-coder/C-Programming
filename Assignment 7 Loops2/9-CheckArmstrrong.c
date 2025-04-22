//to check whether a given number is an Armstrong number or not
#include<stdio.h>
int main()
{
	int n,temp,rem,sum;
	
	printf("Enter a number:");
	scanf("%d",&n);
	
		temp=n;
		sum=0;
	
	while(n!=0)
	{
		
		rem=n%10;
	    sum=sum + rem*rem*rem;
		 n=n/10;
		
	}
	if(sum==temp)
	{
		printf("armstrong");
	}
	else
	{
		printf("Not armstrong");
	}
	return 0;
}
