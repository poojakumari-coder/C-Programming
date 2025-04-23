// which takes the month number as an input and display number of
//days in that month
#include<stdio.h>
int main()
{
	int n;
	printf("Enter any month number:");
	scanf("%d",&n);
	
	switch(n)
	{
		    case 1:
			printf("Month=January and total days=31");
			break;
			case 2:
			printf("Month=Febuary and total days=28");
			break;
			case 3:
			printf("Month=March and total days=31");
			break;
			case 4:
			printf("Month=April and total days=30");
			break;
			case 5:
			printf("Month=May and total days=31");
			break;
			case 6:
			printf("Month=June and total days=30");
			break;
			case 7:
			printf("Month=July and total days=31");
			break;
			case 8:
			printf("Month=August and total days=31");
			break;
			case 9:
			printf("Month=September and total days=30");
			break;
			case 10:
			printf("Month=October and total days=31");
			break;
			case 11:
			printf("Month=November and total days=30");
			break;
			case 12:
			printf("Month=December and total days=31");
			break;
			default :
			printf("Invalid month");
			
	}
}
