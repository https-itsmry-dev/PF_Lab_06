#include <stdio.h>
int main()
{
	int marks[5], i, total_marks = 0, highest, lowest;
	float average;
	printf("This is a program written in C to demonstrate the use of array and for loop");
	for (i=0; i<5; i++)
	{
		printf("\nEnter the marks of each student respectively: ");
		scanf("%d", &marks[i]);
	}
	highest = marks[0];
	lowest = marks[0];
	for (i=0; i<5; i++)
	{
		total_marks = total_marks + marks[i];
		if (marks[i] > highest)
		{
			highest = marks[i];
		}
		if (marks[i] < lowest)
		{
			lowest = marks[i];
		}
	}
	average = (float)total_marks / 5;
	printf("\nThe total marks are: %d", total_marks);
	printf("\nThe average marks are: %.2f", average);
	printf("\nThe highest marks are: %d", highest);
	printf("\nThe lowest marks are: %d", lowest);
	return 0;
}

