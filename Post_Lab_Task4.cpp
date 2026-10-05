#include <stdio.h>
int main()
{
	float price, total = 0, discount = 0, final_amount;
	int num;
	printf("This is a program written in C to demonstrate the use of while loop");
	printf("\nEnter the price of the item: ");
	scanf("%f", &price);
	total = total + price;
	printf("\nDo you want to add another item? (Enter 1-->Yes and 0--> No)");
	printf("\nEnter the number: ");
	scanf("%d", &num);
	while (num == 1)
	{
		printf("\nEnter the price of the item: ");
		scanf("%f", &price);
		total = total + price;
		printf("\nDo you want to add another item? (Enter 1-->Yes and 0--> No)");
		printf("\nEnter the number: ");
		scanf("%d", &num);
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
	printf("\nThe total price is: %.2f", total);
	printf("\nThe discount is: %.2f", discount);
	printf("\nThe final amount is: %.2f", final_amount);
	return 0;
}

