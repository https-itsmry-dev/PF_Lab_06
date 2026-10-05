#include <stdio.h>
int main()
{
	int amount, total_recharge = 0, numrecharge = 0;
	printf("This is a program written in C to demonstrate the use of while loop");
	printf("\nEnter the recharge amount: ");
	scanf("%d", &amount);
	while (amount > 0 && total_recharge <= 5000)
	{
		total_recharge = total_recharge + amount;
		numrecharge = numrecharge + 1;
		if (total_recharge > 5000)
		{
			printf("\nRecharge Limit Reached");
		}
		else
		{
			printf("\nEnter the recharge amount again: ");
			scanf("%d", &amount);
		}
	}
	printf("\nThe total recharged amount is: %d", total_recharge);
	printf("\nThe number of recharge attempts is: %d", numrecharge);
	return 0;
}

