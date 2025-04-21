//take marks of 5 subjects from the user. Assume marks are given
//out of 100 and passing marks is 33. Now display whether the candidate passed the
//pass or failed
#include<stdio.h>
int main()
{
	int s1,s2,s3,s4,s5;
	float sum,percentage;
	printf("Enter numbers of 5 subjects : ");
	scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
	
	sum=(s1+s2+s3+s4+s5);

	percentage=(sum/500)*100;
	printf("%.2f\n",percentage);
	
	if(percentage>33)
	{
		printf("pass");
	}
	else
	{
		printf("fail");
	}
	return 0;
}
