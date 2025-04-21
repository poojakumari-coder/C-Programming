//Write a program to make the last digit of a number stored in a variable as zero
#include<stdio.h>
int main()
{
	int x=2358;
	x=x/10;
	x=x*10;
	printf("After replacing the last digit of a number %d:",x);
	return 0;
}
