#include <stdio.h>
int main()
{
	int marks, total_marks = 0, numstudents = 0;
	float average;
	printf("This is a program written in C to demonstrate the use of while loop");
	printf("\nEnter the marks obtained by the student (Enter -1 to stop): ");
	scanf("%d", &marks);
	while (marks >= 0 && marks <= 100)
	{
		total_marks = total_marks + marks;
		numstudents = numstudents + 1;
		printf("\nEnter the marks obtained by the student again (Enter -1 to stop): ");
		scanf("%d", &marks);
	}
	if (numstudents == 0)
	{
		printf("\nNo valid marks were entered");
	}
	else
	{
		average = (float)total_marks / numstudents;
		printf("\nThe total marks are: %d", total_marks);
		printf("\nThe number of students is: %d", numstudents);
		printf("\nThe average marks are: %.2f", average);
	}
	return 0;
}



