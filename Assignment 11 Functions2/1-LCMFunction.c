//a function to calculate LCM of two numbers. (TSRS)
#include<stdio.h>
int lcm(int a,int b)
{
	int i;
	for(i=1;i<a*b;i++)
	{
		if(a*i==b*i)
		{
			break;
		}
	}
	return i;
}
int main()
{
	int p,q,l;
//	printf("Enter two numbers:");
	//scanf("%d",&p,&q);
	l=lcm(3,2);
	printf("%d",l);
}
