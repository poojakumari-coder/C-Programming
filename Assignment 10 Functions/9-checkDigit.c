// function to check whether a given number contains a given digit or not.
//(TSRS)
#include<stdio.h>
int check(int n,int digit)
{
	int rem;
	while(n!=0)
	{
	rem=n%10;
	if(rem==digit)
	return 1;
	else
	//return 0;
	n=n/10;
	}
	return 0;
}
int main()
{
	int x,n,digit;
	printf("Enter any number:");
	scanf("%d",&n);
	printf("Enter digit to check:");
	scanf("%d",&digit);
	
	x=check(n,digit);
	if(x==1)
	printf("yes present %d",x);
	else
	printf("not present%d",x);
}

