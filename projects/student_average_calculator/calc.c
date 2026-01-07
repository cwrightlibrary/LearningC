// Returns a letter grade based on the average
char gradeFunction(double avg) {
	if (avg >= 90)
		return 'A';
	else if (avg >= 80)
		return 'B';
	else if (avg >= 70)
		return 'C';
	else if (avg >= 60)
		return 'D';
	else
		return 'F';
}

int main(void) {
	int count;
	double sum = 0, grade;

	// Ask to enter total grades (between 1 and 5)
	printf("How many grades (1 to 5)? ");
	scanf("%d", &count);

	// Validate count is between 1 and 5
	if (count < 1 || count > 5) {
		printf("Invalid number. You must enter between 1 and 5 grades.\n");
		return 1; // Exit
	}

	for (int i = 1; i <= count; i++) {
		printf("Enter grade %d: ", i);
		scanf("%lf", &grade);
		sum += grade;
	}

	// Calculate the average score
	double avg = sum / count;

	// Display numeric average
	printf("Average: %.2f\n", avg);

	// Display letter grade
	printf("Letter grade: %c\n", gradeFunction(avg));

	return 0;
}