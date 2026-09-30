#include <stdio.h>
int main()
{
	int i=1;
	printf("This is a program written in C to demonstrate the use of while loop");
	printf("\nEnter the number: ");
	scanf("%d", &i);
	while (i!= 0)
	{
		printf("\n The number entered by the user is: %d", i);
		printf("\n The cube of the number is: %d", i*i*i);
		printf("\nEnter the number: ");
	    scanf("%d", &i);
	}
return 0;
}

