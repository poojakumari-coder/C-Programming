//Program to take the value from the user as input electricity unit charges and calculate
//total electricity bill according to the given condition . Using the switch statement.
//For the first 50 units Rs. 0.50/unit
//For the next 100 units Rs. 0.75/unit
//For the next 100 units Rs. 1.20/unit
//For units above 250 Rs. 1.50/unit
//An additional surcharge of 20% is added to the bill
#include<stdio.h>
int main()
{
	int units;
	printf("Enter your total consumption of units:");
	scanf("%d",&units);
	float amount,total_amount;
	
	switch(units<=50)
	{
		case 0:
			//51 to 150
			switch(units<=150)
			{
			    case 0:
			    	//151 to 250
			        switch(units<=250)
			        {
			        	case 0: //250 more
			        		amount=25 + 75 + 120 +(units-250)*1.50;
			        		printf("Amount calculated at rate of 1.50 is:%.2f\n",amount);
		        	        break;
			        	case 1:
							amount=25 + 75 +(units-150)*1.20;
			        		printf("Amount calculated at rate of 1.20 is:%.2f\n",amount);
		        	        break;
					}
					break;
		        case 1:
		        	amount=25 + (units-50)*0.75;
		            printf("Amount calculated at rate of 0.75 is:%.2f\n",amount);
		            break;	
				break;
			}
			//printf("Amount calculate at rate of 0.50 is:%.2f",units*0.50);
			break;
		case 1:
			amount=units*0.50;
			printf("Amount calculated at rate of 0.50 is:%.2f\n",amount);
			break;
		
		
			
	}
	total_amount= amount + amount*0.2;
	printf("total bill is:%.2f\n",total_amount);
	return 0;
}
