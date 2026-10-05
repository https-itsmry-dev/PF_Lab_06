#include <stdio.h>
int main()
{
	float price, total_bill = 0, discount = 0, final_bill;
	int num;
	printf("This is a program written in C to demonstrate the use of while loop");
	printf("\nEnter the price of the item: ");
	scanf("%f", &price);
	total_bill = total_bill + price;
	printf("\nDo you want to order another item? (Enter 1-->Yes and 0--> No)");
	printf("\nEnter the number: ");
	scanf("%d", &num);
	while (num == 1)
	{
		printf("\nEnter the price of the item: ");
		scanf("%f", &price);
		total_bill = total_bill + price;
		printf("\nDo you want to order another item? (Enter 1-->Yes and 0--> No)");
		printf("\nEnter the number: ");
		scanf("%d", &num);
	}
	if (total_bill > 5000)
	{
		discount = total_bill * 0.05;
	}
	else
	{
		discount = 0;
	}
	final_bill = total_bill - discount;
	printf("\nThe total bill is: %.2f", total_bill);
	printf("\nThe discount is: %.2f", discount);
	printf("\nThe final bill is: %.2f", final_bill);
	return 0;
}


