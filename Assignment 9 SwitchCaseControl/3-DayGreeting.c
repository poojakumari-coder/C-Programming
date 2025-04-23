//Write a program which takes the day number of a week and displays a unique
//greeting message for the day
#include<stdio.h>
int main()
{
	int n;
	printf("Enter Any Day Of A Week :");
	scanf("%d",&n);
	
	switch(n)
	{
		    case 1:
			printf("Day is Monday:\n");
			printf("Wishing you first day as bright and beautiful as you are.\n");
			break;
			case 2:
			printf("Day is Tuesday:\n");
			printf("Every new day is a new opportunity to make your dreams come true\n");
			break;
			case 3:
			printf("Day is Wednesday:");
			printf("Wishing you a day that's full of sunshine, rainbows, and everything nice.\n");
			break;
			case 4:
			printf("Day is Thursday:");
			printf("Remember that you are loved and appreciated, and that you have the power to make this day amazing.\n");
			break;
			case 5:
			printf("Day is Friday:");
			printf("Wishing you a day full of good surprises, exciting opportunities, and amazing experiences\n");
			break;
			case 6:
			printf("Day is Saturday:");
			printf("Hope your day is as lovely as you are. Keep smiling and shining");
			break;
			case 7:
			printf("Day is Sunday:");
			printf("May your day be filled with all the things that make your heart happy\n");
			break;
			default :
			printf("Invalid day");
		}
	return 0;	
	}
