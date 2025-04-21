// even number or an odd number without using % operator.
#include<stdio.h>
int main()
{
	int num;
	printf("Enter any number: ");
	scanf("%d",&num);
	(num&1)? printf("odd number"): printf("even number");
	return 0;
}
