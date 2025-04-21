/*to check whether roots of a given quadratic equation are real &
distinct, real & equal or imaginary roots*/
#include<stdio.h>
int main()
{
	int a,b,c;
	int dis,roots;
	printf("Enter a quadratic equation in the form of ax2+bx+c:");
	
	scanf("%d %d %d",&a,&b,&c);
	dis=(b*b-(4*a*c));
	if(dis>0)
	{
		printf("Roots are real and distinct");
	}
	else if(dis==0)
	{
		printf("Roots are equal");
	}
	else if(dis<0)
	{
		printf("Roots are imaginary");
	}
	return 0;
}

