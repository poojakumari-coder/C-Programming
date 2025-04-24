//a recursive function to print binary of a given decimal number
#include<stdio.h>
int binary(int n)
{
	if(n==0)
	return;
	
	int r;
	r=n%2;
	binary(n/2);
	printf("%d",r);
}
int main()
{
	printf("binary is:");
	binary(7);
}
