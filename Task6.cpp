#include <stdio.h>
int main()
{
	int amount_saved, total_savings=0, numdeposit=0;
	printf("This is a program written in C to demonstrate the use of while loop");
	printf("\nEnter the amount saved by the student: "); //amount saved by the student is considered one deposit
	scanf("%d", &amount_saved);
    if (amount_saved > 0)
    {
    numdeposit = numdeposit + 1;
    total_savings = total_savings + amount_saved;
    }
while (amount_saved > 0)
{
	printf("\nEnter the amount saved by the student again: "); //amount saved by the student is considered one deposit
	scanf("%d", &amount_saved);
	if (amount_saved >0)
	{
    numdeposit = numdeposit + 1;
	total_savings = total_savings + amount_saved ;
    }	
}
	printf("\nThe total savings accumulated by the student are: %d", total_savings);
	printf("\nThe number of deposits is: %d", numdeposit);
	return 0;
}


