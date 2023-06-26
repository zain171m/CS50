#include<stdio.h>

int main()
{
   int Customer_no;
   printf("Enter the number of total customers today :");
   scanf("%d",&Customer_no);
   float Average_profit, total_profit;
   total_profit = 0.0;
   int profit;
	for(int x = 0; x < Customer_no; ++x)
	{
	printf("Enter profit from customer: ");
	scanf("%d",&profit);
	total_profit += profit;
    }

	Average_profit = total_profit / Customer_no;
	printf("Your Average profit will be: %f", Average_profit);
}