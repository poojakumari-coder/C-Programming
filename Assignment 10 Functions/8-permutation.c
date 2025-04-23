//a function to calculate the number of arrangements one can make from n items
//and r selected at a time. (TSRS)
#include<stdio.h>
int fact(int n)
{
	int i,f=1;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}
int per( int n,int  r)
{
	return (fact(n) / fact(n-r));
}
int comb( int n,int  r)
{
	return fact(n) / (fact(r)*fact(n-r));
}
int main()
{
	printf("permuation=%d \n\n",per(10,2));
	printf("comb=%d \n\n",comb(10,2));
}
