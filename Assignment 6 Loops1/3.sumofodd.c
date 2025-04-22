//Write a program to calculate sum of first N odd natural numbers
#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2!=0){
			
		sum=sum+i;
		}		
	}
	printf("sum of first n odd natural number is: %d",sum);
	return 0;
	
}
