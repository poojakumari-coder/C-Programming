//recursive function to print reverse of a given numbe
#include<stdio.h>
int reverse(int n)
{
	if(n==0)
	return;
	
	int r;
	r=n%10;
	printf("%d ",r);
	reverse(n/10);
	
}
int main()
{
	reverse(1224);
}
