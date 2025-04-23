//to check whether a year is a leap year or not. Using switch statement
//2000, 2004, 2008, 2012, 2016, 2020, 2024, 2028, 2032, 2036, 2040, 2044, and 2048,20400.

#include<stdio.h>
int main()
{
	int year;
	printf("Enter any year\n");
	scanf("%d",&year);
	
	   
	switch(year%100==0)
	{
		case 0:
		     switch(year%4==0) {
		    case 0:
			printf("not leap year");
			break;
			case 1:
			printf("it is leap year");
			break;
		}
		break;
		case 1:
			switch(year%400==0) {
			
			case 0:
		       printf("it is not leap year");
		       break;
		    case 1:
		       printf("it is leap year");
			   break;
		}
		break;			
			
	}
return 0;	
}
