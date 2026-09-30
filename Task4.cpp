#include <stdio.h>
int main()
{
	int marks, num, studentnum = 0; 
	printf("This is a program written in C to demonstrate the use of while loop");
	printf("\nEnter the marks obtained by the student: ");
	scanf("%d", &marks);
	printf("\nDo you want to enter marks again for another student? Enter 1-->Yes and 0--> No");
	printf("\nEnter the number: ");
	scanf("%d", &num);	
	studentnum= studentnum + 1;
	while (num == 1)
	{
	printf("\nEnter the marks obtained by the student: ");
	scanf("%d", &marks);
	printf("\nDo you want to enter marks again for another student? Enter 1-->Yes and 0--> No");
	printf("\nEnter the number: ");
	scanf("%d", &num);
	studentnum= studentnum + 1;
	} 
    printf("\n The marks entered by the user is: %d", marks);
    printf("\n The total number of student is: %d", studentnum);
	return 0;
}





