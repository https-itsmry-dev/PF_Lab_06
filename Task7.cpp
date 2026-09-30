#include <stdio.h>
int main()
{
	int food_price, total_bill = 0, ordered_items= 0, num;
	char food_name [25]; 
	printf("This is a program written in C to demonstrate the use of while loop");
	printf("\nEnter the name of the food: ");
	scanf("%s", food_name);
	printf("\nEnter the price of the food item: ");
	scanf("%d", &food_price);
	total_bill = total_bill +food_price;
	ordered_items= ordered_items + 1;
	
	printf("\nDo you want to order another item? (Enter 1-->Yes and 0--> No)");
	printf("\nEnter the number: ");
	scanf("%d", &num);	
	while (num == 1)
{
    printf("\nEnter the name of the food: ");
	scanf("%s", food_name);
	printf("\nEnter the price of the food item: ");
	scanf("%d", &food_price);
	total_bill = total_bill +food_price;
	ordered_items= ordered_items + 1;
	printf("\nDo you want to order another item? (Enter 1-->Yes and 0--> No)");
	printf("\nEnter the number: ");
	scanf("%d", &num);	
     }
    printf("\n The total bill is: %d", total_bill);
    printf("\n The total number of items ordered is: %d", ordered_items);
	return 0;
}


