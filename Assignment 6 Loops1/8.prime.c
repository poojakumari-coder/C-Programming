//Write a program to check whether a given number is a Prime number or not
#include<stdio.h>
int main()
{
	int n,i,count=0;
	printf("Enter a number:");
	scanf("%d",&n); //like 10/2=5 is max divisible number
	for(i=2;i<n;i++) //also n/2 bhi kr skte hai qki usse bda koi divide nhi kr paega.
	{
		if(n%i==0)
		{		
		count=1;
		break;	
		}
	}
	
	if(count==1)
	{
		printf("Given number is not prime");
	}
	else
	{
		printf("Given number is prime");
	}
	return 0;
}
