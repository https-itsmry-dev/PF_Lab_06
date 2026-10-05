#include <stdio.h>
int main()
{
	int pin, attempts = 0;
	printf("This is a program written in C to demonstrate the use of while loop");
	printf("\nEnter the PIN: ");
	scanf("%d", &pin);
	while (pin != 1234 && attempts < 3)
	{
		attempts = attempts + 1;
		printf("\nWrong PIN. The remaining attempts are: %d", 3 - attempts);
		if (attempts < 3)
		{
			printf("\nEnter the PIN again: ");
			scanf("%d", &pin);
		} 
	}
	if (pin == 1234)
	{
		printf("\nLogin Successful");
	}
	else
	{
		printf("\nAccount Locked");
	}
	return 0;
}

