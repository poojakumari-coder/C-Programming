//to check whether a given year is a leap year or not
//to check whether a given year is a leap year or not
/*
Any year that is evenly divisible by 4 is a leap year:
for example, 1988, 1992, and 1996 are leap years.*/

//following years are not leap years:

//1700, 1800, 1900, 2100, 2200, 2300, 2500, 2600
//This is because they are evenly divisible by 100 but not by 400.
//The following years are leap years: 1600, 2000, 2400
//This is because they are evenly divisible by both 100 and 400.
/*
1992	Leap Year
2000	Leap Year
1900	NOT a Leap Year
*/
#include<stdio.h>
int main()
{
	int year;
	printf("Enter a year");
	scanf("%d",&year);
	
	if((year%4==0 )&& (year%100!=0 )|| (year%400==00))
	{
		printf("leap year");
	}
	else
	{
	    printf(" NOT leap year");
	}
	return 0;
}
