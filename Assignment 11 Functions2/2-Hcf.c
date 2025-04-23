// to calculate HCF of two numbers. (TSRS)
#include<stdio.h>
int hcf(int a,int b)
{
	int i,n;
	n=a>b?a:b;
	for(i=2;i<n;i++)
	{
		if(a%i==0 && b%i==0)
		{
			printf("%d ",i);
		}
	}
}
int main()
{
  printf("%d ",hcf(12,6));
}
