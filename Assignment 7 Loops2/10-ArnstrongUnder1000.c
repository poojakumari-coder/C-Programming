//a program to print all Armstrong numbers under 1000
#include<stdio.h>
int main()
{
	int i,x,rem,sum;
	printf("armstrong number is:\n");
	for(i=1;i<=1000;i++)
	{
		x=i;
		sum=0;
		while(x!=0)
		{
			rem=x%10;
			sum=sum + rem*rem*rem;
			x=x/10;
		}
		if(sum==i)
		printf("%d\n",i);
		
	}
	return 0;
}
