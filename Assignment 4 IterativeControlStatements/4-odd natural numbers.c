//to print the first 10 odd natural numbers
#include<stdio.h>
int main()
{
	int i=0,n=1,odd;

	while(i<5)
	{
		odd=2*i+1;
		printf("%d ",odd);
		i++;
	}
	return 0;
}
