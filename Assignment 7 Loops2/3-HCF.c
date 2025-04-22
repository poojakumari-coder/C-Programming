//Write a program to calculate HCF of two numbers
/*the factor of any two or more numbers, which are common among them
also called gcd or gcf*/

#include<stdio.h>
int main()
{
	int i,a,b,h;
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
	
	for(h=a<b?a:b;h>=1;h--)
	{
		if(a%h==0 && b%h==0)
			break;
		
	}
	
	printf("hcf is :%d",h); 
	
}
