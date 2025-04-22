//Write a program to calculate LCM of two numbers
#include<stdio.h>
int main()
{
	int n1,n2,i;
	printf("Enter a number:\n");
	scanf("%d",&n1);
	printf("Enter a number:\n");
	scanf("%d",&n2);
	for(i=1;i<=n2*n1;i++)
	{
		if((i%n1==0)&&(i%n2==0))
		{
		 	printf("Lcm of %d and %d is %d",n1,n2,i);
		 	break;
		}
	}
	
		
	return 0;
}
