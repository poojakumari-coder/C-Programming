//a function to calculate simple interest. (TSRS)
//SI=P*R*T/100;
#include<stdio.h>
float si(int,int,int);
int main()
{
	int p,r,t;
	printf("Enter principle rate and time:");
	scanf("%d %d %d",&p,&r,&t);
	
	int simpleInterest;
	simpleInterest=si(p,r,t);
	
	printf("Simple interest is:%d",simpleInterest);
	return 0;
}
float si(int a,int b,int c)
{
	int x;
	x=(a*b*c)/100;
	return x;
}
