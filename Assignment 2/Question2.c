//program to print a number without last digit
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a number n");
	scanf(" %d",&a);
	b=a/10;
	printf("A number without last digit is %d",b);
	return 0;
	
}
