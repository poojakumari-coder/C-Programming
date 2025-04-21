//takes the cost price and selling price of a product from the
//user. Now calculate and print profit or loss percentage
#include<stdio.h>
int main()
{
	float cp,sp;
	float gain,loss;
	float profit_per,loss_per;
	printf("Enter costprice and selling price: ");
	scanf("%f %f",&cp,&sp);
	if(cp>sp)
	{
		loss=cp-sp;
		printf("loss=%.2f\n",loss);
		loss_per=(loss*100)/cp;
		printf("percentage loss is:%.3f",loss_per);
	}
	else{
		gain=sp-cp;
		printf("gain=%.2f\n",gain);
		profit_per=(gain/cp)*100;
		printf("percentage profit is:%.3f",profit_per);
	}
	return 0;
}
