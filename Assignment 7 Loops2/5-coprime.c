//to check whether two given numbers are co-prime numbers or not
#include<stdio.h>
int main()
{
	int i,a,b,min;
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
	min=a<b?a:b;
	for(i=2;i<=min;i++)
	{
		if(a%i==0 && b%i==0)
		    break;
		
	}
	
	if(i==min+1)
	{
		printf("%d and %d are coprime number",a,b);
	}
	else
	{
		printf(" %d and %d are not a coprime number",a,b);
	}
	return 0;
}
