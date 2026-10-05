#include <stdio.h>
int main()
{
	int units[5], i, total_units = 0, highest, lowest;
	float bill, total_amount = 0;
	printf("This is a program written in C to demonstrate the use of array and for loop");
	for (i=0; i<5; i++)
	{
		printf("\nEnter the units consumed by each household respectively: ");
		scanf("%d", &units[i]);
	}
	highest = units[0];
	lowest = units[0];
	for (i=0; i<5; i++)
	{
		total_units = total_units + units[i];
		if (units[i] > highest)
		{
			highest = units[i];
		}
		if (units[i] < lowest)
		{
			lowest = units[i];
		}
		bill = units[i] * 10;
		if (units[i] > 500)
		{
			bill = bill + (bill * 0.05);
		}
		printf("\nThe bill of the household is: %.2f", bill);
		total_amount = total_amount + bill;
	}
	printf("\nThe total units consumed are: %d", total_units);
	printf("\nThe highest units are: %d", highest);
	printf("\nThe lowest units are: %d", lowest);
	printf("\nThe total amount collected is: %.2f", total_amount);
	return 0;
}


