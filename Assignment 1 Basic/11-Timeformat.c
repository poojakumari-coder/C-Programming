// WAP to take time as an input in below given format and convert the time format and
// display the result as given below.
/*User Input date format� �HH:MM�
 Output format� �HH hour and MM Minute�
 Example 
�11:25� converted to �11 Hour and 25 Minute�*/
#include<stdio.h>
int main()
{
	int h,m;
	printf("Enter time: as \"HH:MM\"");
	scanf("%d:%d",&h,&m);
	
	printf("Hour:%d and Minutes:%d",h,m);
	return 0;
	
}
