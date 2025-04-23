//a function to calculate the number of combinations one can make from n items
//and r selected at a time. (TSRS)
#include<stdio.h>
int combination(int,int);
int fact(int);

int main()
{
	int n,r,x;
	printf("Enter two number:");
	scanf("%d %d",&n ,&r);
	
	x=combination(n,r);
	printf("combinations is: %d",x);
}
int fact(int n)
{
	int i,f=1;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}
int combination( int n,int  r)
{
	return fact(n) / (fact(r)*fact(n-r));
}
