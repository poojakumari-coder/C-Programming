//recursive function to print octal of a given decimal number
#include<stdio.h>
int octal(int n)
{
	int r;
	if(n==0)
	return;
	 
	 r=n%8;
	 octal(n/8);
	 printf("%d",r);
}
int main()
{
	octal(20);
}
