//first 10 odd natural numbers in reverse order.
#include<stdio.h>
int main()
{
	int i=10,n=10,odd;

	while(i>5)
	{
		odd=2*i+1;
		printf("%d ",odd);
		i--;
	}
	return 0;
}
