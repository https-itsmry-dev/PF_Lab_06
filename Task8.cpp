#include <stdio.h>
int main()
{
	float price[5], total = 0, discount = 0, final_amount;
	int i;
	printf("This is a program written in C to demonstrate the use of array and for loop");
	for (i=0; i<5; i++)
	{
		printf("\nEnter the price of each product respectively: ");
		scanf("%f", &price[i]);
	}
	for (i=0; i<5; i++)
	{
		total = total + price[i];
	}
	if (total > 10000)
	{
		discount = total * 0.10;
	}
	else
	{
		discount = 0;
	}
	final_amount = total - discount;
	printf("\nThe original total is: %.2f", total);
	printf("\nThe discount is: %.2f", discount);
	printf("\nThe final amount is: %.2f", final_amount);
	return 0;
}

