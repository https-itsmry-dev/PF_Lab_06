#include <stdio.h>
int main()
{
	int salary[6], i, count = 0;
	printf("This is a program written in C to demonstrate the use of array and for loop");
	for (i=0; i<6; i++)
	{
		printf("\nEnter the salary of employee %d: ", i+1);
		scanf("%d", &salary[i]);
	}
	for (i=0; i<6; i++)
	{
		printf("\nThe salary of employee %d is: %d", i+1, salary[i]);
		if (salary[i] > 50000)
		{
			count = count + 1;
		}
	}
	printf("\nThe number of employees whose salary is greater than 50000 is: %d", count);
	return 0;
}


