//a function to print PASCAL Triangle. (TSRN)
//the triangular arrangement of numbers 
//that gives the coefficients in the expansion of any binomial expression
#include<stdio.h>
int fact(int n)
{
	int i,f=1;
	for(i=1;i<=n;i++)
	{
	 f = f*i;
	}
	 return f;
}
int comb(int n,int r)
{
	return fact(n) / (fact(r)*fact(n-r));
}
void pascal(int n)
{
	int i,r;
	for(i=0;i<=n;i++)
	{
		for(r=0;r<=i;r++)
		{
			printf("%d ",comb(i,r));
		}
		printf("\n");
	}
}
int main()
{
	pascal(5);	
	//printf("%d\n",fact(5));
	//printf("%d\n",comb(10,2));
	return 0;
	
}
