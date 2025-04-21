//takes the month number as an input and display number of
//days in that month
#include<stdio.h>
int main()
{
	int num;
	printf("Enter any  month number: ");
	scanf("%d",&num);
	if(num==1 || num==3 || num==5 || num==7|| num==8 || num==10|| num==12)
	{
		printf("number of days are 31");
	}
	else if(num==2)
	{
		printf("number of days are 28/29");
	}
	else
	{
	printf("number of days are 30");
	}
	return 0;
}
