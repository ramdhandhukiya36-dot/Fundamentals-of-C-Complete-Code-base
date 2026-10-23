#include <stdio.h>
int main()
{
	int rollNo[5];
	int marks[5];
	int i;
	
	for(i = 0; i<5; i++)
	{
	
		printf("Enter roll number of student %d:", i + 1);
		scanf("%d", &rollNo[i]);

		printf("Enter marks of student %d:", i + 1);
		scanf("%d", &marks [i]);

	}

		printf("\n--- Student Details ---\n");

		for(i = 0; i<5; i++)
		
		{
		printf("Roll Number: %d\tMarks: %d\n", rollNo[i], marks[i]);
		}
		
	return 0;
}                                                                                                                                                                                                                                   =