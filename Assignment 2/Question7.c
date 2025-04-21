//To check even or odd using bitwise operator
#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter any number:");
	scanf("%d",&x);
	(x&1)? printf("0dd"):printf("even");
	return 0;
}
