//program to swap two int variable
#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("Enter two number ");
	scanf("%d %d",&a,&b);
	temp=b;
	b=a;
	a=temp;
	printf("Two numbers after swapping is %d %d",a,b);
	return 0;
}
