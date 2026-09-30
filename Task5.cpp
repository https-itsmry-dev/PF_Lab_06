#include <stdio.h>
int main()
{
	int temp, i, total_temp=0, greater_temp=0;
	printf("This is a program written in C to demonstrate the use of for loop");
	
	for (i=1; i<=7; i++)
	{
	printf("\nEnter the temp for each day of the week respectively: ");
	scanf("%d", &temp);

	total_temp = total_temp + temp;
	if (temp> 100)
	{
		greater_temp= greater_temp + 1;
	}
	}
	printf("\nThe total temperature is: %d", total_temp);
	printf("\nThe number of temperatures greater than 100 is: %d", greater_temp);
	
	return 0;
}


