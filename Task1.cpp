#include <stdio.h>
int main()
{
	int amount, balance = 50000, numwithdrawal = 0;
	printf("This is a program written in C to demonstrate the use of while loop");
	printf("\nEnter the withdrawal amount: ");
	scanf("%d", &amount);
	while (amount > 0)
	{
		balance = balance - amount;
		numwithdrawal = numwithdrawal + 1;
		printf("\nEnter the withdrawal amount again: ");
		scanf("%d", &amount);
	}
	printf("\nThe remaining balance is: %d", balance);
	printf("\nThe number of withdrawals is: %d", numwithdrawal);
	return 0;
}

